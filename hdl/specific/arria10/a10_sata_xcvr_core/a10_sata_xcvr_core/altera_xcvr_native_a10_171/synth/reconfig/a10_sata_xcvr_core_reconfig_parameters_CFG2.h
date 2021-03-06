#ifndef __A10_SATA_XCVR_CORE_RECONFIG_PARAMETERS_CFG2_H__
#define __A10_SATA_XCVR_CORE_RECONFIG_PARAMETERS_CFG2_H__

#ifdef A10_SATA_XCVR_CORE_CFG2_DECLARE_RAM_ARRAY
#define A10_SATA_XCVR_CORE_CFG2_RAM_SIZE 3
unsigned int a10_sata_xcvr_core_CFG2_ram_array[3] = {
    0x1190C00, /* [25:16]-DPRIO address=0x119; [15:8]-bit mask=0x0C; [3:2]-pma_cgb_x1_div_m_sel=divbypass(2'h0); */
    0x1350C0C, /* [25:16]-DPRIO address=0x135; [15:8]-bit mask=0x0C; [3:2]-cdr_pll_lf_resistor_pd=lf_pd_setting3(2'h3); */
    0x13A3818  /* [25:16]-DPRIO address=0x13A; [15:8]-bit mask=0x38; [5:3]-cdr_pll_pd_l_counter=2(3'h3); */
};
#endif

#define A10_SATA_XCVR_CORE_CFG2_HSSI_TX_PLD_PCS_INTERFACE_HD_CHNL_PMA_TX_CLK_HZ_VALUE 300000000

#define A10_SATA_XCVR_CORE_CFG2_HSSI_TX_PLD_PCS_INTERFACE_HD_CHNL_PLD_TX_CLK_HZ_VALUE 150000000

#define A10_SATA_XCVR_CORE_CFG2_HSSI_RX_PLD_PCS_INTERFACE_HD_CHNL_PMA_RX_CLK_HZ_VALUE 300000000

#define A10_SATA_XCVR_CORE_CFG2_HSSI_RX_PLD_PCS_INTERFACE_HD_CHNL_PLD_RX_CLK_HZ_VALUE 150000000

#define A10_SATA_XCVR_CORE_CFG2_PMA_ADAPT_DATARATE_VALUE "6000000000 bps"

#define A10_SATA_XCVR_CORE_CFG2_PMA_CGB_DATARATE_VALUE "6000000000 bps"

#define A10_SATA_XCVR_CORE_CFG2_PMA_CGB_X1_DIV_M_SEL_VALUE "divbypass"
#define A10_SATA_XCVR_CORE_CFG2_PMA_CGB_X1_DIV_M_SEL_ADDR_OFST 281
#define A10_SATA_XCVR_CORE_CFG2_PMA_CGB_X1_DIV_M_SEL_ADDR_FIELD_OFST 2
#define A10_SATA_XCVR_CORE_CFG2_PMA_CGB_X1_DIV_M_SEL_ADDR_FIELD_HIGH 3
#define A10_SATA_XCVR_CORE_CFG2_PMA_CGB_X1_DIV_M_SEL_ADDR_FIELD_SIZE 2
#define A10_SATA_XCVR_CORE_CFG2_PMA_CGB_X1_DIV_M_SEL_ADDR_FIELD_BITMASK 0x0000000C
#define A10_SATA_XCVR_CORE_CFG2_PMA_CGB_X1_DIV_M_SEL_ADDR_FIELD_VALMASK 0x00000000
#define A10_SATA_XCVR_CORE_CFG2_PMA_CGB_X1_DIV_M_SEL_ADDR_FIELD_VALUE 0x0

#define A10_SATA_XCVR_CORE_CFG2_PMA_RX_DFE_DATARATE_VALUE "6000000000 bps"

#define A10_SATA_XCVR_CORE_CFG2_PMA_RX_ODI_DATARATE_VALUE "6000000000 bps"

#define A10_SATA_XCVR_CORE_CFG2_PMA_RX_BUF_DATARATE_VALUE "6000000000 bps"

#define A10_SATA_XCVR_CORE_CFG2_PMA_RX_BUF_XRX_PATH_DATARATE_VALUE "6000000000 bps"

#define A10_SATA_XCVR_CORE_CFG2_PMA_RX_BUF_XRX_PATH_PMA_RX_DIVCLK_HZ_VALUE "300000000"

#define A10_SATA_XCVR_CORE_CFG2_PMA_TX_BUF_DATARATE_VALUE "6000000000 bps"

#define A10_SATA_XCVR_CORE_CFG2_PMA_TX_BUF_XTX_PATH_DATARATE_VALUE "6000000000 bps"

#define A10_SATA_XCVR_CORE_CFG2_PMA_TX_BUF_XTX_PATH_CLOCK_DIVIDER_RATIO_VALUE 1

#define A10_SATA_XCVR_CORE_CFG2_PMA_TX_BUF_XTX_PATH_PMA_TX_DIVCLK_HZ_VALUE "300000000"

#define A10_SATA_XCVR_CORE_CFG2_PMA_TX_BUF_XTX_PATH_TX_PLL_CLK_HZ_VALUE "3000000000"

#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_DATARATE_VALUE "6000000000 bps"

#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_LPD_COUNTER_VALUE 2

#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_OUTPUT_CLOCK_FREQUENCY_VALUE "3000000000 Hz"

#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_LF_RESISTOR_PD_VALUE "lf_pd_setting3"
#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_LF_RESISTOR_PD_ADDR_OFST 309
#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_LF_RESISTOR_PD_ADDR_FIELD_OFST 2
#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_LF_RESISTOR_PD_ADDR_FIELD_HIGH 3
#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_LF_RESISTOR_PD_ADDR_FIELD_SIZE 2
#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_LF_RESISTOR_PD_ADDR_FIELD_BITMASK 0x0000000C
#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_LF_RESISTOR_PD_ADDR_FIELD_VALMASK 0x0000000C
#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_LF_RESISTOR_PD_ADDR_FIELD_VALUE 0x3

#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_PD_L_COUNTER_VALUE 2
#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_PD_L_COUNTER_ADDR_OFST 314
#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_PD_L_COUNTER_ADDR_FIELD_OFST 3
#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_PD_L_COUNTER_ADDR_FIELD_HIGH 5
#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_PD_L_COUNTER_ADDR_FIELD_SIZE 3
#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_PD_L_COUNTER_ADDR_FIELD_BITMASK 0x00000038
#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_PD_L_COUNTER_ADDR_FIELD_VALMASK 0x00000018
#define A10_SATA_XCVR_CORE_CFG2_CDR_PLL_PD_L_COUNTER_ADDR_FIELD_VALUE 0x3

#define A10_SATA_XCVR_CORE_CFG2_PMA_RX_DESER_DATARATE_VALUE "6000000000 bps"

#endif //__A10_SATA_XCVR_CORE_RECONFIG_PARAMETERS_CFG2_H__
