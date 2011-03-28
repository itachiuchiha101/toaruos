/* This is the default VGA 8 x 12 font */
#include <system.h>

uint8_t number_font[][12] = {
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 8 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00110000,
		0b01111000,
		0b01111000, /* 4 */
		0b00110000,
		0b00110000,
		0b00000000,
		0b00110000, /* 8 */
		0b00110000,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01100110,
		0b01100110,
		0b00100100, /* 4 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 8 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01101100,
		0b01101100,
		0b11111110, /* 4 */
		0b01101100,
		0b01101100,
		0b01101100,
		0b11111110, /* 8 */
		0b01101100,
		0b01101100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00110000,
		0b00110000,
		0b01111100,
		0b11000000, /* 4 */
		0b11000000,
		0b01111000,
		0b00001100,
		0b00001100, /* 8 */
		0b11111000,
		0b00110000,
		0b00110000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b11000100,
		0b11001100, /* 4 */
		0b00011000,
		0b00110000,
		0b01100000,
		0b11001100, /* 8 */
		0b10001100,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01110000,
		0b11011000,
		0b11011000, /* 4 */
		0b01110000,
		0b11111010,
		0b11011110,
		0b11001100, /* 8 */
		0b11011100,
		0b01110110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00110000,
		0b00110000,
		0b00110000, /* 4 */
		0b01100000,
		0b00000000,
		0b00000000,
		0b00000000, /* 8 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00001100,
		0b00011000,
		0b00110000, /* 4 */
		0b01100000,
		0b01100000,
		0b01100000,
		0b00110000, /* 8 */
		0b00011000,
		0b00001100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01100000,
		0b00110000,
		0b00011000, /* 4 */
		0b00001100,
		0b00001100,
		0b00001100,
		0b00011000, /* 8 */
		0b00110000,
		0b01100000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b01100110, /* 4 */
		0b00111100,
		0b11111111,
		0b00111100,
		0b01100110, /* 8 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /** 4 */
		0b00011000,
		0b00011000,
		0b01111110,
		0b00011000, /* 8 */
		0b00011000,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 8 */
		0b00111000,
		0b00111000,
		0b01100000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b00000000,
		0b00000000,
		0b11111110,
		0b00000000, /* 8 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 8 */
		0b00111000,
		0b00111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000010,
		0b00000110, /* 4 */
		0b00001100,
		0b00011000,
		0b00110000,
		0b01100000, /* 8 */
		0b11000000,
		0b10000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01111100,
		0b11000110,
		0b11001110, /* 4 */
		0b11011110,
		0b11010110,
		0b11110110,
		0b11100110, /* 8 */
		0b11000110,
		0b01111100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00010000,
		0b00110000,
		0b11110000, /* 4 */
		0b00110000,
		0b00110000,
		0b00110000,
		0b00110000, /* 8 */
		0b00110000,
		0b11111100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01111000,
		0b11001100,
		0b11001100, /* 4 */
		0b00001100,
		0b00011000,
		0b00110000,
		0b01100000, /* 8 */
		0b11001100,
		0b11111100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01111000,
		0b11001100,
		0b00001100, /* 4 */
		0b00001100,
		0b00111000,
		0b00001100,
		0b00001100, /* 8 */
		0b11001100,
		0b01111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00001100,
		0b00011100,
		0b00111100, /* 4 */
		0b01101100,
		0b11001100,
		0b11111110,
		0b00001100, /* 8 */
		0b00001100,
		0b00011110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11111100,
		0b11000000,
		0b11000000, /* 4 */
		0b11000000,
		0b11111000,
		0b00001100,
		0b00001100, /* 8 */
		0b11001100,
		0b01111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00111000,
		0b01100000,
		0b11000000, /* 4 */
		0b11000000,
		0b11111000,
		0b11001100,
		0b11001100, /* 8 */
		0b11001100,
		0b01111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11111110,
		0b11000110,
		0b11000110, /* 4 */
		0b00000110,
		0b00001100,
		0b00011000,
		0b00110000, /* 8 */
		0b00110000,
		0b00110000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01111000,
		0b11001100,
		0b11000100, /* 4 */
		0b11000100,
		0b01111000,
		0b11001100,
		0b11001100, /* 8 */
		0b11001100,
		0b01111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01111000,
		0b11001100,
		0b11001100, /* 4 */
		0b11001100,
		0b01111100,
		0b00011000,
		0b00011000, /* 8 */
		0b00110000,
		0b01110000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00111000, /* 4 */
		0b00111000,
		0b00000000,
		0b00000000,
		0b00111000, /* 8 */
		0b00111000,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00111000, /* 4 */
		0b00111000,
		0b00000000,
		0b00000000,
		0b00111000, /* 8 */
		0b00111000,
		0b00011000,
		0b00110000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00001100,
		0b00011000,
		0b00110000, /* 4 */
		0b01100000,
		0b11000000,
		0b01100000,
		0b00110000, /* 8 */
		0b00011000,
		0b00001100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b01111110,
		0b00000000,
		0b01111110,
		0b00000000, /* 8 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01100000,
		0b00110000,
		0b00011000, /* 4 */
		0b00001100,
		0b00000110,
		0b00001100,
		0b00011000, /* 8 */
		0b00110000,
		0b01100000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01111000,
		0b11001100,
		0b00001100, /* 4 */
		0b00011000,
		0b00110000,
		0b00110000,
		0b00000000, /* 8 */
		0b00110000,
		0b00110000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01111100,
		0b11000110,
		0b11000110, /* 4 */
		0b11011110,
		0b11010110,
		0b11011110,
		0b11000000, /* 8 */
		0b11000000,
		0b01111100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00110000,
		0b01111000,
		0b11001100, /* 4 */
		0b11001100,
		0b11001100,
		0b11111100,
		0b11001100, /* 8 */
		0b11001100,
		0b11001100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11111100,
		0b01100110,
		0b01100110, /* 4 */
		0b01100110,
		0b01111100,
		0b01100110,
		0b01100110, /* 8 */
		0b01100110,
		0b11111100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00111100,
		0b01100110,
		0b11000110, /* 4 */
		0b11000000,
		0b11000000,
		0b11000000,
		0b11000110, /* 8 */
		0b01100110,
		0b00111100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11111000,
		0b01101100,
		0b01100110, /* 4 */
		0b01100110,
		0b01100110,
		0b01100110,
		0b01100110, /* 8 */
		0b01101100,
		0b11111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11111110,
		0b01100010,
		0b01100000, /* 4 */
		0b01100100,
		0b01111100,
		0b01100100,
		0b01100000, /* 8 */
		0b01100010,
		0b11111110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11111110,
		0b01100110,
		0b01100010, /* 4 */
		0b01100100,
		0b01111100,
		0b01100100,
		0b01100000, /* 8 */
		0b01100000,
		0b11110000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00111100,
		0b01100110,
		0b11000110, /* 4 */
		0b11000000,
		0b11000000,
		0b11001110,
		0b11000110, /* 8 */
		0b01100110,
		0b00111110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11001100,
		0b11001100,
		0b11001100, /* 4 */
		0b11001100,
		0b11111100,
		0b11001100,
		0b11001100, /* 8 */
		0b11001100,
		0b11001100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01111000,
		0b00110000,
		0b00110000, /* 4 */
		0b00110000,
		0b00110000,
		0b00110000,
		0b00110000, /* 8 */
		0b00110000,
		0b01111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00011110,
		0b00001100,
		0b00001100, /* 4 */
		0b00001100,
		0b00001100,
		0b11001100,
		0b11001100, /* 8 */
		0b11001100,
		0b01111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11100110,
		0b01100110,
		0b01101100, /* 4 */
		0b01101100,
		0b01111000,
		0b01101100,
		0b01101100, /* 8 */
		0b01100110,
		0b11100110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11110000,
		0b01100000,
		0b01100000, /* 4 */
		0b01100000,
		0b01100000,
		0b01100010,
		0b01100110, /* 8 */
		0b01100110,
		0b11111110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11000110,
		0b11101110,
		0b11111110, /* 4 */
		0b11111110,
		0b11010110,
		0b11000110,
		0b11000110, /* 8 */
		0b11000110,
		0b11000110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11000110,
		0b11000110,
		0b11100110, /* 4 */
		0b11110110,
		0b11111110,
		0b11011110,
		0b11001110, /* 8 */
		0b11000110,
		0b11000110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00111000,
		0b01101100,
		0b11000110, /* 4 */
		0b11000110,
		0b11000110,
		0b11000110,
		0b11000110, /* 8 */
		0b01101100,
		0b00111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11111100,
		0b01100110,
		0b01100110, /* 4 */
		0b01100110,
		0b01111100,
		0b01100000,
		0b01100000, /* 8 */
		0b01100000,
		0b11110000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00111000,
		0b01101100,
		0b11000110, /* 4 */
		0b11000110,
		0b11000110,
		0b11001110,
		0b11011110, /* 8 */
		0b01111100,
		0b00001100,
		0b00011110,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11111100,
		0b01100110,
		0b01100110, /* 4 */
		0b01100110,
		0b01111100,
		0b01101100,
		0b01100110, /* 8 */
		0b01100110,
		0b11100110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01111000,
		0b11001100,
		0b11001100, /* 4 */
		0b11000000,
		0b01110000,
		0b00011000,
		0b11001100, /* 8 */
		0b11001100,
		0b01111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11111100,
		0b10110100,
		0b00110000, /* 4 */
		0b00110000,
		0b00110000,
		0b00110000,
		0b00110000, /* 8 */
		0b00110000,
		0b01111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11001100,
		0b11001100,
		0b11001100, /* 4 */
		0b11001100,
		0b11001100,
		0b11001100,
		0b11001100, /* 8 */
		0b11001100,
		0b01111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11001100,
		0b11001100,
		0b11001100, /* 4 */
		0b11001100,
		0b11001100,
		0b11001100,
		0b11001100, /* 8 */
		0b01111000,
		0b00110000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11000110,
		0b11000110,
		0b11000110, /* 4 */
		0b11000110,
		0b11010110,
		0b11010110,
		0b01101100, /* 8 */
		0b01101100,
		0b01101100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11001100,
		0b11001100,
		0b11001100, /* 4 */
		0b01111000,
		0b00110000,
		0b01111000,
		0b11001100, /* 8 */
		0b11001100,
		0b11001100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11001100,
		0b11001100,
		0b11001100, /* 4 */
		0b11001100,
		0b01111000,
		0b00110000,
		0b00110000, /* 8 */
		0b00110000,
		0b01111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11111110,
		0b11001110,
		0b10011000, /* 4 */
		0b00011000,
		0b00110000,
		0b01100000,
		0b01100010, /* 8 */
		0b11000110,
		0b11111110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00111100,
		0b00110000,
		0b00110000, /* 4 */
		0b00110000,
		0b00110000,
		0b00110000,
		0b00110000, /* 8 */
		0b00110000,
		0b00111100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b10000000,
		0b11000000,
		0b01100000, /* 4 */
		0b00110000,
		0b00011000,
		0b00001100,
		0b00000110, /* 8 */
		0b00000010,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00111100,
		0b00001100,
		0b00001100, /* 4 */
		0b00001100,
		0b00001100,
		0b00001100,
		0b00001100, /* 8 */
		0b00001100,
		0b00111100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00010000,
		0b00111000,
		0b01101100,
		0b11000110, /* 4 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 8 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 8 */
		0b00000000,
		0b00000000,
		0b11111111,
		0b00000000 /* 12 */
	},
	{	0b00110000,
		0b00110000,
		0b00011000,
		0b00000000, /* 4 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 8 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b01111000,
		0b00001100,
		0b01111100,
		0b11001100, /* 8 */
		0b11001100,
		0b01110110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11100000,
		0b01100000,
		0b01100000, /* 4 */
		0b01111100,
		0b01100110,
		0b01100110,
		0b01100110, /* 8 */
		0b01100110,
		0b11011100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b01111000,
		0b11001100,
		0b11000000,
		0b11000000, /* 8 */
		0b11001100,
		0b01111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00011100,
		0b00001100,
		0b00001100, /* 4 */
		0b01111100,
		0b11001100,
		0b11001100,
		0b11001100, /* 8 */
		0b11001100,
		0b01110110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b01111000,
		0b11001100,
		0b11111100,
		0b11000000, /* 8 */
		0b11001100,
		0b01111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00111000,
		0b01101100,
		0b01100000, /* 4 */
		0b01100000,
		0b11111000,
		0b01100000,
		0b01100000, /* 8 */
		0b01100000,
		0b11110000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b01110110,
		0b11001100,
		0b11001100,
		0b11001100, /* 8 */
		0b01111100,
		0b00001100,
		0b11001100,
		0b01111000 /* 12 */
	},
	{	0b00000000,
		0b11100000,
		0b01100000,
		0b01100000, /* 4 */
		0b01101100,
		0b01110110,
		0b01100110,
		0b01100110, /* 8 */
		0b01100110,
		0b11100110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00011000,
		0b00011000,
		0b00000000, /* 4 */
		0b01111000,
		0b00011000,
		0b00011000,
		0b00011000, /* 8 */
		0b00011000,
		0b01111110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00001100,
		0b00001100,
		0b00000000, /* 4 */
		0b00011100,
		0b00001100,
		0b00001100,
		0b00001100, /* 8 */
		0b00001100,
		0b11001100,
		0b11001100,
		0b01111000 /* 12 */
	},
	{	0b00000000,
		0b11100000,
		0b01100000,
		0b01100000, /* 4 */
		0b01100110,
		0b01101100,
		0b01111000,
		0b01101100, /* 8 */
		0b01100110,
		0b11100110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01111000,
		0b00011000,
		0b00011000, /* 4 */
		0b00011000,
		0b00011000,
		0b00011000,
		0b00011000, /* 8 */
		0b00011000,
		0b01111110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b11111100,
		0b11010110,
		0b11010110,
		0b11010110, /* 8 */
		0b11010110,
		0b11000110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b11111000,
		0b11001100,
		0b11001100,
		0b11001100, /* 8 */
		0b11001100,
		0b11001100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b01111000,
		0b11001100,
		0b11001100,
		0b11001100, /* 8 */
		0b11001100,
		0b01111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b00000000,
		0b11011100,
		0b01100110,
		0b01100110, /* 8 */
		0b01100110,
		0b01111100,
		0b01100000,
		0b11110000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b00000000,
		0b01110110,
		0b11001100,
		0b11001100, /* 8 */
		0b11001100,
		0b01111100,
		0b00001100,
		0b00011110 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b11101100,
		0b01101110,
		0b01110110,
		0b01100000, /* 8 */
		0b01100000,
		0b11110000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b01111000,
		0b11001100,
		0b01100000,
		0b00011000, /* 8 */
		0b11001100,
		0b01111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00100000, /* 4 */
		0b01100000,
		0b11111100,
		0b01100000,
		0b01100000, /* 8 */
		0b01101100,
		0b00111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b11001100,
		0b11001100,
		0b11001100,
		0b11001100, /* 8 */
		0b11001100,
		0b01110110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b11001100,
		0b11001100,
		0b11001100,
		0b11001100, /* 8 */
		0b01111000,
		0b00110000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b11000110,
		0b11000110,
		0b11010110,
		0b11010110, /* 8 */
		0b01101100,
		0b01101100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b11000110,
		0b01101100,
		0b00111000,
		0b00111000, /* 8 */
		0b01101100,
		0b11000110,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b01100110,
		0b01100110,
		0b01100110,
		0b01100110, /* 8 */
		0b00111100,
		0b00001100,
		0b00011000,
		0b11110000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 4 */
		0b11111100,
		0b10001100,
		0b00011000,
		0b01100000, /* 8 */
		0b11000100,
		0b11111100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00011100,
		0b00110000,
		0b00110000, /* 4 */
		0b01100000,
		0b11000000,
		0b01100000,
		0b00110000, /* 8 */
		0b00110000,
		0b00011100,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00011000,
		0b00011000,
		0b00011000, /* 4 */
		0b00011000,
		0b00000000,
		0b00011000,
		0b00011000, /* 8 */
		0b00011000,
		0b00011000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11100000,
		0b00110000,
		0b00110000, /* 4 */
		0b00011000,
		0b00001100,
		0b00011000,
		0b00110000, /* 8 */
		0b00110000,
		0b11100000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01110011,
		0b11011010,
		0b11001110, /* 4 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000, /* 8 */
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00000000,
		0b00000000,
		0b00010000, /* 4 */
		0b00111000,
		0b01101100,
		0b11000110,
		0b11000110, /* 8 */
		0b11111110,
		0b00000000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b01000100,
		0b01101100,
		0b00111000, /* 4 */
		0b00100000,
		0b01100000,
		0b11000000,
		0b11000000, /* 8 */
		0b01100000,
		0b00111000,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b00110000,
		0b00110000,
		0b11111110, /* 4 */
		0b00110000,
		0b00110000,
		0b01111010,
		0b10110110, /* 8 */
		0b01111100,
		0b00110010,
		0b00000000,
		0b00000000 /* 12 */
	},
	{	0b00000000,
		0b11111110,
		0b00001100,
		0b00011000, /* 4 */
		0b00110000,
		0b01100000,
		0b00110000,
		0b00011000, /* 8 */
		0b00101100,
		0b00111010,
		0b00000000,
		0b00000000 /* 12 */
	},
	
};