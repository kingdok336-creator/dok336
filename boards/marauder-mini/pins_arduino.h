#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>

// Serial standard bawaan ESP32 DevKit V1
static const uint8_t TX = 1;
static const uint8_t RX = 3;

static const uint8_t TXD2 = 17; // Internal only di WROOM
static const uint8_t RXD2 = 16; // Internal only di WROOM

static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

// SPI default mapping
static const uint8_t SS = 5;
static const uint8_t MOSI = 23;
static const uint8_t MISO = 19;
static const uint8_t SCK = 18;

// Pemetaan Pin Fisik yang Benar-Benar Ada di ESP32 30-Pin
static const uint8_t G0 = 0;
static const uint8_t G2 = 2;
static const uint8_t G4 = 4;
static const uint8_t G5 = 5;
static const uint8_t G12 = 12;
static const uint8_t G13 = 13;
static const uint8_t G14 = 14; // Dialokasikan untuk TFT_CS di platformio.ini
static const uint8_t G15 = 15;
static const uint8_t G18 = 18; // SPI SCK
static const uint8_t G19 = 19; // SPI MISO
static const uint8_t G21 = 21; // I2C SDA
static const uint8_t G22 = 22; // I2C SCL
static const uint8_t G23 = 23; // SPI MOSI
static const uint8_t G25 = 25; // Dialokasikan untuk TFT_DC di platformio.ini
static const uint8_t G26 = 26;
static const uint8_t G27 = 27;
static const uint8_t G32 = 32; // TFT_BL (Backlight)
static const uint8_t G33 = 33;
static const uint8_t G34 = 34; // Input Only
static const uint8_t G35 = 35; // Input Only
static const uint8_t G36 = 36; // Input Only (VP)
static const uint8_t G39 = 39; // Input Only (VN)

#define RGB_LED 2 // Dialihkan ke pin LED bawaan board (D2) agar pin 21 aman

#define BAD_TX -1
#define BAD_RX -1

// SERIAL (GPS) mapping aman agar tidak bentrok dengan I2C (21 & 22)
#define SERIAL_TX 26 
#define SERIAL_RX 27
#define GPS_SERIAL_TX SERIAL_TX
#define GPS_SERIAL_RX SERIAL_RX

// Konfigurasi Navigasi Tombol Fisik (Aman, menggunakan pin input-only)
#define HAS_BTN 1
#define SEL_BTN 34
#define UP_BTN 36
#define DW_BTN 35
#define R_BTN 39
#define L_BTN 13
#define HAS_5_BUTTONS
#define BTN_ALIAS "\"Ok\""
#define BTN_ACT LOW

#define TXLED -1
#define LED_ON HIGH
#define LED_OFF LOW

// Modul Eksternal RF diputus/disable agar hemat pin
#define CC1101_GDO0_PIN -1
#define CC1101_SS_PIN -1
#define CC1101_MOSI_PIN SPI_MOSI_PIN
#define CC1101_SCK_PIN SPI_SCK_PIN
#define CC1101_MISO_PIN SPI_MISO_PIN

#define NRF24_CE_PIN -1
#define NRF24_SS_PIN -1
#define NRF24_MOSI_PIN SPI_MOSI_PIN
#define NRF24_SCK_PIN SPI_SCK_PIN
#define NRF24_MISO_PIN SPI_MISO_PIN

#define FP 1
#define FM 1
#define FG 2

#define HAS_SCREEN 1
#define ROTATION 0
#define MINBRIGHT 160

// Konfigurasi MicroSD (Menggunakan SPI Utama bersama Layar)
#define SDCARD_CS 4
#define SDCARD_SCK 18
#define SDCARD_MISO 19
#define SDCARD_MOSI 23

// Grove dialihkan menggunakan pin standard I2C ESP32
#define GROVE_SDA 21
#define GROVE_SCL 22

#define SPI_SCK_PIN 18
#define SPI_MISO_PIN 19
#define SPI_MOSI_PIN 23
#define SPI_SS_PIN 5

#endif /* Pins_Arduino_h */
