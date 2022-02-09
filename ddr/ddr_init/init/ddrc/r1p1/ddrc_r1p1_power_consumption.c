#include "debug.h"

/**************************************
 ;case                  nr      state
 ;
 ;CASE_BIST_READ        0       [done]
 ;CASE_BIST_WRITE,      1       [done]
 ;CASE_BIST_SIPI,       2       [x]
 ;CASE_POWER_DOWN1,     3       [done]
 ;CASE_POWER_DOWN2,     4       [done]
 ;CASE_POWER_DOWN3,     5       [done]
 ;CASE_POWER_DOWN4,     6       [done]=SR
 ;CASE_SELF_REFRESH,    7       [x]
 ;CASE_LIGHT_RETENTION, 8       [done]
 ;CASE_LIGHT,           9       [done]
 ;CASE_PUB_POWER_DOWN,  0xa     [x]
 ;CASE_CHANNEL_POWER,   0xb     [x]
 ;CASE_DEEP_SLEEP,      0xc     [done]
 ;CASE_IDLE,            0xd     [done]
 ;CASE_LIGHT_AUTO       0xe     [done]=smart light
 ;CASE_RPULL            0xf     [done]
 ;CASE_BYPASS_DESKEW,   0x10    [done]
 ;CASE_POWER_DOWN5,     0x11    [done]
 ;CASE_POWER_DOWN6,     0x12    [done]
 ;CASE_POWER_DOWN7,     0x13    [done]
 ;**************************************

 ;DFS freq
 ;
 ;0 - 233MHz
 ;1 - 364MHz
 ;2 - 622MHz
 ;3 - 933MHz
 ;**************************************
*/
#ifdef POWER_TEST

#include "ddrc_r1p1.h"
#include "ddr_common.h"
//#include "ddrc_r1p1_power_consumption.h"

#define PWR_CONS_MEAS_UART_EN
#define PWR_CONS_MEAS_LOG_EN
#define PWRTEST_ARUGMENTS_ADDR (0x00800000)

#define BIST_LEN (0x20000)
#define BIST_CHN0_START_ADDR (0x0)
#define BIST_CHN1_START_ADDR (0x30000000)
#define BIST_CHN2_START_ADDR (0x60000000)

enum PWR_CASE_SLT{
    DDR_IDLE,
    DDR_SR,
    DDR_PD,
    DDR_WRITE,
    DDR_READ,
    PUB_LS,
    PUB_DS
};

#define RX_BUF_MAX_SIZE 2000
char uart_rx_buf[RX_BUF_MAX_SIZE];
uint32 g_uart_rx_buf_index = 0;
uint32 g_uart_rx_buf_index_avild = 0;
uint32 current_freq_fn=0;
int  print_Dec(u32 val){
	if(val <0){
		dmc_print_str("-");
		val = 0 - val;
	}
	dmc_print_str(toStrDec(val));
	return 0;
}
static void pwr_uart_put(char *string)
{
    #ifdef PWR_CONS_MEAS_LOG_EN
    serial_puts(string);
    #endif
}

static char * pwr_uart_get(void)
{
    #ifdef PWR_CONS_MEAS_UART_EN
    char tmp = 0;
    g_uart_rx_buf_index_avild = g_uart_rx_buf_index;
    do{
        tmp = (serial_getc());
        uart_rx_buf[g_uart_rx_buf_index++] = tmp;
    }while('\r' != tmp);
    uart_rx_buf[g_uart_rx_buf_index-1] = '\0';
    return &(uart_rx_buf[g_uart_rx_buf_index_avild]);
    #endif
}

#define VR1P1
#ifdef VR1P1
/****************************************
pub_sys_force_light_sleep 0x402B00CC[29]
pd_pub_sys_state 0x402B00C4[24:20]
****************************************/
#define  PUB_SYS_AUTO_LIGHT_SLEEP_ENABLE  0x322800C8
#define  REG_PMU_APB_DDR_SLP_CTRL_CFG0    0x322800d8
#define  REG_PMU_APB_PUB_ACC_RDY          0x32280250

