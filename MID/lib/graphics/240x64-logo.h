//
// Created by Admin on 4/1/2017.
//

#ifndef ARDUINOMID_240X64_LOGO_H
#define ARDUINOMID_240X64_LOGO_H

#include <Arduino.h>
// the memory buffer for the LCD
//uint8_t st7565_buffer[1024] = {

static const uint8_t OpelLogoBits[1024] PROGMEM =
        {
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0,
                0xF0, 0x70, 0x78, 0x38, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x38, 0x38, 0x78, 0x70, 0xF0,
                0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xFC, 0xFF, 0xFF, 0xF3, 0xF1,
                0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xB0, 0xB0,
                0x81, 0x87, 0x3F, 0xFF, 0xFC, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0,
                0xF0, 0xF8, 0xF8, 0xF8, 0x3C, 0x1C, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1C, 0x1C, 0x3C,
                0xF8, 0xF8, 0xF8, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
                0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x9C, 0xFC, 0xFC, 0xF8, 0xF8, 0xF8, 0x70, 0x00, 0x00, 0x00, 0x00,
                0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
                0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00,

                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x7F, 0xFF, 0xF8, 0xC0, 0x80,
                0x0C, 0x0E, 0x0E, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
                0x8F, 0xCF, 0xFF, 0xFF, 0x7F, 0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07,
                0x0F, 0x1F, 0x1F, 0x1F, 0x1C, 0x38, 0x38, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x38, 0x38, 0x1C,
                0x1F, 0x1F, 0x1F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F,
                0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30,
                0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x30, 0x30, 0x30,

                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x07,
                0x0F, 0x1E, 0x1C, 0x3C, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x3C, 0x1C, 0x1E, 0x0F,
                0x07, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

        };


static const uint8_t ArduinoLogoBits[] PROGMEM =
        {
                0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xE0, 0xF0, 0xF8, 0x78, 0x7C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C,
                0x3C, 0x78, 0xF8, 0xF0, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF0, 0x78,
                0x78, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x78, 0x78, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80,
                0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00,
                0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00,

                0x00, 0x00, 0x78, 0xFE, 0xFF, 0xFF, 0xCF, 0x01, 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, 0x30, 0x30,
                0x30, 0x00, 0x00, 0x00, 0x01, 0x87, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x87, 0x01, 0x00, 0x00,
                0x00, 0x30, 0x38, 0xFE, 0xFC, 0x30, 0x30, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFE, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0x1F, 0x03, 0x07, 0x7F, 0xFC, 0xC0, 0x00,
                0x00, 0x00, 0x00, 0xFF, 0xFF, 0x61, 0x61, 0xE1, 0xF3, 0xBF, 0x1F, 0x00, 0x00, 0x00, 0xFF, 0xFF,
                0x01, 0x01, 0x01, 0x01, 0x03, 0x07, 0xFE, 0xFC, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x00,
                0x00, 0x00, 0xFF, 0xFF, 0x07, 0x1F, 0x7C, 0xE0, 0x80, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFE, 0xFF,

                0x00, 0x00, 0x00, 0x01, 0x07, 0x0F, 0x1F, 0x3E, 0x7C, 0x78, 0x78, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
                0x78, 0x78, 0x7C, 0x3E, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x03, 0x07, 0x0F, 0x1F, 0x3E, 0x3C, 0x7C,
                0x78, 0x78, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x78, 0x78, 0x7C, 0x3F, 0x1F, 0x0F, 0x07, 0x01, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1E, 0x0F, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x1F, 0x1E,
                0x10, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x03, 0x1F, 0x1E, 0x10, 0x00, 0x00, 0x1F, 0x1F,
                0x18, 0x18, 0x18, 0x18, 0x0C, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x07, 0x0F, 0x1C, 0x18, 0x18, 0x18,
                0x18, 0x0E, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x1F, 0x1F, 0x18, 0x18, 0x18, 0x00,
                0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x07, 0x0F,

        };


static const uint8_t Fire1LogoBits[] PROGMEM =
        {
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0xC3, 0x06, 0x0C, 0x38, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0xF0, 0xF8, 0x78,
                0x38, 0x3C, 0x3C, 0x3C, 0xFC, 0xF8, 0x78, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        };
#endif //ARDUINOMID_240X64_LOGO_H
