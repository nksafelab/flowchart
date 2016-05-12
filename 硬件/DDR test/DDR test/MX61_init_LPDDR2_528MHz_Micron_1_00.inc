//=============================================================================			
//init script for i.MX6Q LPDDR2			
//=============================================================================			
// Revision History			
// v1.00 : Init version for Micron MT42L64M64D2KH-18 on CPU LPDDR2 board. It's currently soldered, not PoPed.
// Seen passing with overclocking DDR stress test up to 575MHz.
// If someone is playing this init on different DDR device, or on PoPed board, please feedback me with result. 
// boaz.perlman@freescale.com		
//=============================================================================			
			
wait = on			
//=============================================================================			
// Disable	WDOG		
//=============================================================================			
setmem /16	0x020bc000 =	0x30	
			

//=============================================================================			
// Enable all clocks (they are disabled by ROM code)			
//=============================================================================			
setmem /32	0x020c4068 =	0xffffffff	
setmem /32	0x020c406c =	0xffffffff	
setmem /32	0x020c4070 =	0xffffffff	
setmem /32	0x020c4074 =	0xffffffff	
setmem /32	0x020c4078 =	0xffffffff	
setmem /32	0x020c407c =	0xffffffff	
setmem /32	0x020c4080 =	0xffffffff	
setmem /32	0x020c4084 =	0xffffffff	

//setmem /32 0x020c4018 = 0x00060324 //DDR clk to 400MHz	
	
//// Switch PL301_FAST2 to DDR Dual-channel mapping
setmem /32 0x00B00000 = 0x1



//=============================================================================			
// IOMUX			
//=============================================================================			
setmem /32	0x020e05a8 =	0x00003028	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS0 
setmem /32	0x020e05b0 =	0x00003028	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS1 
setmem /32	0x020e0524 =	0x00003028	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS2 
setmem /32	0x020e051c =	0x00003028	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS3 
setmem /32	0x020e0518 =	0x00003028	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS4 
setmem /32	0x020e050c =	0x00003028	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS5 
setmem /32	0x020e05b8 =	0x00003028	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS6 
setmem /32	0x020e05c0 =	0x00003028	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS7 

//setmem /32	0x020e05a8 =	0x00007038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS0 
//setmem /32	0x020e05b0 =	0x00007038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS1 
//setmem /32	0x020e0524 =	0x00007038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS2 
//setmem /32	0x020e051c =	0x00007038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS3 
//setmem /32	0x020e0518 =	0x00007038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS4 
//setmem /32	0x020e050c =	0x00007038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS5 
//setmem /32	0x020e05b8 =	0x00007038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS6 
//setmem /32	0x020e05c0 =	0x00007038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS7 


