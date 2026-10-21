//                            USER DEFINED SETTINGS
//   Set driver type, fonts to be loaded, pins used and SPI control method etc
//
//   See the User_Setup_Select.h file if you wish to be able to define multiple
//   setups and then easily select which setup file is used by the compiler.
//
//   If this file is edited correctly then all the library example sketches should
//   run without the need to make any more changes for a particular hardware setup!
//   Note that some sketches are designed for a particular TFT pixel width/height
//
// ##################################################################################
//
// Section 1. Call up the right driver file and any options for it
//
// ##################################################################################

// Display type -  only define if RPi display
//#define RPI_DRIVER

// Only define one driver, the other ones must be commented out
//#define ILI9341_DRIVER     // OG Marauder
//#define ST7735_DRIVER      // Marauder Mini
//#define ILI9163_DRIVER
//#define S6D02A1_DRIVER
//#define RPI_ILI9486_DRIVER // 20MHz maximum SPI
//#define HX8357D_DRIVER
//#define ILI9481_DRIVER
//#define ILI9486_DRIVER
//#define ILI9488_DRIVER     // WARNING: Do not connect ILI9488 display SDO to MISO if other devices share the SPI bus
//#define ST7789_DRIVER      // Full configuration option
//#define ST7789_2_DRIVER    // Minimal configuration option
//#define R61581_DRIVER
//#define RM68140_DRIVER
//#define ST7796_DRIVER      // CYD 3.5 inch

// For ST7789, ST7735 and ILI9163 ONLY, define the pixel width and height in portrait orientation
// #define TFT_WIDTH  80
// #define TFT_WIDTH  128
// #define TFT_WIDTH  240
// #define TFT_HEIGHT 160
// #define TFT_HEIGHT 128
// #define TFT_HEIGHT 240
// #define TFT_HEIGHT 320
// #define TFT_HEIGHT 480

// If colours are inverted (white shows as black) then uncomment one of the next
// 2 lines try both options, one of the options should correct the inversion.
// #define TFT_INVERSION_ON
// #define TFT_INVERSION_OFF

// If a backlight control signal is available then define the TFT_BL pin in Section 2
// below. The backlight will be turned ON when tft.begin() is called, but the library
// needs to know if the LEDs are ON with the pin HIGH or LOW. If the LEDs are to be
// driven with a PWM signal or turned OFF/ON then this must be handled by the user
// sketch. e.g. with digitalWrite(TFT_BL, LOW);

// #define TFT_BACKLIGHT_ON LOW  // HIGH or LOW are options

// ##################################################################################
//
// Section 2. Define the pins that are used to interface with the display here
//
// ##################################################################################

// For ESP32 Dev board - The hardware SPI can be mapped to any pins
// NOTE: WS349 uses QSPI interface with AXS15231B panel (640x172)
// This setup file is for reference - actual QSPI initialization uses Arduino_GFX
// TFT_eSPI does not support AXS15231B QSPI panel natively

// WS349 QSPI pins (from Meshtastic variant):
// #define TFT_QSPI_CS   9
// #define TFT_QSPI_SCLK 10
// #define TFT_QSPI_D0   11
// #define TFT_QSPI_D1   12
// #define TFT_QSPI_D2   13
// #define TFT_QSPI_D3   14

// Touch: AXS15231B via I2C (Wire1) on pins 17/18, address 0x3B
// #define TOUCH_SDA 17
// #define TOUCH_SCL 18
// #define TOUCH_ADDR 0x3B

// Backlight: GPIO42 (inverted, controlled via TCA9554 EXIO1)
// #define TFT_BL 42

// TCA9554 I/O expander on I2C (Wire) pins 47/48, address 0x20
// Controls: SYS_EN (EXIO6), LCD_RST (EXIO5), BL_EN (EXIO1)

  // ##################################################################################
  //
  // Section 3. Font selection
  //
  // ##################################################################################

  // #define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
  // #define LOAD_FONT2  // Font 2. Small 16 pixel high font needs ~3534 bytes in FLASH, 96 bytes in RAM
  // #define LOAD_FONT4  // Font 4. Medium 26 pixel high font needs ~5848 bytes in FLASH, 128 bytes in RAM
  // #define LOAD_FONT6  // Font 6. Large 48 pixel high font needs ~26662 bytes in FLASH, 256 bytes in RAM
  // #define LOAD_FONT7  // Font 7. 7 segment 48 pixel high font needs ~6564 bytes in FLASH, 128 bytes in RAM
  // #define LOAD_FONT8  // Font 8. 75 pixel high font needs ~101734 bytes in FLASH, 384 bytes in RAM
  // #define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

  // #define SMOOTH_FONT

  // ##################################################################################
  //
  // Section 4. Other options
  //
  // ##################################################################################

  // #define SPI_FREQUENCY  27000000
  // #define SPI_FREQUENCY  40000000
  // #define SPI_READ_FREQUENCY  20000000
  // #define SPI_TOUCH_FREQUENCY  2500000

  // #define SUPPORT_TRANSACTIONS

  // ##################################################################################
  //
  // Section 5. ESP32 specific settings
  //
  // ##################################################################################

  // For ESP32 the SPI bus can be mapped to any pins
  // #define VSPI_PORT   // Use VSPI (SPI3) - default for ESP32
  // #define HSPI_PORT   // Use HSPI (SPI2)

  // If using ESP32 with DMA
  // #define USE_DMA

  // ##################################################################################
  //
  // Section 6. RP2040 specific settings
  //
  // ##################################################################################

  // For RP2040 the SPI bus can be mapped to any pins
  // #define SPI0_PORT   // Use SPI0
  // #define SPI1_PORT   // Use SPI1

  // ##################################################################################
  //
  // Section 7. STM32 specific settings
  //
  // ##################################################################################

  // ##################################################################################
  //
  // Section 8. Generic TFT setup options
  //
  // ##################################################################################

  // #define TFT_SDA_READ

  // #define TFT_RGB_ORDER TFT_RGB
  // #define TFT_RGB_ORDER TFT_BGR

  // ##################################################################################
  //
  // Section 9. Touch options
  //
  // ##################################################################################

  // #define TOUCH_ORIENTATION 0

  // ##################################################################################
  //
  // Section 10. Extra options
  //
  // ##################################################################################

  // #define LOAD_GFXFF
  // #define LOAD_FONT2
  // #define LOAD_FONT4