void  ddr_idle_entry()
{
    DDRC_R1P1_REG_INFO_PTR pdmc = (DDRC_R1P1_REG_INFO_PTR)DMC_REG_ADDR_BASE_PHY;
    u32 val ,num, mr0;
    pdmc->dmc_lock_cfg = 0xdeadbeef;//unlock ddr registor
    /* disable pub light sleep */
    reg_bits_set(PUB_SYS_AUTO_LIGHT_SLEEP_ENABLE, 0, 16, 0);
    REG32(REG_PMU_APB_DDR_SLP_CTRL_CFG0) &= (~BIT_PMU_APB_PUB_SYS_SMART_LSLP_ENA);
    /*Step 1.setting lowpower*/
    val = pdmc->dmc_cfg0;
    val = u32_bits_set(val, 8, 2, 0x2);//bit[9] auto gate bit[8] auto sleep
    pdmc->dmc_cfg0 = val;

    val = pdmc->dmc_dcfg9;
    val = u32_bits_set(val, 0, 3, 0x0); /*drf_auto_clk_stop_en_ahb : 0 */
                                    /*drf_auto_pwr_down_en_ahb : 0 */
                                    /*drf_auto_self_ref_en_ahb : 0 */
    /* disable per cs en */
    val = u32_bits_set(val, 12, 3, 0x0); /*bit [12]drf_ext_clk_ag_en*/
                                            /*bit [13]drf_auto_pwr_down_percs_en*/
                                            /*bit [14]drf_auto_self_refresh_percs_en*/
    pdmc->dmc_dcfg9 = val;

//    ddr_test();
    udelay(100);
    while(0 != ((pdmc->dmc_dcfg9 >> 24) & (0x3)));     //1:sleep 0:resuned; [24]:cs0, [25]:cs1.

}
void  ddr_pd_entry()
{
    DDRC_R1P1_REG_INFO_PTR pdmc = (DDRC_R1P1_REG_INFO_PTR)DMC_REG_ADDR_BASE_PHY;
    u32 val ,num, mr0;
    ddr_idle_entry();
    /*Step 1.setting lowpower*/
    val = pdmc->dmc_dcfg9;
    val = u32_bits_set(val, 0, 3, 0x3); /*drf_auto_clk_stop_en_ahb : 1 */
                                    /*drf_auto_pwr_down_en_ahb : 1 */
                                    /*drf_auto_self_ref_en_ahb : 0 */
    /* disable per cs en */
    val = u32_bits_set(val, 12, 3, 0x2); /*bit [12]drf_ext_clk_ag_en*/
                                            /*bit [13]drf_auto_pwr_down_percs_en*/
                                            /*bit [14]drf_auto_self_refresh_percs_en*/
    pdmc->dmc_dcfg9 = val;

    udelay(100);
    while(3 != ((pdmc->dmc_dcfg9 >> 24) & (0x3)));     //1:sleep 0:resuned; [24]:cs0, [25]:cs1.
}
void  ddr_srf_entry()
{
    DDRC_R1P1_REG_INFO_PTR pdmc = (DDRC_R1P1_REG_INFO_PTR)DMC_REG_ADDR_BASE_PHY;
    u32 val ,num, mr0;
    ddr_idle_entry();
    /*Step 1.setting lowpower*/
    val = pdmc->dmc_dcfg9;
    val = u32_bits_set(val, 0, 3, 0x5); /*drf_auto_clk_stop_en_ahb : 1 */
                                    /*drf_auto_pwr_down_en_ahb : 0 */
                                    /*drf_auto_self_ref_en_ahb : 1 */
    /* disable per cs en */
    val = u32_bits_set(val, 12, 3, 0x5); /*bit [12]drf_ext_clk_ag_en*/
                                            /*bit [13]drf_auto_pwr_down_percs_en*/
                                            /*bit [14]drf_auto_self_refresh_percs_en*/
    pdmc->dmc_dcfg9 = val;

    udelay(100);
    while(3 != ((pdmc->dmc_dcfg9 >> 24) & (0x3)));     //1:sleep 0:resuned; [24]:cs0, [25]:cs1.

}