setmem /32	0x020e05ac =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_DQM0
setmem /32	0x020e05b4 =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_DQM1
setmem /32	0x020e0528 =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_DQM2
setmem /32	0x020e0520 =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_DQM3
setmem /32	0x020e0514 =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_DQM4
setmem /32	0x020e0510 =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_DQM5
setmem /32	0x020e05bc =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_DQM6
setmem /32	0x020e05c4 =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_DQM7
setmem /32	0x020e056c =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_CAS
setmem /32	0x020e0578 =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_RAS
setmem /32	0x020e0588 =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDCLK_0
setmem /32	0x020e0594 =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDCLK_1
setmem /32	0x020e057c =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_RESET
setmem /32	0x020e0590 =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDCKE0
setmem /32	0x020e0598 =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDCKE1
setmem /32	0x020e058c =	0x00000000	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDBA2 - DSE can be configured using Group Control Register: IOMUXC_SW_PAD_CTL_GRP_CTLDS
setmem /32	0x020e059c =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDODT0
setmem /32	0x020e05a0 =	0x00000038	// IOMUXC_SW_PAD_CTL_PAD_DRAM_SDODT1
setmem /32	0x020e0784 =	0x00000038	// IOMUXC_SW_PAD_CTL_GRP_B0DS 
setmem /32	0x020e0788 =	0x00000038	// IOMUXC_SW_PAD_CTL_GRP_B1DS 
setmem /32	0x020e0794 =	0x00000038	// IOMUXC_SW_PAD_CTL_GRP_B2DS 
setmem /32	0x020e079c =	0x00000038	// IOMUXC_SW_PAD_CTL_GRP_B3DS 
setmem /32	0x020e07a0 =	0x00000038	// IOMUXC_SW_PAD_CTL_GRP_B4DS 
setmem /32	0x020e07a4 =	0x00000038	// IOMUXC_SW_PAD_CTL_GRP_B5DS 
setmem /32	0x020e07a8 =	0x00000038	// IOMUXC_SW_PAD_CTL_GRP_B6DS 
setmem /32	0x020e0748 =	0x00000038	// IOMUXC_SW_PAD_CTL_GRP_B7DS 
setmem /32	0x020e074c =	0x00000038	// IOMUXC_SW_PAD_CTL_GRP_ADDDS 
setmem /32	0x020e078c =	0x00000038	// IOMUXC_SW_PAD_CTL_GRP_CTLDS 
setmem /32	0x020e0750 =	0x00020000	// IOMUXC_SW_PAD_CTL_GRP_DDRMODE_CTL 
setmem /32	0x020e0758 =	0x00000000	// IOMUXC_SW_PAD_CTL_GRP_DDRPKE 
setmem /32	0x020e0774 =	0x00020000	// IOMUXC_SW_PAD_CTL_GRP_DDRMODE
setmem /32	0x020e0798 =	0x00080000	// IOMUXC_SW_PAD_CTL_GRP_DDR_TYPE 
			
			
//=============================================================================			
// DDR Controller Registers			
//=============================================================================			
// Manufacturer:	Mocron		
// Device Part Number:	MT42L64M64D2KH-18		
// Clock Freq.: 	528MHz		
// MMDC channels: Both MMDC0, MMDC1 
//Density per CS in Gb: 	256M		
// Chip Selects used:	2		
// Number of Banks:	8		
// Row address:    	14		
// Column address: 	9		
// Data bus width	32		
//=============================================================================			
setmem /32	0x021b001c =	0x00008000	// MMDC0_MDSCR, set the Configuration request bit during MMDC set up

setmem /32	0x021b401c =	0x00008000	// MMDC0_MDSCR, set the Configuration request bit during MMDC set up



setmem /32      0x021b085c = 0x1b5f01ff //LPDDR2 ZQ params
setmem /32      0x021b485c = 0x1b5f01ff


//=============================================================================	
// Calibration setup.
// 
//=============================================================================	

setmem /32	0x021b0800 =	0xa1390000 	// DDR_PHY_P0_MPZQHWCTRL, enable on time ZQ calibration

setmem /32	0x021b4800 =	0xa1390000 	// DDR_PHY_P0_MPZQHWCTRL, enable on time ZQ calibration


setmem /32 0x021b0890 = 0x00400000 //ca bus abs delay 
setmem /32 0x021b4890 = 0x00400000 //ca bus abs delay 
// values of 20,40,50,60,7f tried. no difference seen


setmem /32	0x021b48bc =	0x00055555	// DDR_PHY_P1_MPWRCADL

setmem /32 0x021b08b8 = 0x00000800 //frc_msr.
setmem /32 0x021b48b8 = 0x00000800 //frc_msr.

setmem /32	0x021b081c =	0x33333333	// DDR_PHY_P0_MPREDQBY0DL3
setmem /32	0x021b0820 =	0x33333333	// DDR_PHY_P0_MPREDQBY1DL3
setmem /32	0x021b0824 =	0x33333333	// DDR_PHY_P0_MPREDQBY2DL3
setmem /32	0x021b0828 =	0x33333333	// DDR_PHY_P0_MPREDQBY3DL3
setmem /32	0x021b481c =	0x33333333	// DDR_PHY_P1_MPREDQBY0DL3
setmem /32	0x021b4820 =	0x33333333	// DDR_PHY_P1_MPREDQBY1DL3
setmem /32	0x021b4824 =	0x33333333	// DDR_PHY_P1_MPREDQBY2DL3
setmem /32	0x021b4828 =	0x33333333	// DDR_PHY_P1_MPREDQBY3DL3

