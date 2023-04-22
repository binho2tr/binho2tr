/*
* Project Name: SSD1306_OLED_RPI
* Description: Data file to hold bitmap test data, all horizontally addressed.
* SW used to make code https://javl.github.io/image2cpp/ 
* Author: Gavin Lyons.
* URL: https://github.com/gavinlyonsrepo/SSD1306_OLED_RPI
*/
  
#ifndef _BITMAP_TEST_DATA_H_
#define _BITMAP_TEST_DATA_H_

// 'backupicon', 64x64px 
const  uint8_t  bigImage[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x01, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xfc, 0x00, 0x00, 
0x00, 0x00, 0x3f, 0xe0, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0xff, 0x00, 0x00, 
0x00, 0x00, 0xfe, 0x00, 0x80, 0x3f, 0x80, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x80, 0x1f, 0xc0, 0x00, 
0x00, 0x01, 0xf8, 0x00, 0x80, 0x07, 0xe0, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x80, 0x07, 0xe0, 0x00, 
0x00, 0x03, 0xe0, 0x00, 0x80, 0x03, 0xf0, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x80, 0x01, 0xf0, 0x00, 
0x00, 0x07, 0xc0, 0x00, 0x80, 0x01, 0xf8, 0x00, 0x00, 0x07, 0xc0, 0x01, 0xc0, 0x00, 0xf8, 0x00, 
0x00, 0x0f, 0x80, 0x01, 0xc0, 0x00, 0xf8, 0x00, 0x00, 0x0f, 0x80, 0x01, 0xc0, 0x00, 0x78, 0x00, 
0x00, 0x0f, 0x80, 0x01, 0xc0, 0x00, 0x7c, 0x00, 0x00, 0x0f, 0x80, 0x01, 0xc0, 0x00, 0x7c, 0x00, 
0x01, 0xff, 0xfc, 0x01, 0xc0, 0x00, 0x7c, 0x00, 0x01, 0xff, 0xfc, 0x01, 0xc0, 0x00, 0x7c, 0x00, 
0x01, 0xff, 0xf8, 0x01, 0xc0, 0x00, 0x7c, 0x00, 0x00, 0xff, 0xf8, 0x01, 0xe0, 0x00, 0x7c, 0x00, 
0x00, 0x7f, 0xf0, 0x00, 0xf0, 0x00, 0x7c, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x78, 0x00, 0x7c, 0x00, 
0x00, 0x1f, 0xc0, 0x00, 0x1c, 0x00, 0x78, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x0e, 0x00, 0xf8, 0x00, 
0x00, 0x07, 0x00, 0x00, 0x03, 0x00, 0xf8, 0x00, 0x00, 0x06, 0x00, 0x00, 0x03, 0x01, 0xf8, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 
0x00, 0x00, 0x04, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x3f, 0x80, 0x00, 
0x00, 0x00, 0x1f, 0x80, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x01, 0xff, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xfc, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x3f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Mobile Signal 16x8px horizontally addressed
const uint8_t SignalIcon[16] = 
{
    0xFE,0x02,0x92,0x0A,0x54,0x2A,0x38,0xAA,0x12,0xAA,0x12,0xAA,0x12,0xAA,0x12,0xAA
};

// Message icon  16x8px
const uint8_t MsgIcon[16] =  
{
    0x1F,0xF8,0x10,0x08,0x18,0x18,0x14,0x28,0x13,0xC8,0x10,0x08,0x10,0x08,0x1F,0xF8
};

// Battery Icon  16x8px 
const uint8_t BatIcon[16] = 
{
    0x0F,0xFE,0x30,0x02,0x26,0xDA,0x26,0xDA,0x26,0xDA,0x26,0xDA,0x30,0x02,0x0F,0xFE
};

// Alarm icon  8x8px 
const uint8_t AlarmIcon[8] = 
{
    0xC3,0xBD,0x42,0x52,0x4E,0x42,0x3C,0xC3
};

// HORIZONTAL addressing
// 'backupicon', 128x64px
const uint8_t  fullscreenBitmap[1024] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xfc, 0x00, 0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0xc0, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x01, 0xff, 0xf8, 0x00, 0x00, 0xc0, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x07, 0xff, 0x80, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x0f, 0xfe, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x1f, 0xfc, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 
0x00, 0x03, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 
0x00, 0x03, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 
0x00, 0x01, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 
0x00, 0x01, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x7f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x07, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xfc, 0x00, 0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

#endif // end of guard header

