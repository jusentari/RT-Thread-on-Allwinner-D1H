/*
 *
 * Automatically generated file; DO NOT EDIT.
 * Melis3.x SDK Configuration
 *
 */
#include <rtconfig.h>
#define CONFIG_TFT08006_MIPI 1
#define CONFIG_FINSH_THREAD_STACK_SIZE 16384
#define CONFIG_RT_USING_MEMHEAP 1
#define CONFIG_MOD_MIXTURE_ENABLE 1
#define CONFIG_SOC_SUN20I 1
#define CONFIG_RT_USING_IDLE_HOOK 1
#define CONFIG_FAT 1
#define CONFIG_DRIVER_INPUT 1
#define CONFIG_DRIVERS_GPIO 1
#define CONFIG_FSYS_FAT_RW 1
#define CONFIG_GUI_CORE_MEMDEV_EN 1
#define CONFIG_IOBOX_HEXDUMP 1
#define CONFIG_RT_USING_SLAB 1
#define CONFIG_IOBOX_MOUNT 1
#define CONFIG_CXX 1
#define CONFIG_IDLE_THREAD_STACK_SIZE 256
#define CONFIG_IOBOX_LS 1
#define CONFIG_USB 1
#define CONFIG_RT_CONSOLEBUF_SIZE 128
#define CONFIG_FINSH_USING_MSH 1
#define CONFIG_DRIVERS_UART 1
#define CONFIG_DRIVERS_CIR 1
#define CONFIG_RT_CONSOLE_DEVICE_NAME "uart0"
// #define CONFIG_MELIS_LEGACY_DRIVER_MAN 1
#define CONFIG_RT_USING_MEMPOOL 1

// #define CONFIG_LCD_SUPPORT_HE0801A068 1
#if defined(LCD_SUPPORT_TFT08006)
#define CONFIG_LCD_SUPPORT_TFT08006 1
#endif

#if defined(LCD_SUPPORT_ST7701S_RGB)
#define CONFIG_LCD_SUPPORT_ST7701S_RGB 1
#endif

#if defined(RGB_LCD_ST7001S)
#define CONFIG_RGB_LCD_ST7001S 1
#endif

#if defined(LCD_SUPPORT_ICN9707_480x1280)
#define CONFIG_LCD_SUPPORT_ICN9707_480x1280 1
#endif

#if defined(MIPI_DSI_LCD_ICN9707)
#define CONFIG_MIPI_DSI_LCD_ICN9707 1
#endif