//write delayes:
setmem /32 0x021b082c = 0xf3333333 //all byte 0 data & dm delayed by 3
setmem /32 0x021b0830 = 0xf3333333 //all byte 1 data & dm delayed by 3
setmem /32 0x021b0834 = 0xf3333333 //all byte 2 data & dm delayed by 3
setmem /32 0x021b0838 = 0xf3333333 //all byte 3 data & dm delayed by 3

			
setmem /32 0x021b482c = 0xf3333333 //all byte 0 data & dm delayed by 3
setmem /32 0x021b4830 = 0xf3333333 //all byte 1 data & dm delayed by 3
setmem /32 0x021b4834 = 0xf3333333 //all byte 2 data & dm delayed by 3
setmem /32 0x021b4838 = 0xf3333333 //all byte 3 data & dm delayed by 3


// Read and write data delay, per byte. 
// For optimized DDR operation it is recommended to run mmdc_calibration on your board, and replace 4 delay register assigns with resulted values 
// Note:
// a. DQS gating is not relevant for LPDDR2. DSQ gating calibration section should be skipped, or the write/read calibration comming after that will stall
// b. The calibration code that runs for both MMDC0 & MMDC1 should be used.

setmem /32 0x021b0848 =   	0x3e373a3c
setmem /32 0x021b0850 =   	0x3e463e40

setmem /32 0x021b4848 =    	0x423d3843
setmem /32 0x021b4850 =    	0x4b2b5042

setmem /32	0x021b083c =	0x20000000	//dqs gating dis
setmem /32	0x021b0840 =	0x0	
setmem /32	0x021b483c =	0x20000000	
setmem /32	0x021b4840 =	0x0

	
setmem /32 0x021b0858 = 0x500 //clk delay
setmem /32 0x021b4858 = 0x500 //clk delay

setmem /32 0x021b08b8 = 0x00000800 //frc_msr
setmem /32 0x021b48b8 = 0x00000800 //frc_msr

//=============================================================================	
// Calibration setup end
//=============================================================================	

 


// Channel0 - startng address 0x80000000
setmem /32	0x021b000c =	0x555A61A5	// MMDC0_MDCFG0

setmem /32	0x021b0004 =	0x00020036	// MMDC0_MDPDC
setmem /32	0x021b0010 =	0x00160E83	// MMDC0_MDCFG1
setmem /32	0x021b0014 =	0x000000DD	// MMDC0_MDCFG2
setmem /32	0x021b0018 =	0x0000174C	// MMDC0_MDMISC
setmem /32	0x021b002c =	0x0f9f26d2	// MMDC0_MDRWD;
setmem /32	0x021b0030 =	0x0000020e	// MMDC0_MDOR
setmem /32	0x021b0038 =	0x00220aac      // MMDC0_MDCFG3LP
setmem /32	0x021b0008 =	0x00000000	// MMDC0_MDOTC

setmem /32	0x021b0040 =	0x0000005f	// CS0_END 


setmem /32	0x021b0000 =	0xc3010000	// MMDC0_MDCTL


// Channel1 - starting address 0x10000000
setmem /32	0x021b400c =	0x555A61A5	// MMDC1_MDCFG0

