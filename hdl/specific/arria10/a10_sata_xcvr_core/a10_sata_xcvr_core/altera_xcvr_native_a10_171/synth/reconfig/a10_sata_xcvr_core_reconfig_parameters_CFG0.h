#ifndef __A10_SATA_XCVR_CORE_RECONFIG_PARAMETERS_CFG0_H__
#define __A10_SATA_XCVR_CORE_RECONFIG_PARAMETERS_CFG0_H__

#ifdef A10_SATA_XCVR_CORE_CFG0_DECLARE_RAM_ARRAY
#define A10_SATA_XCVR_CORE_CFG0_RAM_SIZE 3
unsigned int a10_sata_xcvr_core_CFG0_ram_array[3] = {
    0x1190C08, /* [25:16]-DPRIO address=0x119; [15:8]-bit mask=0x0C; [3:2]-pma_cgb_x1_div_m_sel=divby4(2'h2); */
    0x1350C00, /* [25:16]-DPRIO address=0x135; [15:8]-bit mask=0x0C; [3:2]-cdr_pll_lf_resistor_pd=lf_pd_setting0(2'h0); */
    0x13A3828  /* [25:16]-DPRIO address=0x13A; [15:8]-bit mask=0x38; [5:3]-cdr_pll_pd_l_counter=8(3'h5); */
};
#endif

#define A10_SATA_XCVR_CORE_CFG0_HSSI_TX_PLD_PCS_INTERFACE_HD_CHNL_PMA_TX_CLK_HZ_VALUE 75000000

#define A10_SATA_XCVR_CORE_CFG0_HSSI_TX_PLD_PCS_INTERFACE_HD_CHNL_PLD_TX_CLK_HZ_VALUE 37500000

#define A10_SATA_XCVR_CORE_CFG0_HSSI_RX_PLD_PCS_INTERFACE_HD_CHNL_PMA_RX_CLK_HZ_VALUE 75000000

#define A10_SATA_XCVR_CORE_CFG0_HSSI_RX_PLD_PCS_INTERFACE_HD_CHNL_PLD_RX_CLK_HZ_VALUE 37500000

#define A10_SATA_XCVR_CORE_CFG0_PMA_ADAPT_DATARATE_VALUE "1500000000 bps"

#define A10_SATA_XCVR_CORE_CFG0_PMA_CGB_DATARATE_VALUE "1500000000 bps"

#define A10_SATA_XCVR_CORE_CFG0_PMA_CGB_X1_DIV_M_SEL_VALUE "divby4"
#define A10_SATA_XCVR_CORE_CFG0_PMA_CGB_X1_DIV_M_SEL_ADDR_OFST 281
#define A10_SATA_XCVR_CORE_CFG0_PMA_CGB_X1_DIV_M_SEL_ADDR_FIELD_OFST 2
#define A10_SATA_XCVR_CORE_CFG0_PMA_CGB_X1_DIV_M_SEL_ADDR_FIELD_HIGH 3
#define A10_SATA_XCVR_CORE_CFG0_PMA_CGB_X1_DIV_M_SEL_ADDR_FIELD_SIZE 2
#define A10_SATA_XCVR_CORE_CFG0_PMA_CGB_X1_DIV_M_SEL_ADDR_FIELD_BITMASK 0x0000000C
#define A10_SATA_XCVR_CORE_CFG0_PMA_CGB_X1_DIV_M_SEL_ADDR_FIELD_VALMASK 0x00000008
#define A10_SATA_XCVR_CORE_CFG0_PMA_CGB_X1_DIV_M_SEL_ADDR_FIELD_VALUE 0x2

#define A10_SATA_XCVR_CORE_CFG0_PMA_RX_DFE_DATARATE_VALUE "1500000000 bps"

#define A10_SATA_XCVR_CORE_CFG0_PMA_RX_ODI_DATARATE_VALUE "1500000000 bps"

#define A10_SATA_XCVR_CORE_CFG0_PMA_RX_BUF_DATARATE_VALUE "1500000000 bps"

#define A10_SATA_XCVR_CORE_CFG0_PMA_RX_BUF_XRX_PATH_DATARATE_VALUE "1500000000 bps"

#define A10_SATA_XCVR_CORE_CFG0_PMA_RX_BUF_XRX_PATH_PMA_RX_DIVCLK_HZ_VALUE "75000000"

#define A10_SATA_XCVR_CORE_CFG0_PMA_TX_BUF_DATARATE_VALUE "1500000000 bps"

#define A10_SATA_XCVR_CORE_CFG0_PMA_TX_BUF_XTX_PATH_DATARATE_VALUE "1500000000 bps"

#define A10_SATA_XCVR_CORE_CFG0_PMA_TX_BUF_XTX_PATH_CLOCK_DIVIDER_RATIO_VALUE 4

#define A10_SATA_XCVR_CORE_CFG0_PMA_TX_BUF_XTX_PATH_PMA_TX_DIVCLK_HZ_VALUE "75000000"

#define A10_SATA_XCVR_CORE_CFG0_PMA_TX_BUF_XTX_PATH_TX_PLL_CLK_HZ_VALUE "187500000"

#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_DATARATE_VALUE "1500000000 bps"

#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_LPD_COUNTER_VALUE 8

#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_OUTPUT_CLOCK_FREQUENCY_VALUE "750000000 Hz"

#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_LF_RESISTOR_PD_VALUE "lf_pd_setting0"
#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_LF_RESISTOR_PD_ADDR_OFST 309
#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_LF_RESISTOR_PD_ADDR_FIELD_OFST 2
#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_LF_RESISTOR_PD_ADDR_FIELD_HIGH 3
#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_LF_RESISTOR_PD_ADDR_FIELD_SIZE 2
#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_LF_RESISTOR_PD_ADDR_FIELD_BITMASK 0x0000000C
#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_LF_RESISTOR_PD_ADDR_FIELD_VALMASK 0x00000000
#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_LF_RESISTOR_PD_ADDR_FIELD_VALUE 0x0

#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_PD_L_COUNTER_VALUE 8
#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_PD_L_COUNTER_ADDR_OFST 314
#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_PD_L_COUNTER_ADDR_FIELD_OFST 3
#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_PD_L_COUNTER_ADDR_FIELD_HIGH 5
#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_PD_L_COUNTER_ADDR_FIELD_SIZE 3
#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_PD_L_COUNTER_ADDR_FIELD_BITMASK 0x00000038
#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_PD_L_COUNTER_ADDR_FIELD_VALMASK 0x00000028
#define A10_SATA_XCVR_CORE_CFG0_CDR_PLL_PD_L_COUNTER_ADDR_FIELD_VALUE 0x5

#define A10_SATA_XCVR_CORE_CFG0_PMA_RX_DESER_DATARATE_VALUE "1500000000 bps"

#endif //__A10_SATA_XCVR_CORE_RECONFIG_PARAMETERS_CFG0_H__