#define CONFIG_RT_THREAD_PRIORITY_MAX 32
#define CONFIG_CHARSET_UTF16LE_EN 1
#define CONFIG_IOBOX_RWCHECK 1
#define CONFIG_GUI_WIDGET_LISTMENU_EN 1
#define CONFIG_DEBUG_BACKTRACE 1
#define CONFIG_SUPPORT_FP_KERNEL 1
#define CONFIG_DRIVERS_CIR_DEBUG 1
#define CONFIG_COMMAND_DATE 1
#define CONFIG_RT_TIMER_THREAD_PRIO 8
//#define CONFIG_USB_STORAGE 1
#define CONFIG_DISP2_SUNXI_SUPPORT_ENAHNCE 1
#define CONFIG_RT_USING_SEMAPHORE 1
#define CONFIG_SUBSYS_SAMPLES 1
#define CONFIG_FINSH_ARG_MAX 10
#define CONFIG_COMMAND_FORK 1
#define CONFIG_MOD_CEDAR_ENABLE 1
#define CONFIG_DRIVERS_SUNXI_CCU 1
#define CONFIG_DISP2_SUNXI 1
#define CONFIG_NEST_INTERRUPT 1
#define CONFIG_DRIVERS_SOUND 1
#define CONFIG_LEGACY_HWSC_DEV 1
#define CONFIG_IOBOX_TOUCH 1
#define CONFIG_SND_PLATFORM_SUNXI_DAUDIO1 1
#define CONFIG_CC_OPTIMIZE_FOR_SIZE 1
#define CONFIG_HAL_TEST_HCI 1
#define CONFIG_DRIVER_RTC 1
#define CONFIG_IOBOX_GREP 1
#define CONFIG_GUI_WIDGET_GMSGBOX_EN 1
#define CONFIG_RT_NAME_MAX 32
#define CONFIG_DRIVERS_USB 1
#define CONFIG_DRIVERS_TIMER 1
#define CONFIG_RT_USING_TASK_PERF_MONITOR 1
#define CONFIG_GUI_MEMDEV_PIXELFORMAT 4
#define CONFIG_OS_MELIS 1
#define CONFIG_DRIVERS_SPI 1
#define CONFIG_MOD_ORANGE_ENABLE 1
#define CONFIG_DEVFS 1
#define CONFIG_DRIVERS_MBUS_RV_SYS_BW 1
#define CONFIG_LEGACY_DMS_DEV 1
#define CONFIG_GUI_CORE_LONGNAME_EN 1
#define CONFIG_RT_USING_MAILBOX 1
#define CONFIG_RT_USING_MUTEX 1
#define CONFIG_GUI_WIN_DIALOG_EN 1
#define CONFIG_DRIVER_SPIBUS 1
#define CONFIG_MOD_DISPLAY_ENABLE 1
#define CONFIG_DRVIER_SYSCONFIG 1
#define CONFIG_DRIVERS_SPINOR_WRITE_LOCK 1
#define CONFIG_PLAN_BEETLES 1
#define CONFIG_LEGACY_RAMDISK_DEV 1
#define CONFIG_DRIVER_WDT 1
#define CONFIG_DRIVERS_THERMAL 1
#define CONFIG_DRIVERS_WATCHDOG 1
#define CONFIG_GUI_WIDGET_TXTBOX_EN 1
#define CONFIG_RT_ALIGN_SIZE 8
#define CONFIG_COMMAND_UPDATE 1
#define CONFIG_DRIVERS_SPINOR_FREQ 50
#define CONFIG_SRAM_VBASE 0xf0000000
#define CONFIG_SDIO_IRQ_SUPPORT 1
#define CONFIG_USE_SDIO 1
#define CONFIG_RT_DEBUG 1
#define CONFIG_RT_USING_COMPLETION 1
#define CONFIG_SD_TEST 1
#define CONFIG_RT_USING_DFS_DEVFS 1
#define CONFIG_FINSH_USING_SYMTAB 1
#define CONFIG_RT_USING_WORKQUEUE 1
#define CONFIG_CONSISTENT_CONTEXT_SWITCH 1
#define CONFIG_LOG_DEFAULT_LEVEL 3
#define CONFIG_DRIVERS_MBUS 1
#define CONFIG_DRIVER_TIMER 1
#define CONFIG_MELIS_MODULE 1
#define CONFIG_RT_IDEL_HOOK_LIST_SIZE 4
#define CONFIG_MINFS 1
#define CONFIG_DRIVERS_SDMMC 1
#define CONFIG_FRAME_POINTER 1
#define CONFIG_DRIVER_ADC_POWER 1
#define CONFIG_DRIVER_USB_GADGET 1
#define CONFIG_RT_USING_HOOK 1
#define CONFIG_DRIVER_GPIO 1
#define CONFIG_RT_VER_NUM 0x30104
#define CONFIG_RT_USING_PIPE 1
#define CONFIG_DRIVERS_CCMU 1
#define CONFIG_SND_PLATFORM_SUNXI_DAUDIO 1
#define CONFIG_FINSH_HISTORY_LINES 5
#define CONFIG_RT_USING_CONSOLE 1
#define CONFIG_FINSH_EXTERN_SCRIPT 1
#define CONFIG_HAL_TEST_TPADC 1
#define CONFIG_PTHREAD 1
#define CONFIG_IOREGS_VBASE 0xf0000000
#define CONFIG_KERNEL_USE_SBI 1
#define CONFIG_COMMAND_THERMAL 1
#define CONFIG_GUI_WIDGET_BUTTON_EN 1
#define CONFIG_DRIVERS_DMA 1
#define CONFIG_MELIS_LAYERFS_DIR_PATH "/mnt/"
#define CONFIG_DRV_RTP 1
#define CONFIG_DRIVERS_TPADC 1
#define CONFIG_GUI_WIDGET_STATIC_EN 1
#define CONFIG_FINSH_USING_MSH_DEFAULT 1
#define CONFIG_DRIVERS_GPADC 1
#define CONFIG_COMMAND_EXIT 1
#define CONFIG_RT_USING_OVERFLOW_CHECK 1
#define CONFIG_UART_BAUD_RATE 115200
#define CONFIG_DRIVERS_MBUS_G2D_BW 1
#define CONFIG_GUI_MEMDEV_WIDTH 800
#define CONFIG_DRAM_SIZE 0x20000000
#define CONFIG_MOD_CHARSET_ENABLE 1
#define CONFIG_DRIVERS_MBUS_CE_BW 1
#define CONFIG_DRIVERS_MBUS_DI_BW 1
#define CONFIG_DRIVERS_SPINOR 1
#define CONFIG_ARMCPU_HIGH_VECTOR_ADDRESS 1
#define CONFIG_GUI_WIDGET_SLISTBOX_EN 1
#define CONFIG_RT_USING_TIMER_SOFT 1
#define CONFIG_CHARSET_UTF8_EN 1
#define CONFIG_DFS_FD_MAX 16
#define CONFIG_FINSH_THREAD_PRIORITY 20
#define CONFIG_GUI_WIN_FRMWIN_EN 1
#define CONFIG_HAL_TEST_GPADC 1
#define CONFIG_DRIVER_USB_MANAGER 1
#define CONFIG_IOBOX_TAIL 1
#define CONFIG_GUI_WIDGET_SLIDER_EN 1
#define CONFIG_MELIS_VIRTUAL_FILESYSTEM 1
#define CONFIG_DFS_FILESYSTEM_TYPES_MAX 2
#define CONFIG_SBI_PATH "projects/d1-evb-board/sbi-bin/sbi.bin"
#define CONFIG_RT_TIMER_THREAD_STACK_SIZE 512
#define CONFIG_COMMAND_MTOP 1
#define CONFIG_SUNXI_DISP2_FB_DISABLE_ROTATE 1
#define CONFIG_EXTERN_LIBC 1
#define CONFIG_COHERENT_SIZE 0x00c00000
#define CONFIG_GUI_WIDGET_EN 1
#define CONFIG_MELIS_LAYERFS 1
#define CONFIG_RT_USING_MESSAGEQUEUE 1
#define CONFIG_FINSH_THREAD_NAME "tshell"
#define CONFIG_ARCH_SUN20IW1 1
#define CONFIG_USB_DEVICE 1
#define CONFIG_RT_THREAD_PRIORITY_32 1
#define CONFIG_FINSH_USING_DESCRIPTION 1
#define CONFIG_RISCV 1
#define CONFIG_CHARSET_GBK_EN 1
#define CONFIG_RT_USING_RINGBUFFER 1
#define CONFIG_USB_HOST 1
#define CONFIG_USB_HID 1
#define CONFIG_LIBCNEWLIB 1
#define CONFIG_IOBOX_RM 1
#define CONFIG_GUI_WIN_CTRLWIN_EN 1
#define CONFIG_HAL_TEST_UDC 1
#define CONFIG_DRIVER_SPINOR 1
#define CONFIG_COMPONENTS_AW_ALSA_LIB 1
#define CONFIG_SND_PLATFORM_SUNXI_CPUDAI 1
#define CONFIG_DRIVER_THERMAL 1
#define CONFIG_HZ RT_TICK_PER_SECOND
#define CONFIG_COHERENT_START_ADDR 0xa0000000
#define CONFIG_HAL_TEST_SPI 1
#define CONFIG_LWIP 1
#define CONFIG_EXFAT 1
#define CONFIG_CLK_TUNING_VBASE 0xffff2000
#define CONFIG_GUI_MEMDEV_HEIGHT 480
#define CONFIG_DRIVER_USB_CORE 1
#define CONFIG_SND_PLATFORM_SUNXI_PCM 1
#define CONFIG_MODVERSIONS 1
#define CONFIG_RT_USING_WAITQUEUE 1
#define CONFIG_RT_USING_HEAP 1
#define CONFIG_HAL_TEST_DISP 1
#define CONFIG_RT_USING_EVENT 1
#define CONFIG_DFS_FILESYSTEMS_MAX 2
#define CONFIG_DETECT_CARD 1
#define CONFIG_DRAM_VIRTBASE 0x40000000
#define CONFIG_RT_USING_DEVICE 1
#define CONFIG_F133_FPGA 1
#define CONFIG_GUI_CORE_FONT_SFT_EN 1
#define CONFIG_USB_MANAGER 1
#define CONFIG_RT_USING_DEVICE_OPS 1
#define CONFIG_SDC_DMA_USED 1
#define CONFIG_FSYS_EXFAT_RW 1
#define CONFIG_COMPONENTS_AW_ALSA_UTILS 1
#define CONFIG_RT_USING_DFS 1
#define CONFIG_DRIVERS_SPINOR_4K_SECTORS 1
#define CONFIG_SOC_SUN20IW1P1 1
#define CONFIG_MOD_WILLOW_ENABLE 1
#define CONFIG_MELIS_ROOTFS 1
#define CONFIG_DRIVERS_PWM 1
#define CONFIG_HAL_TEST_RTC 1
#define CONFIG_DRIVERS_EFUSE 1
#define CONFIG_DRIVER_SDMMC 1
#define CONFIG_SUNXI_DISP2_TEST 1
#define CONFIG_FSYS_NTFS_RW 1
// #define CONFIG_LOAD_DATA_TO_MEM_FROM_STORAGE 1
#define CONFIG_FINSH_CMD_SIZE 80
#define CONFIG_SDC_DMA_BUF_SIZE 64
#define CONFIG_RTTKERNEL 1
#define CONFIG_64BIT 1
#define CONFIG_DRIVERS_RTC 1
#define CONFIG_CHECK_PREEMPT_LEVEL_IN_IPC 1
#define CONFIG_DRIVERS_SDC_CDPIN_PRESENT_VAL DRIVERS_SDC_CDPIN_PRESENT_VAL
#define CONFIG_CROSS_COMPILE "riscv64-unknown-elf-"
#define CONFIG_DRAM_PHYBASE 0x40000000
#define CONFIG_CHARSET_UTF16BE_EN 1
#define CONFIG_FINSH_USING_HISTORY 1
#define CONFIG_SOC_SUN20IW1 1
#define CONFIG_COMMAND_INSMOD 1
#define CONFIG_RT_USING_FINSH 1
#define CONFIG_DFS_USING_WORKDIR 1
#define CONFIG_GUI_WIN_MANWIN_EN 1
#define CONFIG_BOOT_LOGO_BMP 1
#define CONFIG_FINSH_EXTERN_SCRIPT_PATH "d:\\"
#define CONFIG_DRIVER_SOUND 1
#define CONFIG_CHARSET_BIG5_EN 1
// #define CONFIG_ROOTFS_MINFS 1
#define CONFIG_DEBUG_INFO 1
#define CONFIG_NTFS 1
#define CONFIG_HAL_TEST_THERMAL 1
#define CONFIG_SND_CODEC_SUN8IW20_AUDIOCODEC 1
#define CONFIG_USE_SD 1
#define CONFIG_MELIS_LEGACY_DRIVER_MAN
#define CONFIG_ROOTFS_LITTLEFS