void  pub_ls_entry()
{
    //REG32(REG_PMU_APB_PUB_ACC_RDY) = 0x0;

    ddr_idle_entry();
    ddr_srf_entry();
    reg_bits_set(0x32280548, 7, 1, 1);
    /* enable pub smart light sleep */
    reg_bits_set(PUB_SYS_AUTO_LIGHT_SLEEP_ENABLE, 0, 16, 0xFFFF);
    REG32(REG_PMU_APB_DDR_SLP_CTRL_CFG0) |= (BIT_PMU_APB_PUB_SYS_SMART_LSLP_ENA);
    while(0x6 != ((REG32(0x322806c4) >> 0) & (0xf)));
}
void  pub_ds_entry()
{
    reinit_handler(1);
}

#define LP_CFG_DEFAULT
void  ddr_idle_exit()
{
    #ifdef LP_CFG_DEFAULT
    ctrl_post_set_seq();
    ddrc_lowpower_setting();
    #else
    DDRC_R1P1_REG_INFO_PTR pdmc = (DDRC_R1P1_REG_INFO_PTR)DMC_REG_ADDR_BASE_PHY;
    u32 val ,num, mr0;
    /*Step 1.setting lowpower*/
    val = pdmc->dmc_cfg0;
    val = u32_bits_set(val, 8, 2, 0x3);//bit[9] auto gate bit[8] auto sleep
    pdmc->dmc_cfg0 = val;

    val = pdmc->dmc_dcfg9;
    val = u32_bits_set(val, 0, 3, 0x5); /*drf_auto_clk_stop_en_ahb : 1 */
                                    /*drf_auto_pwr_down_en_ahb : 0 */
                                    /*drf_auto_self_ref_en_ahb : 1 */
    /* enable per cs en */
    val = u32_bits_set(val, 12, 2, 0x1);/*bit [12]drf_ext_clk_ag_en*/
                                    /*bit [13]drf_auto_pwr_down_percs_en*/
    #ifdef LP4_PINMUX_CASE1
    val = u32_bits_set(val, 14, 1, 0x0);/*bit [14]drf_auto_self_refresh_percs_en*/
    #else
    val = u32_bits_set(val, 14, 1, 0x1);
    #endif
    pdmc->dmc_dcfg9 = val;

    /* enable pub light sleep */
    reg_bits_set(PUB_SYS_AUTO_LIGHT_SLEEP_ENABLE, 0, 16, 0xFFFF);
    REG32(REG_PMU_APB_DDR_SLP_CTRL_CFG0) |= (BIT_PMU_APB_PUB_SYS_SMART_LSLP_ENA);
    udelay(100);
    #endif
}
void  ddr_pd_exit()
{
    ddr_idle_entry();
    ddr_idle_exit();
}
void  ddr_srf_exit()
{
    ddr_idle_entry();
    ddr_idle_exit();
}

void  pub_ls_exit()
{
    reg_bits_set(0x32280548, 7, 1, 0);
    ddr_idle_entry();
    ddr_idle_exit();
}
void  pub_ds_exit()
{
    reinit_handler(0);
    ddr_idle_entry();
    ddr_idle_exit();
}
#else
void  ddr_idle_entry()
{
}
void  ddr_pd_entry()
{
}
void  ddr_srf_entry()
{

}
void  ddr_bist_read_entry()
{
}
void  ddr_bist_write_entry()
{
}
void  pub_ls_entry()
{
}
void  pub_ds_entry()
{
}


void  ddr_idle_exit()
{
}
void  ddr_pd_exit()
{
}
void  ddr_srf_exit()
{
}
void  ddr_bist_read_exit()
{
}
void  ddr_bist_write_exit()
{
}

void  pub_ls_exit()
{
}
void  pub_ds_exit()
{
}
#endif

#if 0 //!(defined DFS_SUPPORT)
void sw_dfs_go(ddr_freq)
{
}
#endif
static int sprd_strcmp(const char * cs,const char * ct)
{
	register signed char __res;

	while (1) {
            if(('\n' == *cs)||('\r' == *cs)){
                cs++;
                continue;
            }
		if ((__res = *cs - *ct++) != 0 || !*cs++)
			break;
	}

	return __res;
}