setmem /32	0x021b4004 =	0x00020036	// MMDC1_MDPDC 
setmem /32	0x021b4010 =	0x00160E83	// MMDC1_MDCFG1
setmem /32	0x021b4014 =	0x000000DD	// MMDC1_MDCFG2
setmem /32	0x021b4018 =	0x0000174C	// MMDC1_MDMISC
setmem /32	0x021b402c =	0x0f9f26d2	// MMDC1_MDRWD; 
setmem /32	0x021b4030 =	0x0000020e	// MMDC1_MDOR
setmem /32	0x021b4038 =	0x00220aac      // MMDC1_MDCFG3LP
setmem /32	0x021b4008 =	0x00000000	// MMDC1_MDOTC

setmem /32	0x021b4040 =	0x0000003f	// CS0_END 


setmem /32	0x021b4000 =	0xc3010000	// MMDC1_MDCTL  


			
// Channel0 : Configure DDR device:		
setmem /32 0x021b001c = 0x003f8030  // MRW: BA=0 CS=0 MR_ADDR=63 MR_OP=0
setmem /32 0x021b001c = 0xff0a8030  // MRW: BA=0 CS=0 MR_ADDR=10 MR_OP=ff
setmem /32 0x021b001c = 0xc2018030  // MRW: BA=0 CS=0 MR_ADDR=1  MR_OP=c2
setmem /32 0x021b001c = 0x06028030  // MRW: BA=0 CS=0 MR_ADDR=2  MR_OP=6. tcl=8, tcwl=4
setmem /32 0x021b001c = 0x02038030  // MRW: BA=0 CS=0 MR_ADDR=3  MR_OP=2.drive=240/6


// Channel1 : Configure DDR device:
setmem /32 0x021b401c = 0x003f8030  // MRW: BA=0 CS=0 MR_ADDR=63 MR_OP=0
setmem /32 0x021b401c = 0xff0a8030  // MRW: BA=0 CS=0 MR_ADDR=10 MR_OP=ff
setmem /32 0x021b401c = 0xc2018030  // MRW: BA=0 CS=0 MR_ADDR=1  MR_OP=c2
setmem /32 0x021b401c = 0x06028030  // MRW: BA=0 CS=0 MR_ADDR=2  MR_OP=6. tcl=8, tcwl=4
setmem /32 0x021b401c = 0x02038030  // MRW: BA=0 CS=0 MR_ADDR=3  MR_OP=2.drive=240/6

			
setmem /32	0x021b0800 =	0xa1390003 	// DDR_PHY_P0_MPZQHWCTRL, enable automatic ZQ calibration
setmem /32	0x021b4800 =	0xa1390003 	// DDR_PHY_P1_MPZQHWCTRL, enable automatic ZQ calibration


setmem /32	0x021b0020 =	0x00007800	// MMDC0_MDREF
setmem /32	0x021b4020 =	0x00007800	// MMDC1_MDREF


setmem /32	0x021b0818 =	0x0 	// DDR_PHY_P0_MPODTCTRL
setmem /32	0x021b4818 =	0x0 	// DDR_PHY_P1_MPODTCTRL			



//######################################################			
//calibration values based on calibration compare of 0x00ffff00:			
//Note, these calibration values are based on Freescale's board			
//May need to run calibration on target board to fine tune these 			
//######################################################			

setmem /32	0x021b0800 =	0xa1390003 	// DDR_PHY_P0_MPZQHWCTRL, enable automatic ZQ calibration
du /32 0x021b0800 
du /32 0x021b0800 


setmem /32	0x021b4800 =	0xa1390003 	// DDR_PHY_P1_MPZQHWCTRL, enable automatic ZQ calibration
du /32 0x021b4800 
du /32 0x021b4800 
			
setmem /32	0x021b08b8 =	0x00000800 	// DDR_PHY_P0_MPMUR0, frc_msr
setmem /32	0x021b48b8 =	0x00000800 	// DDR_PHY_P1_MPMUR0, frc_msr
			
setmem /32	0x021b001c =	0x00000000	// MMDC0_MDSCR, clear this register (especially the configuration bit as initialization is complete)
setmem /32	0x021b401c =	0x00000000	// MMDC0_MDSCR, clear this register (especially the configuration bit as initialization is complete)
			
			