uint32 test_case_detect(char *uart_s)
{
    uint32 ret = 0xffff;
    if((0 == sprd_strcmp(uart_s, "0")) || (0 == sprd_strcmp(uart_s, "idle")))
        ret = 0;
    else if((0 == sprd_strcmp(uart_s, "1")) || (0 == sprd_strcmp(uart_s, "self refresh")))
        ret = 1;
    else if((0 == sprd_strcmp(uart_s, "2")) || (0 == sprd_strcmp(uart_s, "power down")))
        ret = 2;
    else if((0 == sprd_strcmp(uart_s, "3")) || (0 == sprd_strcmp(uart_s, "read")))
        ret = 3;
    else if((0 == sprd_strcmp(uart_s, "4")) || (0 == sprd_strcmp(uart_s, "write")))
        ret = 4;
    else if((0 == sprd_strcmp(uart_s, "5")) || (0 == sprd_strcmp(uart_s, "pub light sleep")))
        ret = 5;
    else if((0 == sprd_strcmp(uart_s, "6")) || (0 == sprd_strcmp(uart_s, "pub deep sleep")))
        ret = 6;
    else if(0 == sprd_strcmp(uart_s, "7"))
        ret = 7;
    return ret;
}

uint32 ddr_freq_detect(char *uart_s)
{
    uint32 ret = 0xffff;
    if((0 == sprd_strcmp(uart_s, "0")) || (0 == sprd_strcmp(uart_s, "256")))
        ret = 256;
    else if((0 == sprd_strcmp(uart_s, "1")) || (0 == sprd_strcmp(uart_s, "384")))
        ret = 384;
    else if((0 == sprd_strcmp(uart_s, "2")) || (0 == sprd_strcmp(uart_s, "667")))
        ret = 667;
    else if((0 == sprd_strcmp(uart_s, "3")) || (0 == sprd_strcmp(uart_s, "768")))
        ret = 768;
    else if((0 == sprd_strcmp(uart_s, "4")) || (0 == sprd_strcmp(uart_s, "1024")))
        ret = 1024;
    else if((0 == sprd_strcmp(uart_s, "5")) || (0 == sprd_strcmp(uart_s, "1333")))
        ret = 1333;
    else if((0 == sprd_strcmp(uart_s, "6")) || (0 == sprd_strcmp(uart_s, "1536")))
        ret = 1536;
    else if((0 == sprd_strcmp(uart_s, "7")) || (0 == sprd_strcmp(uart_s, "1866")))
        ret = 1866;
    return ret;
}
void power_test_pre_set()
{
	reg_bits_set(REG_PUB_APB_PUB_DDR_CHN_LP_CTRL, 8, 8, 0xFF);//ddr channelx axi lower power en
	reg_bits_set(REG_PUB_APB_PUB_BUS_CK_EB, 10, 1, 0x0);
	reg_bits_set(REG_PUB_APB_DMC_CLK_INIT_CFG, 25, 1, 0x1);
}
void power_consumption_measure_entry()
{
    #ifdef PWR_CONS_MEAS_UART_EN
    char * uart_string = 0;
    uint32 case_num = 0;
    uint32 ddr_freq = 0;
    uint32 ddr_write_flag=1;
    uint32 uart_rx_buf_index = 0;
    DDRC_R1P1_REG_INFO_PTR pdmc = (DDRC_R1P1_REG_INFO_PTR)DMC_REG_ADDR_BASE_PHY;

	power_test_pre_set();

//    serial_init();
//    pwr_DMC_ReInit();
freq_change:
    //REG32(REG_PMU_APB_PUB_ACC_RDY) = 0x1;
    g_uart_rx_buf_index = 0;
    pwr_uart_put("\r\nIf you want change DDR frequency, type the number:     ");
    pwr_uart_put("\r\n0:256M                  \r\n1:384M                  \r\n2:667M                  \r\n3:768M                  \r\n4:1024M               \r\n5:1333M                  \r\n6:1536M                  \r\n7:1866M            ");
    pwr_uart_put("\r\nAny other key will skip to change the DDR frequency.");
    uart_string = pwr_uart_get();
    pwr_uart_put("\r\nUser's input: ");
    pwr_uart_put(uart_string);
    uart_rx_buf_index = g_uart_rx_buf_index;
    ddr_freq = ddr_freq_detect(uart_string);

    if(0xffff != ddr_freq)
    {
		//reg_bits_set(PUB_SYS_AUTO_LIGHT_SLEEP_ENABLE, 0, 16, 0);
     	 sw_dfs_go(ddr_freq);
        pwr_uart_put("\r\nDDR Freqency scale sucess.");
    }
    else
    {
        pwr_uart_put("\r\nDDR Freqency scale skip.");
    }
    REG32(REG_PMU_APB_PUB_ACC_RDY) = 0x1;

uart_get:
    pwr_uart_put("\r\nDDR power consumption measure process.Please slect test case:     ");
    pwr_uart_put("\r\n0: idle");
    pwr_uart_put("\r\n1: self refresh");
    pwr_uart_put("\r\n2: power down");
    pwr_uart_put("\r\n3: read");
    pwr_uart_put("\r\n4: write");
    pwr_uart_put("\r\n5: pub light sleep");
    pwr_uart_put("\r\n6: pub deep sleep");
//    pwr_uart_put("\r\n7: change DDR frequency");
    pwr_uart_put("\r\nType 0 or idle to slect idle case.     ");

    g_uart_rx_buf_index = uart_rx_buf_index;
    uart_string = pwr_uart_get();
    pwr_uart_put("\r\nUser's input: ");
    pwr_uart_put(uart_string);
    case_num = test_case_detect(uart_string);
    switch(case_num){
        case 0:
//"idle":
            ddr_idle_entry();
            pwr_uart_put("\r\nDDR has stayed in idle status.");
            pwr_uart_put("\r\nType any key to exit current status.");
            pwr_uart_get();
            pwr_uart_put("\r\nUser's input: ");
            pwr_uart_put(uart_string);
            pwr_uart_put(&(uart_rx_buf[g_uart_rx_buf_index]));
            ddr_idle_exit();
            break;
        case 1:
//"self refresh":
            ddr_srf_entry();
            pwr_uart_put("\r\nDDR has stayed in self refresh status.");
            pwr_uart_put("\r\nType any key to exit current status.");
            pwr_uart_get();
            pwr_uart_put("\r\nUser's input: ");
            pwr_uart_put(uart_string);
            ddr_srf_exit();
            break;
        case 2:
//"power down":
            ddr_pd_entry();
            pwr_uart_put("\r\nDDR has stayed in power down status.");
            pwr_uart_put("\r\nType any key to exit current status.");
            pwr_uart_get();
            pwr_uart_put("\r\nUser's input: ");
            pwr_uart_put(uart_string);
            ddr_pd_exit();
            break;
        case 3:
//"read":
	    ddr_bist_read_entry();
            pwr_uart_put("\r\nDDR has stayed in burst read status, using bist modle.");
            pwr_uart_put("\r\nType any key to exit current status.");
            pwr_uart_get();
            pwr_uart_put("\r\nUser's input: ");
            pwr_uart_put(uart_string);
            ddr_bist_read_exit();
            break;
        case 4:
//"write":
            ddr_bist_write_entry();
            pwr_uart_put("\r\nDDR has stayed in burst write status, using bist modle.");
            pwr_uart_put("\r\nType any key to exit current status.");
            pwr_uart_get();
            pwr_uart_put("\r\nUser's input: ");
            pwr_uart_put(uart_string);
            ddr_bist_write_exit();
	    ddr_write_flag=0;
            break;
        case 5:
//"pub light sleep":
            pub_ls_entry();
            pwr_uart_put("\r\nDDR has stayed in light sleep status.");
            pwr_uart_put("\r\nType any key to exit current status.");
            pwr_uart_get();
            pwr_uart_put("\r\nUser's input: ");
            pwr_uart_put(uart_string);
            pub_ls_exit();
            break;
        case 6:
//"pub deep sleep":
            pub_ds_entry();
            pwr_uart_put("\r\nDDR has stayed in deep sleep status.");
            pwr_uart_put("\r\nType any key to exit current status.");
            pwr_uart_get();
            pwr_uart_put("\r\nUser's input: ");
            pwr_uart_put(uart_string);
            pub_ds_exit();
            break;

        case 7:
// "change ddr frequency"
            goto freq_change;
            break;
        default :
            pwr_uart_put("\r\nInvalid option slected. Please type in again.");
            break;

    }
    goto uart_get;
    #endif
}


#endif

