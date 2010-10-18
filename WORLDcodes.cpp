#include <avr/io.h>
#include <avr/pgmspace.h>
#include "main.h"

//Codes captured from Generation 3 TV-B-Gone by Limor Fried & Mitch Altman
// table of POWER codes


#ifdef NA_CODES
const uint16_t code_na000Times[] PROGMEM = {
        60, 60,
        60, 2700,
        120, 60,
        240, 60,
};
const struct IrCode code_na000Code PROGMEM = {
        freq_to_timerval(38400),
        26,             // # of pairs
        2,              // # of bits per index
        code_na000Times,
        {
                0xE2,
                0x20,
                0x80,
                0x78,
                0x88,
                0x20,
                0x10,
        }
};

const uint16_t code_na001Times[] PROGMEM = {
	50, 100,
	50, 200,
	50, 800,
	400, 400,
};
const struct IrCode code_na001Code PROGMEM = {
	freq_to_timerval(57143),
	52,		// # of pairs
	2,		// # of bits per index
	code_na001Times,  
	{
		0xD5,
		0x41,
		0x11,
		0x00,
		0x14,
		0x44,
		0x6D,
		0x54,
		0x11,
		0x10,
		0x01,
		0x44,
		0x45,
	}
};
const uint16_t code_na002Times[] PROGMEM = {
	42, 46,
	42, 133,
	42, 7519,
	347, 176,
	347, 177,
};
const struct IrCode code_na002Code PROGMEM = {
	freq_to_timerval(37037),
	100,		// # of pairs
	3,		// # of bits per index
	code_na002Times,  
	{
		0x60,
		0x80,
		0x00,
		0x00,
		0x00,
		0x08,
		0x00,
		0x00,
		0x00,
		0x20,
		0x00,
		0x00,
		0x04,
		0x12,
		0x48,
		0x04,
		0x12,
		0x48,
		0x2A,
		0x02,
		0x00,
		0x00,
		0x00,
		0x00,
		0x20,
		0x00,
		0x00,
		0x00,
		0x80,
		0x00,
		0x00,
		0x10,
		0x49,
		0x20,
		0x10,
		0x49,
		0x20,
		0x80,
	}
};
const uint16_t code_na003Times[] PROGMEM = {
	26, 185,
	27, 80,
	27, 185,
	27, 4549,
};
const struct IrCode code_na003Code PROGMEM = {
	freq_to_timerval(38610),
	64,		// # of pairs
	2,		// # of bits per index
	code_na003Times,  
	{
		0x15,
		0x5A,
		0x65,
		0x67,
		0x95,
		0x65,
		0x9A,
		0x9B,
		0x95,
		0x5A,
		0x65,
		0x67,
		0x95,
		0x65,
		0x9A,
		0x99,
	}
};
const uint16_t code_na004Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
const struct IrCode code_na004Code PROGMEM = {
	freq_to_timerval(38610),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x00,
		0x01,
		0x04,
		0x92,
		0x48,
		0x20,
		0x80,
		0x40,
		0x04,
		0x12,
		0x09,
		0x2B,
		0x3D,
		0x00,
	}
};
const uint16_t code_na005Times[] PROGMEM = {
	88, 90,
	88, 91,
	88, 181,
	88, 8976,
	177, 91,
};
const struct IrCode code_na005Code PROGMEM = {
	freq_to_timerval(35714),
	24,		// # of pairs
	3,		// # of bits per index
	code_na005Times,  
	{
		0x10,
		0x92,
		0x49,
		0x46,
		0x33,
		0x09,
		0x24,
		0x94,
		0x60,
	}
};
const uint16_t code_na006Times[] PROGMEM = {
	50, 62,
	50, 172,
	50, 4541,
	448, 466,
	450, 465,
};
const struct IrCode code_na006Code PROGMEM = {
	freq_to_timerval(38462),
	68,		// # of pairs
	3,		// # of bits per index
	code_na006Times,  
	{
		0x64,
		0x90,
		0x00,
		0x04,
		0x90,
		0x00,
		0x00,
		0x80,
		0x00,
		0x04,
		0x12,
		0x49,
		0x2A,
		0x12,
		0x40,
		0x00,
		0x12,
		0x40,
		0x00,
		0x02,
		0x00,
		0x00,
		0x10,
		0x49,
		0x24,
		0x90,
	}
};
const uint16_t code_na007Times[] PROGMEM = {
	49, 49,
	49, 50,
	49, 410,
	49, 510,
	49, 12107,
};
const struct IrCode code_na007Code PROGMEM = {
	freq_to_timerval(39216),
	34,		// # of pairs
	3,		// # of bits per index
	code_na007Times,  
	{
		0x09,
		0x94,
		0x53,
		0x29,
		0x94,
		0xD9,
		0x85,
		0x32,
		0x8A,
		0x65,
		0x32,
		0x9B,
		0x20,
	}
};
const uint16_t code_na008Times[] PROGMEM = {
	56, 58,
	56, 170,
	56, 4011,
	898, 450,
	900, 449,
};
const struct IrCode code_na008Code PROGMEM = {
	freq_to_timerval(38462),
	68,		// # of pairs
	3,		// # of bits per index
	code_na008Times,  
	{
		0x64,
		0x00,
		0x49,
		0x00,
		0x92,
		0x00,
		0x20,
		0x82,
		0x01,
		0x04,
		0x10,
		0x48,
		0x2A,
		0x10,
		0x01,
		0x24,
		0x02,
		0x48,
		0x00,
		0x82,
		0x08,
		0x04,
		0x10,
		0x41,
		0x20,
		0x90,
	}
};
const uint16_t code_na009Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
const struct IrCode code_na009Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x84,
		0x90,
		0x00,
		0x20,
		0x80,
		0x08,
		0x00,
		0x00,
		0x09,
		0x24,
		0x92,
		0x40,
		0x0A,
		0xBA,
		0x40,
	}
};
const uint16_t code_na010Times[] PROGMEM = {
	51, 55,
	51, 158,
	51, 2286,
	841, 419,
};
const struct IrCode code_na010Code PROGMEM = {
	freq_to_timerval(38462),
	52,		// # of pairs
	2,		// # of bits per index
	code_na010Times,  
	{
		0xD4,
		0x00,
		0x15,
		0x10,
		0x25,
		0x00,
		0x05,
		0x44,
		0x09,
		0x40,
		0x01,
		0x51,
		0x01,
	}
};
const uint16_t code_na011Times[] PROGMEM = {
	55, 55,
	55, 172,
	55, 4039,
	55, 9348,
	56, 0,
	884, 442,
	885, 225,
};
const struct IrCode code_na011Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na011Times,  
	{
		0xA0,
		0x00,
		0x41,
		0x04,
		0x92,
		0x08,
		0x24,
		0x90,
		0x40,
		0x00,
		0x02,
		0x09,
		0x2B,
		0x3D,
		0x00,
	}
};
const uint16_t code_na012Times[] PROGMEM = {
	81, 87,
	81, 254,
	81, 3280,
	331, 336,
	331, 337,
};
const struct IrCode code_na012Code PROGMEM = {
	freq_to_timerval(38462),
	52,		// # of pairs
	3,		// # of bits per index
	code_na012Times,  
	{
		0x64,
		0x12,
		0x08,
		0x24,
		0x00,
		0x08,
		0x20,
		0x10,
		0x09,
		0x2A,
		0x10,
		0x48,
		0x20,
		0x90,
		0x00,
		0x20,
		0x80,
		0x40,
		0x24,
		0x90,
	}
};
const uint16_t code_na013Times[] PROGMEM = {
	53, 55,
	53, 167,
	53, 2304,
	53, 9369,
	893, 448,
	895, 447,
};
const struct IrCode code_na013Code PROGMEM = {
	freq_to_timerval(38462),
	48,		// # of pairs
	3,		// # of bits per index
	code_na013Times,  
	{
		0x80,
		0x12,
		0x40,
		0x04,
		0x00,
		0x09,
		0x00,
		0x12,
		0x41,
		0x24,
		0x82,
		0x01,
		0x00,
		0x10,
		0x48,
		0x24,
		0xAA,
		0xE8,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_na014Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_na014Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x00,
		0x09,
		0x04,
		0x92,
		0x40,
		0x24,
		0x80,
		0x00,
		0x00,
		0x12,
		0x49,
		0x2B,
		0x3D,
		0x00,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_na015Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_na015Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x80,
		0x01,
		0x04,
		0x12,
		0x48,
		0x24,
		0x00,
		0x00,
		0x00,
		0x92,
		0x49,
		0x2B,
		0x3D,
		0x00,
	}
};
const uint16_t code_na016Times[] PROGMEM = {
	28, 90,
	28, 211,
	28, 2507,
};
const struct IrCode code_na016Code PROGMEM = {
	freq_to_timerval(34483),
	34,		// # of pairs
	2,		// # of bits per index
	code_na016Times,  
	{
		0x54,
		0x04,
		0x10,
		0x00,
		0x95,
		0x01,
		0x04,
		0x00,
		0x10,
	}
};
const uint16_t code_na017Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
const struct IrCode code_na017Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA0,
		0x02,
		0x48,
		0x04,
		0x90,
		0x01,
		0x20,
		0x80,
		0x40,
		0x04,
		0x12,
		0x09,
		0x2A,
		0x38,
		0x00,
	}
};
const uint16_t code_na018Times[] PROGMEM = {
	51, 55,
	51, 161,
	51, 2566,
	849, 429,
	849, 430,
};
const struct IrCode code_na018Code PROGMEM = {
	freq_to_timerval(38462),
	136,		// # of pairs
	3,		// # of bits per index
	code_na018Times,  
	{
		0x60,
		0x82,
		0x08,
		0x24,
		0x10,
		0x41,
		0x00,
		0x12,
		0x40,
		0x04,
		0x80,
		0x09,
		0x2A,
		0x02,
		0x08,
		0x20,
		0x90,
		0x41,
		0x04,
		0x00,
		0x49,
		0x00,
		0x12,
		0x00,
		0x24,
		0xA8,
		0x08,
		0x20,
		0x82,
		0x41,
		0x04,
		0x10,
		0x01,
		0x24,
		0x00,
		0x48,
		0x00,
		0x92,
		0xA0,
		0x20,
		0x82,
		0x09,
		0x04,
		0x10,
		0x40,
		0x04,
		0x90,
		0x01,
		0x20,
		0x02,
		0x48,
	}
};
const uint16_t code_na019Times[] PROGMEM = {
	40, 42,
	40, 124,
	40, 4601,
	325, 163,
	326, 163,
};
const struct IrCode code_na019Code PROGMEM = {
	freq_to_timerval(38462),
	100,		// # of pairs
	3,		// # of bits per index
	code_na019Times,  
	{
		0x60,
		0x10,
		0x40,
		0x04,
		0x80,
		0x09,
		0x00,
		0x00,
		0x00,
		0x00,
		0x10,
		0x00,
		0x20,
		0x10,
		0x00,
		0x20,
		0x80,
		0x00,
		0x0A,
		0x00,
		0x41,
		0x00,
		0x12,
		0x00,
		0x24,
		0x00,
		0x00,
		0x00,
		0x00,
		0x40,
		0x00,
		0x80,
		0x40,
		0x00,
		0x82,
		0x00,
		0x00,
		0x00,
	}
};
const uint16_t code_na020Times[] PROGMEM = {
	60, 55,
	60, 163,
	60, 4099,
	60, 9698,
	61, 0,
	898, 461,
	900, 230,
};
const struct IrCode code_na020Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na020Times,  
	{
		0xA0,
		0x10,
		0x00,
		0x04,
		0x82,
		0x49,
		0x20,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2B,
		0x3D,
		0x00,
	}
};
const uint16_t code_na021Times[] PROGMEM = {
	48, 52,
	48, 160,
	48, 400,
	48, 2335,
	799, 400,
};
const struct IrCode code_na021Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na021Times,  
	{
		0x80,
		0x10,
		0x40,
		0x08,
		0x82,
		0x08,
		0x01,
		0xC0,
		0x08,
		0x20,
		0x04,
		0x41,
		0x04,
		0x00,
		0x00,
	}
};
const uint16_t code_na022Times[] PROGMEM = {
	53, 60,
	53, 175,
	53, 4463,
	53, 9453,
	892, 450,
	895, 225,
};
const struct IrCode code_na022Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na022Times,  
	{
		0x80,
		0x02,
		0x40,
		0x00,
		0x02,
		0x40,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x48,
		0x0A,
		0xBA,
		0x00,
	}
};
const uint16_t code_na023Times[] PROGMEM = {
	48, 52,
	48, 409,
	48, 504,
	48, 10461,
};
const struct IrCode code_na023Code PROGMEM = {
	freq_to_timerval(40000),
	44,		// # of pairs
	2,		// # of bits per index
	code_na023Times,  
	{
		0xA1,
		0x18,
		0x61,
		0xA1,
		0x18,
		0x7A,
		0x11,
		0x86,
		0x1A,
		0x11,
		0x86,
	}
};
const uint16_t code_na024Times[] PROGMEM = {
	58, 60,
	58, 2569,
	118, 60,
	237, 60,
	238, 60,
};
const struct IrCode code_na024Code PROGMEM = {
	freq_to_timerval(38462),
	26,		// # of pairs
	3,		// # of bits per index
	code_na024Times,  
	{
		0x69,
		0x24,
		0x10,
		0x40,
		0x03,
		0x12,
		0x48,
		0x20,
		0x80,
		0x00,
	}
};
const uint16_t code_na025Times[] PROGMEM = {
	84, 90,
	84, 264,
	84, 3470,
	346, 350,
	347, 350,
};
const struct IrCode code_na025Code PROGMEM = {
	freq_to_timerval(38462),
	52,		// # of pairs
	3,		// # of bits per index
	code_na025Times,  
	{
		0x64,
		0x92,
		0x49,
		0x00,
		0x00,
		0x00,
		0x00,
		0x02,
		0x49,
		0x2A,
		0x12,
		0x49,
		0x24,
		0x00,
		0x00,
		0x00,
		0x00,
		0x09,
		0x24,
		0x90,
	}
};
const uint16_t code_na026Times[] PROGMEM = {
	49, 49,
	49, 50,
	49, 410,
	49, 510,
	49, 12582,
};
const struct IrCode code_na026Code PROGMEM = {
	freq_to_timerval(39216),
	34,		// # of pairs
	3,		// # of bits per index
	code_na026Times,  
	{
		0x09,
		0x94,
		0x53,
		0x65,
		0x32,
		0x99,
		0x85,
		0x32,
		0x8A,
		0x6C,
		0xA6,
		0x53,
		0x20,
	}
};

/* Duplicate timing table, same as na001 !
const uint16_t code_na027Times[] PROGMEM = {
	50, 100,
	50, 200,
	50, 800,
	400, 400,
};
*/
const struct IrCode code_na027Code PROGMEM = {
	freq_to_timerval(57143),
	52,		// # of pairs
	2,		// # of bits per index
	code_na001Times,  
	{
		0xC5,
		0x41,
		0x11,
		0x10,
		0x14,
		0x44,
		0x6C,
		0x54,
		0x11,
		0x11,
		0x01,
		0x44,
		0x44,
	}
};
const uint16_t code_na028Times[] PROGMEM = {
	118, 121,
	118, 271,
	118, 4750,
	258, 271,
};
const struct IrCode code_na028Code PROGMEM = {
	freq_to_timerval(38610),
	36,		// # of pairs
	2,		// # of bits per index
	code_na028Times,  
	{
		0xC4,
		0x45,
		0x14,
		0x04,
		0x6C,
		0x44,
		0x51,
		0x40,
		0x44,
	}
};
const uint16_t code_na029Times[] PROGMEM = {
	88, 90,
	88, 91,
	88, 181,
	177, 91,
	177, 8976,
};
const struct IrCode code_na029Code PROGMEM = {
	freq_to_timerval(35842),
	22,		// # of pairs
	3,		// # of bits per index
	code_na029Times,  
	{
		0x0C,
		0x92,
		0x53,
		0x46,
		0x16,
		0x49,
		0x29,
		0xA2,
		0xC0,
	}
};

/* Duplicate timing table, same as na009 !
const uint16_t code_na030Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
*/
const struct IrCode code_na030Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x80,
		0x00,
		0x41,
		0x04,
		0x12,
		0x08,
		0x20,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x2A,
		0xBA,
		0x00,
	}
};
const uint16_t code_na031Times[] PROGMEM = {
	88, 89,
	88, 90,
	88, 179,
	88, 8977,
	177, 90,
};
const struct IrCode code_na031Code PROGMEM = {
	freq_to_timerval(35842),
	24,		// # of pairs
	3,		// # of bits per index
	code_na031Times,  
	{
		0x06,
		0x12,
		0x49,
		0x46,
		0x32,
		0x61,
		0x24,
		0x94,
		0x60,
	}
};

/* Duplicate timing table, same as na009 !
const uint16_t code_na032Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
*/
const struct IrCode code_na032Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x80,
		0x00,
		0x41,
		0x04,
		0x12,
		0x08,
		0x20,
		0x80,
		0x00,
		0x04,
		0x12,
		0x49,
		0x2A,
		0xBA,
		0x00,
	}
};
const uint16_t code_na033Times[] PROGMEM = {
	40, 43,
	40, 122,
	40, 5297,
	334, 156,
	336, 155,
};
const struct IrCode code_na033Code PROGMEM = {
	freq_to_timerval(38462),
	100,		// # of pairs
	3,		// # of bits per index
	code_na033Times,  
	{
		0x60,
		0x10,
		0x40,
		0x04,
		0x80,
		0x09,
		0x00,
		0x00,
		0x00,
		0x00,
		0x10,
		0x00,
		0x20,
		0x82,
		0x00,
		0x20,
		0x00,
		0x00,
		0x0A,
		0x00,
		0x41,
		0x00,
		0x12,
		0x00,
		0x24,
		0x00,
		0x00,
		0x00,
		0x00,
		0x40,
		0x00,
		0x82,
		0x08,
		0x00,
		0x80,
		0x00,
		0x00,
		0x00,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_na034Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_na034Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x00,
		0x41,
		0x04,
		0x92,
		0x08,
		0x24,
		0x92,
		0x48,
		0x00,
		0x00,
		0x01,
		0x2B,
		0x3D,
		0x00,
	}
};
const uint16_t code_na035Times[] PROGMEM = {
	96, 93,
	97, 93,
	97, 287,
	97, 3431,
};
const struct IrCode code_na035Code PROGMEM = {
	freq_to_timerval(41667),
	22,		// # of pairs
	2,		// # of bits per index
	code_na035Times,  
	{
		0x16,
		0x66,
		0x5D,
		0x59,
		0x99,
		0x50,
	}
};
const uint16_t code_na036Times[] PROGMEM = {
	82, 581,
	84, 250,
	84, 580,
	85, 0,
};
const struct IrCode code_na036Code PROGMEM = {
	freq_to_timerval(37037),
	11,		// # of pairs
	2,		// # of bits per index
	code_na036Times,  
	{
		0x15,
		0x9A,
		0x9C,
	}
};
const uint16_t code_na037Times[] PROGMEM = {
	39, 263,
	164, 163,
	514, 164,
};
const struct IrCode code_na037Code PROGMEM = {
	freq_to_timerval(41667),
	11,		// # of pairs
	2,		// # of bits per index
	code_na037Times,  
	{
		0x80,
		0x45,
		0x00,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na038Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na038Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA4,
		0x10,
		0x40,
		0x00,
		0x82,
		0x09,
		0x20,
		0x80,
		0x40,
		0x04,
		0x12,
		0x09,
		0x2A,
		0x38,
		0x40,
	}
};
const uint16_t code_na039Times[] PROGMEM = {
	113, 101,
	688, 2707,
};
const struct IrCode code_na039Code PROGMEM = {
	freq_to_timerval(40000),
	4,		// # of pairs
	2,		// # of bits per index
	code_na039Times,  
	{
		0x11,
	}
};
const uint16_t code_na040Times[] PROGMEM = {
	113, 101,
	113, 201,
	113, 2707,
};
const struct IrCode code_na040Code PROGMEM = {
	freq_to_timerval(40000),
	8,		// # of pairs
	2,		// # of bits per index
	code_na040Times,  
	{
		0x06,
		0x04,
	}
};
const uint16_t code_na041Times[] PROGMEM = {
	58, 62,
	58, 2746,
	117, 62,
	242, 62,
};
const struct IrCode code_na041Code PROGMEM = {
	freq_to_timerval(76923),
	26,		// # of pairs
	2,		// # of bits per index
	code_na041Times,  
	{
		0xE2,
		0x20,
		0x80,
		0x78,
		0x88,
		0x20,
		0x00,
	}
};
const uint16_t code_na042Times[] PROGMEM = {
	54, 65,
	54, 170,
	54, 4099,
	54, 8668,
	899, 226,
	899, 421,
};
const struct IrCode code_na042Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na042Times,  
	{
		0xA4,
		0x80,
		0x00,
		0x20,
		0x82,
		0x49,
		0x00,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2A,
		0x38,
		0x40,
	}
};
const uint16_t code_na043Times[] PROGMEM = {
	43, 120,
	43, 121,
	43, 3491,
	131, 45,
};
const struct IrCode code_na043Code PROGMEM = {
	freq_to_timerval(40000),
	24,		// # of pairs
	2,		// # of bits per index
	code_na043Times,  
	{
		0x15,
		0x75,
		0x56,
		0x55,
		0x75,
		0x54,
	}
};
const uint16_t code_na044Times[] PROGMEM = {
	51, 51,
	51, 160,
	51, 4096,
	51, 9513,
	431, 436,
	883, 219,
};
const struct IrCode code_na044Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na044Times,  
	{
		0x84,
		0x90,
		0x00,
		0x00,
		0x02,
		0x49,
		0x20,
		0x80,
		0x00,
		0x04,
		0x12,
		0x49,
		0x2A,
		0xBA,
		0x40,
	}
};
const uint16_t code_na045Times[] PROGMEM = {
	58, 53,
	58, 167,
	58, 4494,
	58, 9679,
	455, 449,
	456, 449,
};
const struct IrCode code_na045Code PROGMEM = {
	freq_to_timerval(38462),
	40,		// # of pairs
	3,		// # of bits per index
	code_na045Times,  
	{
		0x80,
		0x90,
		0x00,
		0x00,
		0x90,
		0x00,
		0x04,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x2A,
		0x97,
		0x48,
	}
};
const uint16_t code_na046Times[] PROGMEM = {
	51, 277,
	52, 53,
	52, 105,
	52, 277,
	52, 2527,
	52, 12809,
	103, 54,
};
const struct IrCode code_na046Code PROGMEM = {
	freq_to_timerval(29412),
	23,		// # of pairs
	3,		// # of bits per index
	code_na046Times,  
	{
		0x0B,
		0x12,
		0x63,
		0x44,
		0x92,
		0x6B,
		0x44,
		0x92,
		0x50,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na047Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na047Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA0,
		0x00,
		0x40,
		0x04,
		0x92,
		0x09,
		0x24,
		0x92,
		0x09,
		0x20,
		0x00,
		0x40,
		0x0A,
		0x38,
		0x00,
	}
};

/* Duplicate timing table, same as na044 !
const uint16_t code_na048Times[] PROGMEM = {
	51, 51,
	51, 160,
	51, 4096,
	51, 9513,
	431, 436,
	883, 219,
};
*/
const struct IrCode code_na048Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na044Times,  
	{
		0x80,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x24,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x2A,
		0xBA,
		0x00,
	}
};
const uint16_t code_na049Times[] PROGMEM = {
	274, 854,
	274, 1986,
};
const struct IrCode code_na049Code PROGMEM = {
	freq_to_timerval(45455),
	11,		// # of pairs
	2,		// # of bits per index
	code_na049Times,  
	{
		0x14,
		0x11,
		0x40,
	}
};
const uint16_t code_na050Times[] PROGMEM = {
	80, 88,
	80, 254,
	80, 3750,
	359, 331,
};
const struct IrCode code_na050Code PROGMEM = {
	freq_to_timerval(55556),
	48,		// # of pairs
	2,		// # of bits per index
	code_na050Times,  
	{
		0xC0,
		0x00,
		0x01,
		0x55,
		0x55,
		0x52,
		0xC0,
		0x00,
		0x01,
		0x55,
		0x55,
		0x50,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na051Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na051Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA0,
		0x10,
		0x01,
		0x24,
		0x82,
		0x48,
		0x00,
		0x02,
		0x40,
		0x04,
		0x90,
		0x09,
		0x2A,
		0x38,
		0x00,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na052Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na052Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA4,
		0x90,
		0x48,
		0x00,
		0x02,
		0x01,
		0x20,
		0x80,
		0x40,
		0x04,
		0x12,
		0x09,
		0x2A,
		0x38,
		0x40,
	}
};
const uint16_t code_na053Times[] PROGMEM = {
	51, 232,
	51, 512,
	51, 792,
	51, 2883,
};
const struct IrCode code_na053Code PROGMEM = {
	freq_to_timerval(55556),
	30,		// # of pairs
	2,		// # of bits per index
	code_na053Times,  
	{
		0x22,
		0x21,
		0x40,
		0x1C,
		0x88,
		0x85,
		0x00,
		0x40,
	}
};

/* Duplicate timing table, same as na053 !
const uint16_t code_na054Times[] PROGMEM = {
	51, 232,
	51, 512,
	51, 792,
	51, 2883,
};
*/
const struct IrCode code_na054Code PROGMEM = {
	freq_to_timerval(55556),
	28,		// # of pairs
	2,		// # of bits per index
	code_na053Times,  
	{
		0x22,
		0x20,
		0x15,
		0x72,
		0x22,
		0x01,
		0x54,
	}
};
const uint16_t code_na055Times[] PROGMEM = {
	3, 10,
	3, 20,
	3, 30,
	3, 12778,
};
const struct IrCode code_na055Code PROGMEM = {
	0,              // Non-pulsed code
	27,		// # of pairs
	2,		// # of bits per index
	code_na055Times,  
	{
		0x81,
		0x51,
		0x14,
		0xB8,
		0x15,
		0x11,
		0x44,
	}
};
const uint16_t code_na056Times[] PROGMEM = {
	55, 193,
	57, 192,
	57, 384,
	58, 0,
};
const struct IrCode code_na056Code PROGMEM = {
	freq_to_timerval(37175),
	8,		// # of pairs
	2,		// # of bits per index
	code_na056Times,  
	{
		0x2A,
		0x57,
	}
};
const uint16_t code_na057Times[] PROGMEM = {
	45, 148,
	46, 148,
	46, 351,
	46, 2781,
};
const struct IrCode code_na057Code PROGMEM = {
	freq_to_timerval(40000),
	14,		// # of pairs
	2,		// # of bits per index
	code_na057Times,  
	{
		0x2A,
		0x5D,
		0xA9,
		0x60,
	}
};
const uint16_t code_na058Times[] PROGMEM = {
	22, 101,
	22, 219,
	23, 101,
	23, 219,
	31, 218,
};
const struct IrCode code_na058Code PROGMEM = {
	freq_to_timerval(33333),
	18,		// # of pairs
	3,		// # of bits per index
	code_na058Times,  
	{
		0x8D,
		0xA4,
		0x08,
		0x04,
		0x04,
		0x92,
		0x4C,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na059Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na059Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA4,
		0x12,
		0x09,
		0x00,
		0x80,
		0x40,
		0x20,
		0x10,
		0x40,
		0x04,
		0x82,
		0x09,
		0x2A,
		0x38,
		0x40,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na060Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na060Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA0,
		0x00,
		0x08,
		0x04,
		0x92,
		0x41,
		0x24,
		0x00,
		0x40,
		0x00,
		0x92,
		0x09,
		0x2A,
		0x38,
		0x00,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na061Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na061Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA0,
		0x00,
		0x08,
		0x24,
		0x92,
		0x41,
		0x04,
		0x82,
		0x00,
		0x00,
		0x10,
		0x49,
		0x2A,
		0x38,
		0x00,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na062Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na062Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA0,
		0x02,
		0x08,
		0x04,
		0x90,
		0x41,
		0x24,
		0x82,
		0x00,
		0x00,
		0x10,
		0x49,
		0x2A,
		0x38,
		0x00,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na063Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na063Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA4,
		0x92,
		0x49,
		0x20,
		0x00,
		0x00,
		0x04,
		0x92,
		0x48,
		0x00,
		0x00,
		0x01,
		0x2A,
		0x38,
		0x40,
	}
};

/* Duplicate timing table, same as na001 !
const uint16_t code_na064Times[] PROGMEM = {
	50, 100,
	50, 200,
	50, 800,
	400, 400,
};
*/
const struct IrCode code_na064Code PROGMEM = {
	freq_to_timerval(57143),
	52,		// # of pairs
	2,		// # of bits per index
	code_na001Times,  
	{
		0xC0,
		0x01,
		0x51,
		0x55,
		0x54,
		0x04,
		0x2C,
		0x00,
		0x15,
		0x15,
		0x55,
		0x40,
		0x40,
	}
};
const uint16_t code_na065Times[] PROGMEM = {
	48, 98,
	48, 197,
	98, 846,
	395, 392,
	1953, 392,
};
const struct IrCode code_na065Code PROGMEM = {
	freq_to_timerval(59172),
	78,		// # of pairs
	3,		// # of bits per index
	code_na065Times,  
	{
		0x84,
		0x92,
		0x01,
		0x24,
		0x12,
		0x00,
		0x04,
		0x80,
		0x08,
		0x09,
		0x92,
		0x48,
		0x04,
		0x90,
		0x48,
		0x00,
		0x12,
		0x00,
		0x20,
		0x26,
		0x49,
		0x20,
		0x12,
		0x41,
		0x20,
		0x00,
		0x48,
		0x00,
		0x80,
		0x80,
	}
};
const uint16_t code_na066Times[] PROGMEM = {
	38, 276,
	165, 154,
	415, 155,
	742, 154,
};
const struct IrCode code_na066Code PROGMEM = {
	freq_to_timerval(38462),
	33,		// # of pairs
	2,		// # of bits per index
	code_na066Times,  
	{
		0xC0,
		0x45,
		0x02,
		0x01,
		0x14,
		0x08,
		0x04,
		0x50,
		0x00,
	}
};

/* Duplicate timing table, same as na044 !
const uint16_t code_na067Times[] PROGMEM = {
	51, 51,
	51, 160,
	51, 4096,
	51, 9513,
	431, 436,
	883, 219,
};
*/
const struct IrCode code_na067Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na044Times,  
	{
		0x80,
		0x02,
		0x49,
		0x24,
		0x90,
		0x00,
		0x00,
		0x80,
		0x00,
		0x04,
		0x12,
		0x49,
		0x2A,
		0xBA,
		0x00,
	}
};
const uint16_t code_na068Times[] PROGMEM = {
	43, 121,
	43, 9437,
	130, 45,
	131, 45,
};
const struct IrCode code_na068Code PROGMEM = {
	freq_to_timerval(40000),
	24,		// # of pairs
	2,		// # of bits per index
	code_na068Times,  
	{
		0x8C,
		0x30,
		0x0D,
		0xCC,
		0x30,
		0x0C,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na069Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na069Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA0,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x24,
		0x82,
		0x00,
		0x00,
		0x10,
		0x49,
		0x2A,
		0x38,
		0x00,
	}
};
const uint16_t code_na070Times[] PROGMEM = {
	27, 76,
	27, 182,
	27, 183,
	27, 3199,
};
const struct IrCode code_na070Code PROGMEM = {
	freq_to_timerval(38462),
	33,		// # of pairs
	2,		// # of bits per index
	code_na070Times,  
	{
		0x40,
		0x02,
		0x08,
		0xA2,
		0xE0,
		0x00,
		0x82,
		0x28,
		0x40,
	}
};
const uint16_t code_na071Times[] PROGMEM = {
	37, 181,
	37, 272,
};
const struct IrCode code_na071Code PROGMEM = {
	freq_to_timerval(55556),
	8,		// # of pairs
	2,		// # of bits per index
	code_na071Times,  
	{
		0x11,
		0x40,
	}
};

/* Duplicate timing table, same as na042 !
const uint16_t code_na072Times[] PROGMEM = {
	54, 65,
	54, 170,
	54, 4099,
	54, 8668,
	899, 226,
	899, 421,
};
*/
const struct IrCode code_na072Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na042Times,  
	{
		0xA0,
		0x90,
		0x00,
		0x00,
		0x90,
		0x00,
		0x00,
		0x10,
		0x40,
		0x04,
		0x82,
		0x09,
		0x2A,
		0x38,
		0x00,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na073Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na073Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA0,
		0x82,
		0x08,
		0x24,
		0x10,
		0x41,
		0x00,
		0x00,
		0x00,
		0x24,
		0x92,
		0x49,
		0x0A,
		0x38,
		0x00,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na074Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na074Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA4,
		0x00,
		0x41,
		0x00,
		0x92,
		0x08,
		0x20,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2A,
		0x38,
		0x40,
	}
};
const uint16_t code_na075Times[] PROGMEM = {
	51, 98,
	51, 194,
	102, 931,
	390, 390,
	390, 391,
};
const struct IrCode code_na075Code PROGMEM = {
	freq_to_timerval(41667),
	52,		// # of pairs
	3,		// # of bits per index
	code_na075Times,  
	{
		0x60,
		0x00,
		0x01,
		0x04,
		0x10,
		0x49,
		0x24,
		0x82,
		0x08,
		0x2A,
		0x00,
		0x00,
		0x04,
		0x10,
		0x41,
		0x24,
		0x92,
		0x08,
		0x20,
		0xA0,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na076Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na076Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA0,
		0x92,
		0x09,
		0x04,
		0x00,
		0x40,
		0x20,
		0x10,
		0x40,
		0x04,
		0x82,
		0x09,
		0x2A,
		0x38,
		0x00,
	}
};

/* Duplicate timing table, same as na031 !
const uint16_t code_na077Times[] PROGMEM = {
	88, 89,
	88, 90,
	88, 179,
	88, 8977,
	177, 90,
};
*/
const struct IrCode code_na077Code PROGMEM = {
	freq_to_timerval(35714),
	22,		// # of pairs
	3,		// # of bits per index
	code_na031Times,  
	{
		0x10,
		0xA2,
		0x62,
		0x31,
		0x98,
		0x51,
		0x31,
		0x18,
		0x00,
	}
};
const uint16_t code_na078Times[] PROGMEM = {
	40, 275,
	160, 154,
	480, 155,
};
const struct IrCode code_na078Code PROGMEM = {
	freq_to_timerval(38462),
	34,		// # of pairs
	2,		// # of bits per index
	code_na078Times,  
	{
		0x80,
		0x45,
		0x04,
		0x01,
		0x14,
		0x10,
		0x04,
		0x50,
		0x40,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na079Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na079Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA0,
		0x82,
		0x08,
		0x24,
		0x10,
		0x41,
		0x04,
		0x90,
		0x08,
		0x20,
		0x02,
		0x41,
		0x0A,
		0x38,
		0x00,
	}
};

/* Duplicate timing table, same as na055 !
const uint16_t code_na080Times[] PROGMEM = {
	3, 10,
	3, 20,
	3, 30,
	3, 12778,
};
*/
const struct IrCode code_na080Code PROGMEM = {
	0,              // Non-pulsed code
	27,		// # of pairs
	2,		// # of bits per index
	code_na055Times,  
	{
		0x81,
		0x50,
		0x40,
		0xB8,
		0x15,
		0x04,
		0x08,
	}
};
const uint16_t code_na081Times[] PROGMEM = {
	48, 52,
	48, 409,
	48, 504,
	48, 9978,
};
const struct IrCode code_na081Code PROGMEM = {
	freq_to_timerval(40000),
	40,		// # of pairs
	2,		// # of bits per index
	code_na081Times,  
	{
		0x18,
		0x46,
		0x18,
		0x68,
		0x47,
		0x18,
		0x46,
		0x18,
		0x68,
		0x44,
	}
};
const uint16_t code_na082Times[] PROGMEM = {
	88, 89,
	88, 90,
	88, 179,
	88, 8888,
	177, 90,
	177, 179,
};
const struct IrCode code_na082Code PROGMEM = {
	freq_to_timerval(35714),
	24,		// # of pairs
	3,		// # of bits per index
	code_na082Times,  
	{
		0x0A,
		0x12,
		0x49,
		0x2A,
		0xB2,
		0xA1,
		0x24,
		0x92,
		0xA8,
	}
};

/* Duplicate timing table, same as na031 !
const uint16_t code_na083Times[] PROGMEM = {
	88, 89,
	88, 90,
	88, 179,
	88, 8977,
	177, 90,
};
*/
const struct IrCode code_na083Code PROGMEM = {
	freq_to_timerval(35714),
	24,		// # of pairs
	3,		// # of bits per index
	code_na031Times,  
	{
		0x10,
		0x92,
		0x49,
		0x46,
		0x33,
		0x09,
		0x24,
		0x94,
		0x60,
	}
};

const uint16_t code_na084Times[] PROGMEM = {
	41, 43,
	41, 128,
	41, 7476,
	336, 171,
	338, 169,
};
const struct IrCode code_na084Code PROGMEM = {
	freq_to_timerval(37037),
	100,		// # of pairs
	3,		// # of bits per index
	code_na084Times,  
	{
		0x60,
		0x80,
		0x00,
		0x00,
		0x00,
		0x08,
		0x00,
		0x00,
		0x40,
		0x20,
		0x00,
		0x00,
		0x04,
		0x12,
		0x48,
		0x04,
		0x12,
		0x08,
		0x2A,
		0x02,
		0x00,
		0x00,
		0x00,
		0x00,
		0x20,
		0x00,
		0x01,
		0x00,
		0x80,
		0x00,
		0x00,
		0x10,
		0x49,
		0x20,
		0x10,
		0x48,
		0x20,
		0x80,
	}
};
const uint16_t code_na085Times[] PROGMEM = {
	55, 60,
	55, 165,
	55, 2284,
	445, 437,
	448, 436,
};
const struct IrCode code_na085Code PROGMEM = {
	freq_to_timerval(38462),
	44,		// # of pairs
	3,		// # of bits per index
	code_na085Times,  
	{
		0x64,
		0x00,
		0x00,
		0x00,
		0x00,
		0x40,
		0x00,
		0x80,
		0xA1,
		0x00,
		0x00,
		0x00,
		0x00,
		0x10,
		0x00,
		0x20,
		0x10,
	}
};
const uint16_t code_na086Times[] PROGMEM = {
	42, 46,
	42, 126,
	42, 6989,
	347, 176,
	347, 177,
};
const struct IrCode code_na086Code PROGMEM = {
	freq_to_timerval(37175),
	100,		// # of pairs
	3,		// # of bits per index
	code_na086Times,  
	{
		0x60,
		0x82,
		0x08,
		0x20,
		0x82,
		0x41,
		0x04,
		0x92,
		0x00,
		0x20,
		0x80,
		0x40,
		0x00,
		0x90,
		0x40,
		0x04,
		0x00,
		0x41,
		0x2A,
		0x02,
		0x08,
		0x20,
		0x82,
		0x09,
		0x04,
		0x12,
		0x48,
		0x00,
		0x82,
		0x01,
		0x00,
		0x02,
		0x41,
		0x00,
		0x10,
		0x01,
		0x04,
		0x80,
	}
};
const uint16_t code_na087Times[] PROGMEM = {
	56, 69,
	56, 174,
	56, 4165,
	56, 9585,
	880, 222,
	880, 435,
};
const struct IrCode code_na087Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na087Times,  
	{
		0xA0,
		0x02,
		0x40,
		0x04,
		0x90,
		0x09,
		0x20,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2A,
		0x38,
		0x00,
	}
};

/* Duplicate timing table, same as na009 !
const uint16_t code_na088Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
*/
const struct IrCode code_na088Code PROGMEM = {
	freq_to_timerval(38610),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x80,
		0x00,
		0x40,
		0x04,
		0x12,
		0x08,
		0x04,
		0x92,
		0x40,
		0x00,
		0x00,
		0x09,
		0x2A,
		0xBA,
		0x00,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_na089Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_na089Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x20,
		0x80,
		0x40,
		0x04,
		0x12,
		0x09,
		0x2B,
		0x3D,
		0x00,
	}
};
const uint16_t code_na090Times[] PROGMEM = {
	88, 90,
	88, 91,
	88, 181,
	88, 8976,
	177, 91,
	177, 181,
};
const struct IrCode code_na090Code PROGMEM = {
	freq_to_timerval(35714),
	20,		// # of pairs
	3,		// # of bits per index
	code_na090Times,  
	{
		0x10,
		0xAB,
		0x11,
		0x8C,
		0xC2,
		0xAC,
		0x46,
		0x00,
	}
};
const uint16_t code_na091Times[] PROGMEM = {
	48, 100,
	48, 200,
	48, 1050,
	400, 400,
};
const struct IrCode code_na091Code PROGMEM = {
	freq_to_timerval(58824),
	52,		// # of pairs
	2,		// # of bits per index
	code_na091Times,  
	{
		0xD5,
		0x41,
		0x51,
		0x40,
		0x14,
		0x04,
		0x2D,
		0x54,
		0x15,
		0x14,
		0x01,
		0x40,
		0x41,
	}
};
const uint16_t code_na092Times[] PROGMEM = {
	54, 56,
	54, 170,
	54, 4927,
	451, 447,
};
const struct IrCode code_na092Code PROGMEM = {
	freq_to_timerval(38462),
	68,		// # of pairs
	2,		// # of bits per index
	code_na092Times,  
	{
		0xD1,
		0x00,
		0x11,
		0x00,
		0x04,
		0x00,
		0x11,
		0x55,
		0x6D,
		0x10,
		0x01,
		0x10,
		0x00,
		0x40,
		0x01,
		0x15,
		0x55,
	}
};
const uint16_t code_na093Times[] PROGMEM = {
	55, 57,
	55, 167,
	55, 4400,
	895, 448,
	897, 447,
};
const struct IrCode code_na093Code PROGMEM = {
	freq_to_timerval(38462),
	68,		// # of pairs
	3,		// # of bits per index
	code_na093Times,  
	{
		0x60,
		0x90,
		0x00,
		0x20,
		0x80,
		0x00,
		0x04,
		0x02,
		0x01,
		0x00,
		0x90,
		0x48,
		0x2A,
		0x02,
		0x40,
		0x00,
		0x82,
		0x00,
		0x00,
		0x10,
		0x08,
		0x04,
		0x02,
		0x41,
		0x20,
		0x80,
	}
};

/* Duplicate timing table, same as na005 !
const uint16_t code_na094Times[] PROGMEM = {
	88, 90,
	88, 91,
	88, 181,
	88, 8976,
	177, 91,
};
*/
const struct IrCode code_na094Code PROGMEM = {
	freq_to_timerval(35714),
	22,		// # of pairs
	3,		// # of bits per index
	code_na005Times,  
	{
		0x10,
		0x94,
		0x62,
		0x31,
		0x98,
		0x4A,
		0x31,
		0x18,
		0x00,
	}
};
const uint16_t code_na095Times[] PROGMEM = {
	56, 58,
	56, 174,
	56, 4549,
	56, 9448,
	440, 446,
};
const struct IrCode code_na095Code PROGMEM = {
	freq_to_timerval(38462),
	40,		// # of pairs
	3,		// # of bits per index
	code_na095Times,  
	{
		0x80,
		0x02,
		0x00,
		0x00,
		0x02,
		0x00,
		0x04,
		0x82,
		0x00,
		0x00,
		0x10,
		0x49,
		0x2A,
		0x17,
		0x08,
	}
};

/* Duplicate timing table, same as na009 !
const uint16_t code_na096Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
*/
const struct IrCode code_na096Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x80,
		0x80,
		0x40,
		0x04,
		0x92,
		0x49,
		0x20,
		0x92,
		0x00,
		0x04,
		0x00,
		0x49,
		0x2A,
		0xBA,
		0x00,
	}
};

/* Duplicate timing table, same as na009 !
const uint16_t code_na097Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
*/
const struct IrCode code_na097Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x84,
		0x80,
		0x00,
		0x24,
		0x10,
		0x41,
		0x00,
		0x80,
		0x01,
		0x24,
		0x12,
		0x48,
		0x0A,
		0xBA,
		0x40,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_na098Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_na098Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x24,
		0x00,
		0x41,
		0x00,
		0x92,
		0x08,
		0x2B,
		0x3D,
		0x00,
	}
};

/* Duplicate timing table, same as na009 !
const uint16_t code_na099Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
*/
const struct IrCode code_na099Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x80,
		0x00,
		0x00,
		0x04,
		0x12,
		0x48,
		0x24,
		0x00,
		0x00,
		0x00,
		0x92,
		0x49,
		0x2A,
		0xBA,
		0x00,
	}
};
const uint16_t code_na100Times[] PROGMEM = {
	43, 171,
	45, 60,
	45, 170,
	54, 2301,
};
const struct IrCode code_na100Code PROGMEM = {
	freq_to_timerval(35842),
	34,		// # of pairs
	2,		// # of bits per index
	code_na100Times,  
	{
		0x29,
		0x59,
		0x65,
		0x55,
		0xEA,
		0x56,
		0x59,
		0x55,
		0x70,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_na101Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_na101Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x00,
		0x09,
		0x04,
		0x92,
		0x40,
		0x20,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x2B,
		0x3D,
		0x00,
	}
};
const uint16_t code_na102Times[] PROGMEM = {
	86, 87,
	86, 258,
	86, 3338,
	346, 348,
	348, 347,
};
const struct IrCode code_na102Code PROGMEM = {
	freq_to_timerval(40000),
	52,		// # of pairs
	3,		// # of bits per index
	code_na102Times,  
	{
		0x64,
		0x02,
		0x08,
		0x00,
		0x02,
		0x09,
		0x04,
		0x12,
		0x49,
		0x0A,
		0x10,
		0x08,
		0x20,
		0x00,
		0x08,
		0x24,
		0x10,
		0x49,
		0x24,
		0x10,
	}
};

/* Duplicate timing table, same as na045 !
const uint16_t code_na103Times[] PROGMEM = {
	58, 53,
	58, 167,
	58, 4494,
	58, 9679,
	455, 449,
	456, 449,
};
*/
const struct IrCode code_na103Code PROGMEM = {
	freq_to_timerval(38462),
	40,		// # of pairs
	3,		// # of bits per index
	code_na045Times,  
	{
		0x80,
		0x02,
		0x00,
		0x00,
		0x02,
		0x00,
		0x04,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x2A,
		0x97,
		0x48,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na104Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na104Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA4,
		0x00,
		0x49,
		0x00,
		0x92,
		0x00,
		0x20,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2A,
		0x38,
		0x40,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na105Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na105Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA4,
		0x80,
		0x00,
		0x20,
		0x12,
		0x49,
		0x04,
		0x92,
		0x49,
		0x20,
		0x00,
		0x00,
		0x0A,
		0x38,
		0x40,
	}
};

/* Duplicate timing table, same as na044 !
const uint16_t code_na106Times[] PROGMEM = {
	51, 51,
	51, 160,
	51, 4096,
	51, 9513,
	431, 436,
	883, 219,
};
*/
const struct IrCode code_na106Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na044Times,  
	{
		0x80,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x24,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x2A,
		0xBA,
		0x00,
	}
};

/* Duplicate timing table, same as na045 !
const uint16_t code_na107Times[] PROGMEM = {
	58, 53,
	58, 167,
	58, 4494,
	58, 9679,
	455, 449,
	456, 449,
};
*/
const struct IrCode code_na107Code PROGMEM = {
	freq_to_timerval(38462),
	40,		// # of pairs
	3,		// # of bits per index
	code_na045Times,  
	{
		0x80,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x04,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x2A,
		0x97,
		0x48,
	}
};

/* Duplicate timing table, same as na045 !
const uint16_t code_na108Times[] PROGMEM = {
	58, 53,
	58, 167,
	58, 4494,
	58, 9679,
	455, 449,
	456, 449,
};
*/
const struct IrCode code_na108Code PROGMEM = {
	freq_to_timerval(38462),
	40,		// # of pairs
	3,		// # of bits per index
	code_na045Times,  
	{
		0x80,
		0x90,
		0x40,
		0x00,
		0x90,
		0x40,
		0x04,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x2A,
		0x97,
		0x48,
	}
};
const uint16_t code_na109Times[] PROGMEM = {
	58, 61,
	58, 211,
	58, 9582,
	73, 4164,
	883, 211,
	1050, 494,
};
const struct IrCode code_na109Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na109Times,  
	{
		0xA0,
		0x00,
		0x08,
		0x24,
		0x92,
		0x41,
		0x00,
		0x82,
		0x00,
		0x04,
		0x10,
		0x49,
		0x2E,
		0x28,
		0x00,
	}
};


/* Duplicate timing table, same as na017 !
const uint16_t code_na110Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na110Code PROGMEM = {
	freq_to_timerval(40161),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA4,
		0x80,
		0x00,
		0x20,
		0x12,
		0x49,
		0x00,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2A,
		0x38,
		0x40,
	}
};

/* Duplicate timing table, same as na044 !
const uint16_t code_na111Times[] PROGMEM = {
	51, 51,
	51, 160,
	51, 4096,
	51, 9513,
	431, 436,
	883, 219,
};
*/
const struct IrCode code_na111Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na044Times,  
	{
		0x84,
		0x92,
		0x49,
		0x20,
		0x00,
		0x00,
		0x04,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x2A,
		0xBA,
		0x40,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_na112Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_na112Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA4,
		0x00,
		0x00,
		0x00,
		0x92,
		0x49,
		0x24,
		0x00,
		0x00,
		0x00,
		0x92,
		0x49,
		0x2B,
		0x3D,
		0x00,
	}
};
const uint16_t code_na113Times[] PROGMEM = {
	56, 54,
	56, 166,
	56, 3945,
	896, 442,
	896, 443,
};
const struct IrCode code_na113Code PROGMEM = {
	freq_to_timerval(40000),
	68,		// # of pairs
	3,		// # of bits per index
	code_na113Times,  
	{
		0x60,
		0x00,
		0x00,
		0x20,
		0x02,
		0x09,
		0x04,
		0x02,
		0x01,
		0x00,
		0x90,
		0x48,
		0x2A,
		0x00,
		0x00,
		0x00,
		0x80,
		0x08,
		0x24,
		0x10,
		0x08,
		0x04,
		0x02,
		0x41,
		0x20,
		0x80,
	}
};
const uint16_t code_na114Times[] PROGMEM = {
	44, 50,
	44, 147,
	44, 447,
	44, 2236,
	791, 398,
	793, 397,
};
const struct IrCode code_na114Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na114Times,  
	{
		0x84,
		0x10,
		0x40,
		0x08,
		0x82,
		0x08,
		0x01,
		0xD2,
		0x08,
		0x20,
		0x04,
		0x41,
		0x04,
		0x00,
		0x40,
	}
};

#ifndef EU_CODES

const uint16_t code_na115Times[] PROGMEM = {
	81, 86,
	81, 296,
	81, 3349,
	328, 331,
	329, 331,
};
const struct IrCode code_na115Code PROGMEM = {
	freq_to_timerval(40000),
	52,		// # of pairs
	3,		// # of bits per index
	code_na115Times,  
	{
		0x60,
		0x82,
		0x00,
		0x20,
		0x80,
		0x41,
		0x04,
		0x90,
		0x41,
		0x2A,
		0x02,
		0x08,
		0x00,
		0x82,
		0x01,
		0x04,
		0x12,
		0x41,
		0x04,
		0x80,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na116Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na116Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA0,
		0x00,
		0x40,
		0x04,
		0x92,
		0x09,
		0x24,
		0x00,
		0x40,
		0x00,
		0x92,
		0x09,
		0x2A,
		0x38,
		0x00,
	}
};
const uint16_t code_na117Times[] PROGMEM = {
	49, 54,
	49, 158,
	49, 420,
	49, 2446,
	819, 420,
	821, 419,
};
const struct IrCode code_na117Code PROGMEM = {
	freq_to_timerval(41667),
	38,		// # of pairs
	3,		// # of bits per index
	code_na117Times,  
	{
		0x84,
		0x00,
		0x00,
		0x08,
		0x12,
		0x40,
		0x01,
		0xD2,
		0x00,
		0x00,
		0x04,
		0x09,
		0x20,
		0x00,
		0x40,
	}
};

/* Duplicate timing table, same as na044 !
const uint16_t code_na118Times[] PROGMEM = {
	51, 51,
	51, 160,
	51, 4096,
	51, 9513,
	431, 436,
	883, 219,
};
*/
const struct IrCode code_na118Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na044Times,  
	{
		0x84,
		0x90,
		0x49,
		0x20,
		0x02,
		0x00,
		0x04,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x2A,
		0xBA,
		0x40,
	}
};
const uint16_t code_na119Times[] PROGMEM = {
	55, 63,
	55, 171,
	55, 4094,
	55, 9508,
	881, 219,
	881, 438,
};
const struct IrCode code_na119Code PROGMEM = {
	freq_to_timerval(55556),
	38,		// # of pairs
	3,		// # of bits per index
	code_na119Times,  
	{
		0xA0,
		0x10,
		0x00,
		0x04,
		0x82,
		0x49,
		0x20,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2A,
		0x38,
		0x00,
	}
};


/* Duplicate timing table, same as na017 !
const uint16_t code_na120Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na120Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA0,
		0x12,
		0x00,
		0x04,
		0x80,
		0x49,
		0x24,
		0x92,
		0x40,
		0x00,
		0x00,
		0x09,
		0x2A,
		0x38,
		0x00,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na121Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na121Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA0,
		0x00,
		0x40,
		0x04,
		0x92,
		0x09,
		0x20,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2A,
		0x38,
		0x00,
	}
};
const uint16_t code_na122Times[] PROGMEM = {
	80, 95,
	80, 249,
	80, 3867,
	81, 0,
	329, 322,
};
const struct IrCode code_na122Code PROGMEM = {
	freq_to_timerval(52632),
	48,		// # of pairs
	3,		// # of bits per index
	code_na122Times,  
	{
		0x80,
		0x00,
		0x00,
		0x00,
		0x12,
		0x49,
		0x24,
		0x90,
		0x0A,
		0x80,
		0x00,
		0x00,
		0x00,
		0x12,
		0x49,
		0x24,
		0x90,
		0x0B,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na123Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na123Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA0,
		0x02,
		0x48,
		0x04,
		0x90,
		0x01,
		0x20,
		0x12,
		0x40,
		0x04,
		0x80,
		0x09,
		0x2A,
		0x38,
		0x00,
	}
};
const uint16_t code_na124Times[] PROGMEM = {
	54, 56,
	54, 151,
	54, 4092,
	54, 8677,
	900, 421,
	901, 226,
};
const struct IrCode code_na124Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na124Times,  
	{
		0x80,
		0x00,
		0x48,
		0x04,
		0x92,
		0x01,
		0x20,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x2A,
		0xBA,
		0x00,
	}
};

/* Duplicate timing table, same as na119 !
const uint16_t code_na125Times[] PROGMEM = {
	55, 63,
	55, 171,
	55, 4094,
	55, 9508,
	881, 219,
	881, 438,
};
*/
const struct IrCode code_na125Code PROGMEM = {
	freq_to_timerval(55556),
	38,		// # of pairs
	3,		// # of bits per index
	code_na119Times,  
	{
		0xA0,
		0x02,
		0x48,
		0x04,
		0x90,
		0x01,
		0x20,
		0x80,
		0x40,
		0x04,
		0x12,
		0x09,
		0x2A,
		0x38,
		0x00,
	}
};


/* Duplicate timing table, same as na017 !
const uint16_t code_na126Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na126Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA4,
		0x10,
		0x00,
		0x20,
		0x82,
		0x49,
		0x00,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2A,
		0x38,
		0x40,
	}
};
const uint16_t code_na127Times[] PROGMEM = {
	114, 100,
	115, 100,
	115, 200,
	115, 2706,
};
const struct IrCode code_na127Code PROGMEM = {
	freq_to_timerval(25641),
	8,		// # of pairs
	2,		// # of bits per index
	code_na127Times,  
	{
		0x1B,
		0x59,
	}
};

/* Duplicate timing table, same as na102 !
const uint16_t code_na128Times[] PROGMEM = {
	86, 87,
	86, 258,
	86, 3338,
	346, 348,
	348, 347,
};
*/
const struct IrCode code_na128Code PROGMEM = {
	freq_to_timerval(40000),
	52,		// # of pairs
	3,		// # of bits per index
	code_na102Times,  
	{
		0x60,
		0x02,
		0x08,
		0x00,
		0x02,
		0x49,
		0x04,
		0x12,
		0x49,
		0x0A,
		0x00,
		0x08,
		0x20,
		0x00,
		0x09,
		0x24,
		0x10,
		0x49,
		0x24,
		0x00,
	}
};

/* Duplicate timing table, same as na017 !
const uint16_t code_na129Times[] PROGMEM = {
	56, 57,
	56, 175,
	56, 4150,
	56, 9499,
	898, 227,
	898, 449,
};
*/
const struct IrCode code_na129Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na017Times,  
	{
		0xA4,
		0x92,
		0x49,
		0x20,
		0x00,
		0x00,
		0x00,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2A,
		0x38,
		0x40,
	}
};
const uint16_t code_na130Times[] PROGMEM = {
	88, 90,
	88, 258,
	88, 2247,
	358, 349,
	358, 350,
};
const struct IrCode code_na130Code PROGMEM = {
	freq_to_timerval(37037),
	52,		// # of pairs
	3,		// # of bits per index
	code_na130Times,  
	{
		0x64,
		0x00,
		0x08,
		0x24,
		0x82,
		0x09,
		0x24,
		0x10,
		0x01,
		0x0A,
		0x10,
		0x00,
		0x20,
		0x92,
		0x08,
		0x24,
		0x90,
		0x40,
		0x04,
		0x10,
	}
};

/* Duplicate timing table, same as na042 !
const uint16_t code_na131Times[] PROGMEM = {
	54, 65,
	54, 170,
	54, 4099,
	54, 8668,
	899, 226,
	899, 421,
};
*/
const struct IrCode code_na131Code PROGMEM = {
	freq_to_timerval(40000),
	38,		// # of pairs
	3,		// # of bits per index
	code_na042Times,  
	{
		0xA0,
		0x10,
		0x40,
		0x04,
		0x82,
		0x09,
		0x24,
		0x82,
		0x40,
		0x00,
		0x10,
		0x09,
		0x2A,
		0x38,
		0x00,
	}
};
const uint16_t code_na132Times[] PROGMEM = {
	28, 106,
	28, 238,
	28, 370,
	28, 1173,
};
const struct IrCode code_na132Code PROGMEM = {
	freq_to_timerval(83333),
	32,		// # of pairs
	2,		// # of bits per index
	code_na132Times,  
	{
		0x22,
		0x20,
		0x00,
		0x17,
		0x22,
		0x20,
		0x00,
		0x14,
	}
};
const uint16_t code_na133Times[] PROGMEM = {
	13, 741,
	15, 489,
	15, 740,
	17, 4641,
	18, 0,
};
const struct IrCode code_na133Code PROGMEM = {
	freq_to_timerval(41667),
	24,		// # of pairs
	3,		// # of bits per index
	code_na133Times,  
	{
		0x09,
		0x24,
		0x49,
		0x48,
		0xB4,
		0x92,
		0x44,
		0x94,
		0x8C,
	}
};

/* Duplicate timing table, same as na113 !
const uint16_t code_na134Times[] PROGMEM = {
	56, 54,
	56, 166,
	56, 3945,
	896, 442,
	896, 443,
};
*/
const struct IrCode code_na134Code PROGMEM = {
	freq_to_timerval(40000),
	68,		// # of pairs
	3,		// # of bits per index
	code_na113Times,  
	{
		0x60,
		0x90,
		0x00,
		0x24,
		0x10,
		0x00,
		0x04,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x2A,
		0x02,
		0x40,
		0x00,
		0x90,
		0x40,
		0x00,
		0x12,
		0x48,
		0x00,
		0x00,
		0x01,
		0x24,
		0x80,
	}
};
const uint16_t code_na135Times[] PROGMEM = {
	53, 59,
	53, 171,
	53, 2301,
	892, 450,
	895, 448,
};
const struct IrCode code_na135Code PROGMEM = {
	freq_to_timerval(38462),
	88,		// # of pairs
	3,		// # of bits per index
	code_na135Times,  
	{
		0x60,
		0x12,
		0x49,
		0x00,
		0x00,
		0x09,
		0x00,
		0x00,
		0x49,
		0x24,
		0x80,
		0x00,
		0x00,
		0x12,
		0x49,
		0x24,
		0xA8,
		0x01,
		0x24,
		0x90,
		0x00,
		0x00,
		0x90,
		0x00,
		0x04,
		0x92,
		0x48,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x48,
	}
};
const uint16_t code_na136Times[] PROGMEM = {
	53, 59,
	53, 171,
	53, 2301,
	55, 0,
	892, 450,
	895, 448,
};
const struct IrCode code_na136Code PROGMEM = {
	freq_to_timerval(38610),
	88,		// # of pairs
	3,		// # of bits per index
	code_na136Times,  
	{
		0x84,
		0x82,
		0x49,
		0x00,
		0x00,
		0x00,
		0x20,
		0x00,
		0x49,
		0x24,
		0x80,
		0x00,
		0x00,
		0x12,
		0x49,
		0x24,
		0xAA,
		0x48,
		0x24,
		0x90,
		0x00,
		0x00,
		0x02,
		0x00,
		0x04,
		0x92,
		0x48,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x4B,
	}
};
#endif
#endif


#ifdef EU_CODES


const uint16_t code_eu000Times[] PROGMEM = {
	43, 47,
	43, 91,
	43, 8324,
	88, 47,
	133, 133,
	264, 90,
	264, 91,
};
const struct IrCode code_eu000Code PROGMEM = {
	freq_to_timerval(35714),
	40,		// # of pairs
	3,		// # of bits per index
	code_eu000Times,  
	{
		0xA4,
		0x08,
		0x00,
		0x00,
		0x00,
		0x00,
		0x64,
		0x2C,
		0x40,
		0x80,
		0x00,
		0x00,
		0x00,
		0x06,
		0x41,
	}
};
const uint16_t code_eu001Times[] PROGMEM = {
	47, 265,
	51, 54,
	51, 108,
	51, 263,
	51, 2053,
	51, 11647,
	100, 109,
};
const struct IrCode code_eu001Code PROGMEM = {
	freq_to_timerval(30303),
	31,		// # of pairs
	3,		// # of bits per index
	code_eu001Times,  
	{
		0x04,
		0x92,
		0x49,
		0x26,
		0x35,
		0x89,
		0x24,
		0x9A,
		0xD6,
		0x24,
		0x92,
		0x48,
	}
};
const uint16_t code_eu002Times[] PROGMEM = {
	43, 206,
	46, 204,
	46, 456,
	46, 3488,
};
const struct IrCode code_eu002Code PROGMEM = {
	freq_to_timerval(33333),
	26,		// # of pairs
	2,		// # of bits per index
	code_eu002Times,  
	{
		0x1A,
		0x56,
		0xA6,
		0xD6,
		0x95,
		0xA9,
		0x90,
	}
};

/* Duplicate timing table, same as na000 !
const uint16_t code_eu003Times[] PROGMEM = {
	58, 60,
	58, 2687,
	118, 60,
	237, 60,
	238, 60,
};
*/
/*
const struct IrCode code_eu003Code PROGMEM = {
	freq_to_timerval(38462),
	26,		// # of pairs
	3,		// # of bits per index
	code_na000Times,  
	{
		0x68,
		0x20,
		0x80,
		0x40,
		0x03,
		0x10,
		0x41,
		0x00,
		0x80,
		0x00,
	}
};// Duplicate IR Code - same as na000
*/

const uint16_t code_eu004Times[] PROGMEM = {
	44, 45,
	44, 131,
	44, 7462,
	346, 176,
	346, 178,
};
const struct IrCode code_eu004Code PROGMEM = {
	freq_to_timerval(37037),
	100,		// # of pairs
	3,		// # of bits per index
	code_eu004Times,  
	{
		0x60,
		0x80,
		0x00,
		0x00,
		0x00,
		0x08,
		0x00,
		0x00,
		0x00,
		0x20,
		0x00,
		0x00,
		0x04,
		0x12,
		0x48,
		0x04,
		0x12,
		0x48,
		0x2A,
		0x02,
		0x00,
		0x00,
		0x00,
		0x00,
		0x20,
		0x00,
		0x00,
		0x00,
		0x80,
		0x00,
		0x00,
		0x10,
		0x49,
		0x20,
		0x10,
		0x49,
		0x20,
		0x80,
	}
};// Duplicate IR Code? Similar to NA002

const uint16_t code_eu005Times[] PROGMEM = {
	24, 190,
	25, 80,
	25, 190,
	25, 4199,
	25, 4799,
};
const struct IrCode code_eu005Code PROGMEM = {
	freq_to_timerval(38610),
	64,		// # of pairs
	3,		// # of bits per index
	code_eu005Times,  
	{
		0x04,
		0x92,
		0x52,
		0x28,
		0x92,
		0x8C,
		0x44,
		0x92,
		0x89,
		0x45,
		0x24,
		0x53,
		0x44,
		0x92,
		0x52,
		0x28,
		0x92,
		0x8C,
		0x44,
		0x92,
		0x89,
		0x45,
		0x24,
		0x51,
	}
};
const uint16_t code_eu006Times[] PROGMEM = {
	53, 63,
	53, 172,
	53, 4472,
	54, 0,
	455, 468,
};
const struct IrCode code_eu006Code PROGMEM = {
	freq_to_timerval(38462),
	68,		// # of pairs
	3,		// # of bits per index
	code_eu006Times,  
	{
		0x84,
		0x90,
		0x00,
		0x04,
		0x90,
		0x00,
		0x00,
		0x80,
		0x00,
		0x04,
		0x12,
		0x49,
		0x2A,
		0x12,
		0x40,
		0x00,
		0x12,
		0x40,
		0x00,
		0x02,
		0x00,
		0x00,
		0x10,
		0x49,
		0x24,
		0xB0,
	}
};
const uint16_t code_eu007Times[] PROGMEM = {
	50, 54,
	50, 159,
	50, 2307,
	838, 422,
};
const struct IrCode code_eu007Code PROGMEM = {
	freq_to_timerval(38462),
	52,		// # of pairs
	2,		// # of bits per index
	code_eu007Times,  
	{
		0xD4,
		0x00,
		0x15,
		0x10,
		0x25,
		0x00,
		0x05,
		0x44,
		0x09,
		0x40,
		0x01,
		0x51,
		0x01,
	}
};// Duplicate IR Code? - Similar to NA010


/* Duplicate timing table, same as na004 !
const uint16_t code_eu008Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_eu008Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x00,
		0x41,
		0x04,
		0x92,
		0x08,
		0x24,
		0x90,
		0x40,
		0x00,
		0x02,
		0x09,
		0x2B,
		0x3D,
		0x00,
	}
};


/* Duplicate timing table, same as na005 !
const uint16_t code_eu009Times[] PROGMEM = {
	88, 90,
	88, 91,
	88, 181,
	88, 8976,
	177, 91,
};
*/
/*
const struct IrCode code_eu009Code PROGMEM = {
	freq_to_timerval(35714),
	24,		// # of pairs
	3,		// # of bits per index
	code_na005Times,  
	{
		0x10,
		0x92,
		0x49,
		0x46,
		0x33,
		0x09,
		0x24,
		0x94,
		0x60,
	}
};// Duplicate IR Code - same as na005
*/


/* Duplicate timing table, same as na004 !
const uint16_t code_eu010Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
/*
const struct IrCode code_eu010Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x00,
		0x01,
		0x04,
		0x92,
		0x48,
		0x20,
		0x80,
		0x40,
		0x04,
		0x12,
		0x09,
		0x2B,
		0x3D,
		0x00,
	}
};// Duplicate IR Code - same as NA004
*/

/* Duplicate timing table, same as na009 !
const uint16_t code_eu011Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
*/
const struct IrCode code_eu011Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x84,
		0x00,
		0x48,
		0x04,
		0x02,
		0x01,
		0x04,
		0x80,
		0x09,
		0x00,
		0x12,
		0x40,
		0x2A,
		0xBA,
		0x40,
	}
};
const uint16_t code_eu012Times[] PROGMEM = {
	46, 206,
	46, 459,
	46, 3447,
};
const struct IrCode code_eu012Code PROGMEM = {
	freq_to_timerval(33445),
	26,		// # of pairs
	2,		// # of bits per index
	code_eu012Times,  
	{
		0x05,
		0x01,
		0x51,
		0x81,
		0x40,
		0x54,
		0x40,
	}
};
const uint16_t code_eu013Times[] PROGMEM = {
	53, 59,
	53, 171,
	53, 2302,
	895, 449,
};
const struct IrCode code_eu013Code PROGMEM = {
	freq_to_timerval(38462),
	88,		// # of pairs
	2,		// # of bits per index
	code_eu013Times,  
	{
		0xD4,
		0x55,
		0x00,
		0x00,
		0x40,
		0x15,
		0x54,
		0x00,
		0x01,
		0x55,
		0x56,
		0xD4,
		0x55,
		0x00,
		0x00,
		0x40,
		0x15,
		0x54,
		0x00,
		0x01,
		0x55,
		0x55,
	}
};

/* Duplicate timing table, same as na021 !
const uint16_t code_eu014Times[] PROGMEM = {
	48, 52,
	48, 160,
	48, 400,
	48, 2335,
	799, 400,
};
*/
/*
const struct IrCode code_eu014Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na021Times,  
	{
		0x80,
		0x10,
		0x40,
		0x08,
		0x82,
		0x08,
		0x01,
		0xC0,
		0x08,
		0x20,
		0x04,
		0x41,
		0x04,
		0x00,
		0x00,
	}
};// Duplicate IR Code - same as NA021
*/

const uint16_t code_eu015Times[] PROGMEM = {
	53, 54,
	53, 156,
	53, 2542,
	851, 425,
	853, 424,
};
const struct IrCode code_eu015Code PROGMEM = {
	freq_to_timerval(38462),
	136,		// # of pairs
	3,		// # of bits per index
	code_eu015Times,  
	{
		0x60,
		0x82,
		0x08,
		0x24,
		0x10,
		0x41,
		0x00,
		0x12,
		0x40,
		0x04,
		0x80,
		0x09,
		0x2A,
		0x02,
		0x08,
		0x20,
		0x90,
		0x41,
		0x04,
		0x00,
		0x49,
		0x00,
		0x12,
		0x00,
		0x24,
		0xA8,
		0x08,
		0x20,
		0x82,
		0x41,
		0x04,
		0x10,
		0x01,
		0x24,
		0x00,
		0x48,
		0x00,
		0x92,
		0xA0,
		0x20,
		0x82,
		0x09,
		0x04,
		0x10,
		0x40,
		0x04,
		0x90,
		0x01,
		0x20,
		0x02,
		0x48,
	}
};// Duplicate IR Code? - Similar to NA018

const uint16_t code_eu016Times[] PROGMEM = {
	28, 92,
	28, 213,
	28, 214,
	28, 2771,
};
const struct IrCode code_eu016Code PROGMEM = {
	freq_to_timerval(33333),
	34,		// # of pairs
	2,		// # of bits per index
	code_eu016Times,  
	{
		0x68,
		0x08,
		0x20,
		0x00,
		0xEA,
		0x02,
		0x08,
		0x00,
		0x10,
	}
};
const uint16_t code_eu017Times[] PROGMEM = {
	15, 844,
	16, 557,
	16, 844,
	16, 5224,
};
const struct IrCode code_eu017Code PROGMEM = {
	freq_to_timerval(33333),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu017Times,  
	{
		0x1A,
		0x9A,
		0x9B,
		0x9A,
		0x9A,
		0x99,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_eu018Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_eu018Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x02,
		0x48,
		0x04,
		0x90,
		0x01,
		0x20,
		0x12,
		0x40,
		0x04,
		0x80,
		0x09,
		0x2B,
		0x3D,
		0x00,
	}
};
const uint16_t code_eu019Times[] PROGMEM = {
	50, 54,
	50, 158,
	50, 418,
	50, 2443,
	843, 418,
};
const struct IrCode code_eu019Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_eu019Times,  
	{
		0x80,
		0x80,
		0x00,
		0x08,
		0x12,
		0x40,
		0x01,
		0xC0,
		0x40,
		0x00,
		0x04,
		0x09,
		0x20,
		0x00,
		0x00,
	}
};
const uint16_t code_eu020Times[] PROGMEM = {
	48, 301,
	48, 651,
	48, 1001,
	48, 3001,
};
const struct IrCode code_eu020Code PROGMEM = {
	freq_to_timerval(35714),
	34,		// # of pairs
	2,		// # of bits per index
	code_eu020Times,  
	{
		0x22,
		0x20,
		0x00,
		0x01,
		0xC8,
		0x88,
		0x00,
		0x00,
		0x40,
	}
};

/* Duplicate timing table, same as na009 !
const uint16_t code_eu021Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
*/
const struct IrCode code_eu021Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x84,
		0x80,
		0x00,
		0x20,
		0x82,
		0x49,
		0x00,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2A,
		0xBA,
		0x40,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_eu022Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_eu022Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA4,
		0x80,
		0x41,
		0x00,
		0x12,
		0x08,
		0x24,
		0x90,
		0x40,
		0x00,
		0x02,
		0x09,
		0x2B,
		0x3D,
		0x00,
	}
};

/* Duplicate timing table, same as na022 !
const uint16_t code_eu023Times[] PROGMEM = {
	53, 60,
	53, 175,
	53, 4463,
	53, 9453,
	892, 450,
	895, 225,
};
*/
/*
const struct IrCode code_eu023Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na022Times,  
	{
		0x80,
		0x02,
		0x40,
		0x00,
		0x02,
		0x40,
		0x00,
		0x00,
		0x01,
		0x24,
		0x92,
		0x48,
		0x0A,
		0xBA,
		0x00,
	}
};// Duplicate IR Code - Same as NA022
*/


/* Duplicate timing table, same as na004 !
const uint16_t code_eu024Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_eu024Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x02,
		0x48,
		0x04,
		0x90,
		0x01,
		0x20,
		0x00,
		0x40,
		0x04,
		0x92,
		0x09,
		0x2B,
		0x3D,
		0x00,
	}
};
const uint16_t code_eu025Times[] PROGMEM = {
	49, 52,
	49, 102,
	49, 250,
	49, 252,
	49, 2377,
	49, 12009,
	100, 52,
	100, 102,
};
const struct IrCode code_eu025Code PROGMEM = {
	freq_to_timerval(31250),
	21,		// # of pairs
	3,		// # of bits per index
	code_eu025Times,  
	{
		0x47,
		0x00,
		0x23,
		0x3C,
		0x01,
		0x59,
		0xE0,
		0x04,
	}
};
const uint16_t code_eu026Times[] PROGMEM = {
	14, 491,
	14, 743,
	14, 4926,
};
const struct IrCode code_eu026Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu026Times,  
	{
		0x55,
		0x40,
		0x42,
		0x55,
		0x40,
		0x41,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_eu027Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_eu027Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x82,
		0x08,
		0x24,
		0x10,
		0x41,
		0x04,
		0x10,
		0x01,
		0x20,
		0x82,
		0x48,
		0x0B,
		0x3D,
		0x00,
	}
};
const uint16_t code_eu028Times[] PROGMEM = {
	47, 267,
	50, 55,
	50, 110,
	50, 265,
	50, 2055,
	50, 12117,
	100, 57,
};
const struct IrCode code_eu028Code PROGMEM = {
	freq_to_timerval(30303),
	31,		// # of pairs
	3,		// # of bits per index
	code_eu028Times,  
	{
		0x04,
		0x92,
		0x49,
		0x26,
		0x34,
		0x72,
		0x24,
		0x9A,
		0xD1,
		0xC8,
		0x92,
		0x48,
	}
};
const uint16_t code_eu029Times[] PROGMEM = {
	50, 50,
	50, 99,
	50, 251,
	50, 252,
	50, 1445,
	50, 11014,
	102, 49,
	102, 98,
};
const struct IrCode code_eu029Code PROGMEM = {
	freq_to_timerval(34483),
	46,		// # of pairs
	3,		// # of bits per index
	code_eu029Times,  
	{
		0x47,
		0x00,
		0x00,
		0x00,
		0x00,
		0x04,
		0x64,
		0x62,
		0x00,
		0xE0,
		0x00,
		0x2B,
		0x23,
		0x10,
		0x07,
		0x00,
		0x00,
		0x80,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_eu030Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_eu030Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x10,
		0x00,
		0x04,
		0x82,
		0x49,
		0x20,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2B,
		0x3D,
		0x00,
	}
};// Duplicate IR Code? - Smilar to NA020

const uint16_t code_eu031Times[] PROGMEM = {
	53, 53,
	53, 160,
	53, 1697,
	838, 422,
};
const struct IrCode code_eu031Code PROGMEM = {
	freq_to_timerval(38462),
	52,		// # of pairs
	2,		// # of bits per index
	code_eu031Times,  
	{
		0xD5,
		0x50,
		0x15,
		0x11,
		0x65,
		0x54,
		0x05,
		0x44,
		0x59,
		0x55,
		0x01,
		0x51,
		0x15,
	}
};
const uint16_t code_eu032Times[] PROGMEM = {
	49, 205,
	49, 206,
	49, 456,
	49, 3690,
};
const struct IrCode code_eu032Code PROGMEM = {
	freq_to_timerval(33333),
	26,		// # of pairs
	2,		// # of bits per index
	code_eu032Times,  
	{
		0x1A,
		0x56,
		0xA5,
		0xD6,
		0x95,
		0xA9,
		0x40,
	}
};
const uint16_t code_eu033Times[] PROGMEM = {
	48, 150,
	50, 149,
	50, 347,
	50, 2936,
};
const struct IrCode code_eu033Code PROGMEM = {
	freq_to_timerval(38462),
	14,		// # of pairs
	2,		// # of bits per index
	code_eu033Times,  
	{
		0x2A,
		0x5D,
		0xA9,
		0x60,
	}
};


/* Duplicate timing table, same as na004 !
const uint16_t code_eu034Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_eu034Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x02,
		0x40,
		0x04,
		0x90,
		0x09,
		0x20,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2B,
		0x3D,
		0x00,
	}
};

/* Duplicate timing table, same as na005 !
const uint16_t code_eu035Times[] PROGMEM = {
	88, 90,
	88, 91,
	88, 181,
	88, 8976,
	177, 91,
};
*/
/*
const struct IrCode code_eu035Code PROGMEM = {
	freq_to_timerval(35714),
	24,		// # of pairs
	3,		// # of bits per index
	code_na005Times,  
	{
		0x10,
		0x92,
		0x49,
		0x46,
		0x33,
		0x09,
		0x24,
		0x94,
		0x60,
	}
};// Duplicate IR Code - same as eu009!
*/

/* Duplicate timing table, same as na004 !
const uint16_t code_eu036Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_eu036Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA4,
		0x00,
		0x49,
		0x00,
		0x92,
		0x00,
		0x20,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2B,
		0x3D,
		0x00,
	}
};
const uint16_t code_eu037Times[] PROGMEM = {
	14, 491,
	14, 743,
	14, 5178,
};
const struct IrCode code_eu037Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu037Times,  
	{
		0x45,
		0x50,
		0x02,
		0x45,
		0x50,
		0x01,
	}
};
const uint16_t code_eu038Times[] PROGMEM = {
	3, 1002,
	3, 1495,
	3, 3059,
};
const struct IrCode code_eu038Code PROGMEM = {
	0,              // Non-pulsed code
	11,		// # of pairs
	2,		// # of bits per index
	code_eu038Times,  
	{
		0x05,
		0x60,
		0x54,
	}
};
const uint16_t code_eu039Times[] PROGMEM = {
	13, 445,
	13, 674,
	13, 675,
	13, 4583,
};
const struct IrCode code_eu039Code PROGMEM = {
	freq_to_timerval(40161),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu039Times,  
	{
		0x6A,
		0x82,
		0x83,
		0xAA,
		0x82,
		0x81,
	}
};
const uint16_t code_eu040Times[] PROGMEM = {
	85, 89,
	85, 264,
	85, 3402,
	347, 350,
	348, 350,
};
const struct IrCode code_eu040Code PROGMEM = {
	freq_to_timerval(35714),
	52,		// # of pairs
	3,		// # of bits per index
	code_eu040Times,  
	{
		0x60,
		0x90,
		0x40,
		0x20,
		0x80,
		0x40,
		0x20,
		0x90,
		0x41,
		0x2A,
		0x02,
		0x41,
		0x00,
		0x82,
		0x01,
		0x00,
		0x82,
		0x41,
		0x04,
		0x80,
	}
};
const uint16_t code_eu041Times[] PROGMEM = {
	46, 300,
	49, 298,
	49, 648,
	49, 997,
	49, 3056,
};
const struct IrCode code_eu041Code PROGMEM = {
	freq_to_timerval(33333),
	28,		// # of pairs
	3,		// # of bits per index
	code_eu041Times,  
	{
		0x0C,
		0xB2,
		0xCA,
		0x49,
		0x13,
		0x0B,
		0x2C,
		0xB2,
		0x92,
		0x44,
		0xB0,
	}
};

/* Duplicate timing table, same as na009 !
const uint16_t code_eu042Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
*/
const struct IrCode code_eu042Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x80,
		0x00,
		0x00,
		0x24,
		0x92,
		0x09,
		0x00,
		0x82,
		0x00,
		0x04,
		0x10,
		0x49,
		0x2A,
		0xBA,
		0x00,
	}
};
const uint16_t code_eu043Times[] PROGMEM = {
	1037, 4216,
	1040, 0,
};
const struct IrCode code_eu043Code PROGMEM = {
	freq_to_timerval(41667),
	2,		// # of pairs
	2,		// # of bits per index
	code_eu043Times,  
	{
		0x10,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_eu044Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_eu044Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x02,
		0x01,
		0x04,
		0x90,
		0x48,
		0x20,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x2B,
		0x3D,
		0x00,
	}
};
const uint16_t code_eu045Times[] PROGMEM = {
	152, 471,
	154, 156,
	154, 469,
	154, 2947,
};
const struct IrCode code_eu045Code PROGMEM = {
	freq_to_timerval(41667),
	10,		// # of pairs
	2,		// # of bits per index
	code_eu045Times,  
	{
		0x16,
		0xE5,
		0x90,
	}
};
const uint16_t code_eu046Times[] PROGMEM = {
	15, 493,
	16, 493,
	16, 698,
	16, 1414,
};
const struct IrCode code_eu046Code PROGMEM = {
	freq_to_timerval(34602),
	16,		// # of pairs
	2,		// # of bits per index
	code_eu046Times,  
	{
		0x16,
		0xAB,
		0x56,
		0xA9,
	}
};
const uint16_t code_eu047Times[] PROGMEM = {
	3, 496,
	3, 745,
	3, 1488,
};
const struct IrCode code_eu047Code PROGMEM = {
	0,              // Non-pulsed code
	17,		// # of pairs
	2,		// # of bits per index
	code_eu047Times,  
	{
		0x41,
		0x24,
		0x12,
		0x41,
		0x00,
	}
};

/* Duplicate timing table, same as na009 !
const uint16_t code_eu048Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
*/
const struct IrCode code_eu048Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x80,
		0x00,
		0x00,
		0x24,
		0x82,
		0x49,
		0x04,
		0x80,
		0x40,
		0x00,
		0x12,
		0x09,
		0x2A,
		0xBA,
		0x00,
	}
};
const uint16_t code_eu049Times[] PROGMEM = {
	55, 55,
	55, 167,
	55, 4577,
	55, 9506,
	448, 445,
	450, 444,
};
const struct IrCode code_eu049Code PROGMEM = {
	freq_to_timerval(38462),
	40,		// # of pairs
	3,		// # of bits per index
	code_eu049Times,  
	{
		0x80,
		0x92,
		0x00,
		0x00,
		0x92,
		0x00,
		0x00,
		0x10,
		0x40,
		0x04,
		0x82,
		0x09,
		0x2A,
		0x97,
		0x48,
	}
};
const uint16_t code_eu050Times[] PROGMEM = {
	91, 88,
	91, 267,
	91, 3621,
	361, 358,
	361, 359,
};
const struct IrCode code_eu050Code PROGMEM = {
	freq_to_timerval(33333),
	48,		// # of pairs
	3,		// # of bits per index
	code_eu050Times,  
	{
		0x60,
		0x00,
		0x00,
		0x00,
		0x12,
		0x49,
		0x24,
		0x92,
		0x42,
		0x80,
		0x00,
		0x00,
		0x00,
		0x12,
		0x49,
		0x24,
		0x92,
		0x40,
	}
};
const uint16_t code_eu051Times[] PROGMEM = {
	84, 88,
	84, 261,
	84, 3360,
	347, 347,
	347, 348,
};
const struct IrCode code_eu051Code PROGMEM = {
	freq_to_timerval(38462),
	52,		// # of pairs
	3,		// # of bits per index
	code_eu051Times,  
	{
		0x60,
		0x82,
		0x00,
		0x20,
		0x80,
		0x41,
		0x04,
		0x90,
		0x41,
		0x2A,
		0x02,
		0x08,
		0x00,
		0x82,
		0x01,
		0x04,
		0x12,
		0x41,
		0x04,
		0x80,
	}
};// Duplicate IR Code? - Similar to NA115

const uint16_t code_eu052Times[] PROGMEM = {
	16, 838,
	17, 558,
	17, 839,
	17, 6328,
};
const struct IrCode code_eu052Code PROGMEM = {
	freq_to_timerval(31250),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu052Times,  
	{
		0x1A,
		0x9A,
		0x9B,
		0x9A,
		0x9A,
		0x99,
	}
};// Duplicate IR Code? -  Similar to EU017


/* Duplicate timing table, same as eu046 !
const uint16_t code_eu053Times[] PROGMEM = {
	15, 493,
	16, 493,
	16, 698,
	16, 1414,
};
*/
const struct IrCode code_eu053Code PROGMEM = {
	freq_to_timerval(34483),
	16,		// # of pairs
	2,		// # of bits per index
	code_eu046Times,  
	{
		0x26,
		0xAB,
		0x66,
		0xAA,
	}
};
const uint16_t code_eu054Times[] PROGMEM = {
	49, 53,
	49, 104,
	49, 262,
	49, 264,
	49, 8030,
	100, 103,
};
const struct IrCode code_eu054Code PROGMEM = {
	freq_to_timerval(31250),
	14,		// # of pairs
	3,		// # of bits per index
	code_eu054Times,  
	{
		0x40,
		0x1A,
		0x23,
		0x00,
		0xD0,
		0x80,
	}
};

/* Duplicate timing table, same as na009 !
const uint16_t code_eu055Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
*/
const struct IrCode code_eu055Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x80,
		0x00,
		0x00,
		0x20,
		0x92,
		0x49,
		0x00,
		0x02,
		0x40,
		0x04,
		0x90,
		0x09,
		0x2A,
		0xBA,
		0x00,
	}
};
const uint16_t code_eu056Times[] PROGMEM = {
	112, 107,
	113, 107,
	677, 2766,
};
const struct IrCode code_eu056Code PROGMEM = {
	freq_to_timerval(38462),
	4,		// # of pairs
	2,		// # of bits per index
	code_eu056Times,  
	{
		0x26,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_eu057Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
/*
const struct IrCode code_eu057Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x00,
		0x41,
		0x04,
		0x92,
		0x08,
		0x20,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2B,
		0x3D,
		0x00,
	}
}; // Duplicate IR code - same as EU008
*/
/* Duplicate timing table, same as na009 !
const uint16_t code_eu058Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
*/
const struct IrCode code_eu058Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x80,
		0x00,
		0x00,
		0x24,
		0x10,
		0x49,
		0x00,
		0x82,
		0x00,
		0x04,
		0x10,
		0x49,
		0x2A,
		0xBA,
		0x00,
	}
};
const uint16_t code_eu059Times[] PROGMEM = {
	310, 613,
	310, 614,
	622, 8312,
};
const struct IrCode code_eu059Code PROGMEM = {
	freq_to_timerval(41667),
	4,		// # of pairs
	2,		// # of bits per index
	code_eu059Times,  
	{
		0x26,
	}
};// Duplicate IR Code? - Similar to EU056

const uint16_t code_eu060Times[] PROGMEM = {
	50, 158,
	53, 51,
	53, 156,
	53, 2180,
};
const struct IrCode code_eu060Code PROGMEM = {
	freq_to_timerval(38462),
	34,		// # of pairs
	2,		// # of bits per index
	code_eu060Times,  
	{
		0x25,
		0x59,
		0x9A,
		0x5A,
		0xE9,
		0x56,
		0x66,
		0x96,
		0xA0,
	}
};

/* Duplicate timing table, same as na005 !
const uint16_t code_eu061Times[] PROGMEM = {
	88, 90,
	88, 91,
	88, 181,
	88, 8976,
	177, 91,
};
*/
const struct IrCode code_eu061Code PROGMEM = {
	freq_to_timerval(35714),
	24,		// # of pairs
	3,		// # of bits per index
	code_na005Times,  
	{
		0x10,
		0x92,
		0x54,
		0x24,
		0xB3,
		0x09,
		0x25,
		0x42,
		0x48,
	}
};

/* Duplicate timing table, same as eu060 !
const uint16_t code_eu062Times[] PROGMEM = {
	50, 158,
	53, 51,
	53, 156,
	53, 2180,
};
*/
const struct IrCode code_eu062Code PROGMEM = {
	freq_to_timerval(38462),
	34,		// # of pairs
	2,		// # of bits per index
	code_eu060Times,  
	{
		0x25,
		0x99,
		0x9A,
		0x5A,
		0xE9,
		0x66,
		0x66,
		0x96,
		0xA0,
	}
};

/* Duplicate timing table, same as na009 !
const uint16_t code_eu063Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
*/
const struct IrCode code_eu063Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x80,
		0x00,
		0x00,
		0x24,
		0x90,
		0x41,
		0x00,
		0x82,
		0x00,
		0x04,
		0x10,
		0x49,
		0x2A,
		0xBA,
		0x00,
	}
};
const uint16_t code_eu064Times[] PROGMEM = {
	47, 267,
	50, 55,
	50, 110,
	50, 265,
	50, 2055,
	50, 12117,
	100, 57,
	100, 112,
};
const struct IrCode code_eu064Code PROGMEM = {
	freq_to_timerval(30395),
	29,		// # of pairs
	3,		// # of bits per index
	code_eu064Times,  
	{
		0x04,
		0x92,
		0x49,
		0x26,
		0x32,
		0x51,
		0xCB,
		0xD6,
		0x4A,
		0x39,
		0x72,
	}
};
const uint16_t code_eu065Times[] PROGMEM = {
	47, 267,
	50, 55,
	50, 110,
	50, 265,
	50, 2055,
	50, 12117,
	100, 112,
};
const struct IrCode code_eu065Code PROGMEM = {
	freq_to_timerval(30303),
	31,		// # of pairs
	3,		// # of bits per index
	code_eu065Times,  
	{
		0x04,
		0x92,
		0x49,
		0x26,
		0x32,
		0x4A,
		0x38,
		0x9A,
		0xC9,
		0x28,
		0xE2,
		0x48,
	}
};

/* Duplicate timing table, same as eu049 !
const uint16_t code_eu066Times[] PROGMEM = {
	55, 55,
	55, 167,
	55, 4577,
	55, 9506,
	448, 445,
	450, 444,
};
*/
const struct IrCode code_eu066Code PROGMEM = {
	freq_to_timerval(38462),
	40,		// # of pairs
	3,		// # of bits per index
	code_eu049Times,  
	{
		0x84,
		0x82,
		0x00,
		0x04,
		0x82,
		0x00,
		0x00,
		0x82,
		0x00,
		0x04,
		0x10,
		0x49,
		0x2A,
		0x87,
		0x41,
	}
};
const uint16_t code_eu067Times[] PROGMEM = {
	94, 473,
	94, 728,
	102, 1637,
};
const struct IrCode code_eu067Code PROGMEM = {
	freq_to_timerval(38462),
	12,		// # of pairs
	2,		// # of bits per index
	code_eu067Times,  
	{
		0x41,
		0x24,
		0x12,
	}
};
const uint16_t code_eu068Times[] PROGMEM = {
	49, 263,
	50, 54,
	50, 108,
	50, 263,
	50, 2029,
	50, 10199,
	100, 110,
};
const struct IrCode code_eu068Code PROGMEM = {
	freq_to_timerval(38610),
	31,		// # of pairs
	3,		// # of bits per index
	code_eu068Times,  
	{
		0x04,
		0x92,
		0x49,
		0x26,
		0x34,
		0x49,
		0x38,
		0x9A,
		0xD1,
		0x24,
		0xE2,
		0x48,
	}
};
const uint16_t code_eu069Times[] PROGMEM = {
	4, 499,
	4, 750,
	4, 4999,
};
const struct IrCode code_eu069Code PROGMEM = {
	0,              // Non-pulsed code
	23,		// # of pairs
	2,		// # of bits per index
	code_eu069Times,  
	{
		0x05,
		0x54,
		0x06,
		0x05,
		0x54,
		0x04,
	}
};

/* Duplicate timing table, same as eu069 !
const uint16_t code_eu070Times[] PROGMEM = {
	4, 499,
	4, 750,
	4, 4999,
};
*/
const struct IrCode code_eu070Code PROGMEM = {
	0,              // Non-pulsed code
	23,		// # of pairs
	2,		// # of bits per index
	code_eu069Times,  
	{
		0x14,
		0x54,
		0x06,
		0x14,
		0x54,
		0x04,
	}
};
const uint16_t code_eu071Times[] PROGMEM = {
	14, 491,
	14, 743,
	14, 4422,
};
const struct IrCode code_eu071Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu071Times,  
	{
		0x45,
		0x44,
		0x56,
		0x45,
		0x44,
		0x55,
	}
};
const uint16_t code_eu072Times[] PROGMEM = {
	5, 568,
	5, 854,
	5, 4999,
};
const struct IrCode code_eu072Code PROGMEM = {
	0,              // Non-pulsed code
	23,		// # of pairs
	2,		// # of bits per index
	code_eu072Times,  
	{
		0x55,
		0x45,
		0x46,
		0x55,
		0x45,
		0x44,
	}
};

/* Duplicate timing table, same as eu046 !
const uint16_t code_eu073Times[] PROGMEM = {
	15, 493,
	16, 493,
	16, 698,
	16, 1414,
};
*/
const struct IrCode code_eu073Code PROGMEM = {
	freq_to_timerval(34483),
	16,		// # of pairs
	2,		// # of bits per index
	code_eu046Times,  
	{
		0x19,
		0x57,
		0x59,
		0x55,
	}
};

/* Duplicate timing table, same as na031 !
const uint16_t code_eu074Times[] PROGMEM = {
	88, 89,
	88, 90,
	88, 179,
	88, 8977,
	177, 90,
};
*/
const struct IrCode code_eu074Code PROGMEM = {
	freq_to_timerval(35714),
	26,		// # of pairs
	3,		// # of bits per index
	code_na031Times,  
	{
		0x04,
		0x92,
		0x49,
		0x28,
		0xC6,
		0x49,
		0x24,
		0x92,
		0x51,
		0x80,
	}
};
const uint16_t code_eu075Times[] PROGMEM = {
	6, 566,
	6, 851,
	6, 5474,
};
const struct IrCode code_eu075Code PROGMEM = {
	0,              // Non-pulsed code
	23,		// # of pairs
	2,		// # of bits per index
	code_eu075Times,  
	{
		0x05,
		0x45,
		0x46,
		0x05,
		0x45,
		0x44,
	}
};
const uint16_t code_eu076Times[] PROGMEM = {
	14, 843,
	16, 555,
	16, 841,
	16, 4911,
};
const struct IrCode code_eu076Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu076Times,  
	{
		0x2A,
		0x9A,
		0x9B,
		0xAA,
		0x9A,
		0x9A,
	}
};

/* Duplicate timing table, same as eu028 !
const uint16_t code_eu077Times[] PROGMEM = {
	47, 267,
	50, 55,
	50, 110,
	50, 265,
	50, 2055,
	50, 12117,
	100, 57,
};
*/
const struct IrCode code_eu077Code PROGMEM = {
	freq_to_timerval(30303),
	31,		// # of pairs
	3,		// # of bits per index
	code_eu028Times,  
	{
		0x04,
		0x92,
		0x49,
		0x26,
		0x32,
		0x51,
		0xC8,
		0x9A,
		0xC9,
		0x47,
		0x22,
		0x48,
	}
};
const uint16_t code_eu078Times[] PROGMEM = {
	6, 925,
	6, 1339,
	6, 2098,
	6, 2787,
};
const struct IrCode code_eu078Code PROGMEM = {
	0,              // Non-pulsed code
	12,		// # of pairs
	2,		// # of bits per index
	code_eu078Times,  
	{
		0x90,
		0x0D,
		0x00,
	}
};
const uint16_t code_eu079Times[] PROGMEM = {
	53, 59,
	53, 170,
	53, 4359,
	892, 448,
	893, 448,
};
const struct IrCode code_eu079Code PROGMEM = {
	freq_to_timerval(38462),
	68,		// # of pairs
	3,		// # of bits per index
	code_eu079Times,  
	{
		0x60,
		0x00,
		0x00,
		0x24,
		0x80,
		0x09,
		0x04,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x2A,
		0x00,
		0x00,
		0x00,
		0x92,
		0x00,
		0x24,
		0x12,
		0x48,
		0x00,
		0x00,
		0x01,
		0x24,
		0x80,
	}
};
const uint16_t code_eu080Times[] PROGMEM = {
	55, 57,
	55, 167,
	55, 4416,
	895, 448,
	897, 447,
};
const struct IrCode code_eu080Code PROGMEM = {
	freq_to_timerval(38462),
	68,		// # of pairs
	3,		// # of bits per index
	code_eu080Times,  
	{
		0x60,
		0x00,
		0x00,
		0x20,
		0x10,
		0x09,
		0x04,
		0x02,
		0x01,
		0x00,
		0x90,
		0x48,
		0x2A,
		0x00,
		0x00,
		0x00,
		0x80,
		0x40,
		0x24,
		0x10,
		0x08,
		0x04,
		0x02,
		0x41,
		0x20,
		0x80,
	}
};

const uint16_t code_eu081Times[] PROGMEM = {
	26, 185,
	27, 80,
	27, 185,
	27, 4249,
};
const struct IrCode code_eu081Code PROGMEM = {
	freq_to_timerval(38462),
	80,		// # of pairs
	2,		// # of bits per index
	code_eu081Times,  
	{
		0x1A,
		0x5A,
		0x65,
		0x67,
		0x9A,
		0x65,
		0x9A,
		0x9B,
		0x9A,
		0x5A,
		0x65,
		0x67,
		0x9A,
		0x65,
		0x9A,
		0x9B,
		0x9A,
		0x5A,
		0x65,
		0x65,
	}
};
const uint16_t code_eu082Times[] PROGMEM = {
	51, 56,
	51, 162,
	51, 2842,
	848, 430,
	850, 429,
};
const struct IrCode code_eu082Code PROGMEM = {
	freq_to_timerval(40000),
	68,		// # of pairs
	3,		// # of bits per index
	code_eu082Times,  
	{
		0x60,
		0x82,
		0x08,
		0x24,
		0x10,
		0x41,
		0x04,
		0x82,
		0x40,
		0x00,
		0x10,
		0x09,
		0x2A,
		0x02,
		0x08,
		0x20,
		0x90,
		0x41,
		0x04,
		0x12,
		0x09,
		0x00,
		0x00,
		0x40,
		0x24,
		0x80,
	}
};
const uint16_t code_eu083Times[] PROGMEM = {
	16, 559,
	16, 847,
	16, 5900,
	17, 559,
	17, 847,
};
const struct IrCode code_eu083Code PROGMEM = {
	freq_to_timerval(33333),
	24,		// # of pairs
	3,		// # of bits per index
	code_eu083Times,  
	{
		0x0E,
		0x38,
		0x21,
		0x82,
		0x26,
		0x20,
		0x82,
		0x48,
		0x23,
	}
};
const uint16_t code_eu084Times[] PROGMEM = {
	16, 484,
	16, 738,
	16, 739,
	16, 4795,
};
const struct IrCode code_eu084Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu084Times,  
	{
		0x6A,
		0xA0,
		0x03,
		0xAA,
		0xA0,
		0x01,
	}
};
const uint16_t code_eu085Times[] PROGMEM = {
	48, 52,
	48, 160,
	48, 400,
	48, 2120,
	799, 400,
};
const struct IrCode code_eu085Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_eu085Times,  
	{
		0x84,
		0x82,
		0x40,
		0x08,
		0x92,
		0x48,
		0x01,
		0xC2,
		0x41,
		0x20,
		0x04,
		0x49,
		0x24,
		0x00,
		0x40,
	}
};
const uint16_t code_eu086Times[] PROGMEM = {
	16, 851,
	17, 554,
	17, 850,
	17, 851,
	17, 4847,
};
const struct IrCode code_eu086Code PROGMEM = {
	freq_to_timerval(33333),
	24,		// # of pairs
	3,		// # of bits per index
	code_eu086Times,  
	{
		0x45,
		0x86,
		0x5B,
		0x05,
		0xC6,
		0x5B,
		0x05,
		0xB0,
		0x42,
	}
};
const uint16_t code_eu087Times[] PROGMEM = {
	14, 491,
	14, 743,
	14, 5126,
};
const struct IrCode code_eu087Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu087Times,  
	{
		0x55,
		0x50,
		0x02,
		0x55,
		0x50,
		0x01,
	}
};
const uint16_t code_eu088Times[] PROGMEM = {
	14, 491,
	14, 743,
	14, 4874,
};
const struct IrCode code_eu088Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu088Times,  
	{
		0x45,
		0x54,
		0x42,
		0x45,
		0x54,
		0x41,
	}
};

/* Duplicate timing table, same as na021 !
const uint16_t code_eu089Times[] PROGMEM = {
	48, 52,
	48, 160,
	48, 400,
	48, 2335,
	799, 400,
};
*/
const struct IrCode code_eu089Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na021Times,  
	{
		0x84,
		0x10,
		0x40,
		0x08,
		0x82,
		0x08,
		0x01,
		0xC2,
		0x08,
		0x20,
		0x04,
		0x41,
		0x04,
		0x00,
		0x40,
	}
};
const uint16_t code_eu090Times[] PROGMEM = {
	3, 9,
	3, 19,
	3, 29,
	3, 39,
	3, 9968,
};
const struct IrCode code_eu090Code PROGMEM = {
	0,              // Non-pulsed code
	29,		// # of pairs
	3,		// # of bits per index
	code_eu090Times,  
	{
		0x60,
		0x00,
		0x88,
		0x00,
		0x02,
		0xE3,
		0x00,
		0x04,
		0x40,
		0x00,
		0x16,
	}
};
const uint16_t code_eu091Times[] PROGMEM = {
	15, 138,
	15, 446,
	15, 605,
	15, 6565,
};
const struct IrCode code_eu091Code PROGMEM = {
	freq_to_timerval(38462),
	30,		// # of pairs
	2,		// # of bits per index
	code_eu091Times,  
	{
		0x80,
		0x01,
		0x00,
		0x2E,
		0x00,
		0x04,
		0x00,
		0xA0,
	}
};
const uint16_t code_eu092Times[] PROGMEM = {
	48, 50,
	48, 148,
	48, 149,
	48, 1424,
};
const struct IrCode code_eu092Code PROGMEM = {
	freq_to_timerval(40000),
	22,		// # of pairs
	2,		// # of bits per index
	code_eu092Times,  
	{
		0x48,
		0x80,
		0x0E,
		0x22,
		0x00,
		0x10,
	}
};
const uint16_t code_eu093Times[] PROGMEM = {
	87, 639,
	88, 275,
	88, 639,
};
const struct IrCode code_eu093Code PROGMEM = {
	freq_to_timerval(35714),
	11,		// # of pairs
	2,		// # of bits per index
	code_eu093Times,  
	{
		0x15,
		0x9A,
		0x94,
	}
};
const uint16_t code_eu094Times[] PROGMEM = {
	3, 8,
	3, 18,
	3, 24,
	3, 38,
	3, 9969,
};
const struct IrCode code_eu094Code PROGMEM = {
	0,              // Non-pulsed code
	29,		// # of pairs
	3,		// # of bits per index
	code_eu094Times,  
	{
		0x60,
		0x80,
		0x88,
		0x00,
		0x00,
		0xE3,
		0x04,
		0x04,
		0x40,
		0x00,
		0x06,
	}
};

/* Duplicate timing table, same as eu046 !
const uint16_t code_eu095Times[] PROGMEM = {
	15, 493,
	16, 493,
	16, 698,
	16, 1414,
};
*/
const struct IrCode code_eu095Code PROGMEM = {
	freq_to_timerval(34483),
	16,		// # of pairs
	2,		// # of bits per index
	code_eu046Times,  
	{
		0x2A,
		0xAB,
		0x6A,
		0xAA,
	}
};
const uint16_t code_eu096Times[] PROGMEM = {
	13, 608,
	14, 141,
	14, 296,
	14, 451,
	14, 606,
	14, 608,
	14, 6207,
};
const struct IrCode code_eu096Code PROGMEM = {
	freq_to_timerval(38462),
	30,		// # of pairs
	3,		// # of bits per index
	code_eu096Times,  
	{
		0x04,
		0x94,
		0x4B,
		0x24,
		0x95,
		0x35,
		0x24,
		0xA2,
		0x59,
		0x24,
		0xA8,
		0x40,
	}
};

/* Duplicate timing table, same as eu046 !
const uint16_t code_eu097Times[] PROGMEM = {
	15, 493,
	16, 493,
	16, 698,
	16, 1414,
};
*/
const struct IrCode code_eu097Code PROGMEM = {
	freq_to_timerval(34483),
	16,		// # of pairs
	2,		// # of bits per index
	code_eu046Times,  
	{
		0x19,
		0xAB,
		0x59,
		0xA9,
	}
};
const uint16_t code_eu098Times[] PROGMEM = {
	3, 8,
	3, 18,
	3, 28,
	3, 12731,
};
const struct IrCode code_eu098Code PROGMEM = {
	0,              // Non-pulsed code
	27,		// # of pairs
	2,		// # of bits per index
	code_eu098Times,  
	{
		0x80,
		0x01,
		0x00,
		0xB8,
		0x55,
		0x10,
		0x08,
	}
};
const uint16_t code_eu099Times[] PROGMEM = {
	46, 53,
	46, 106,
	46, 260,
	46, 1502,
	46, 10962,
	93, 53,
	93, 106,
};
const struct IrCode code_eu099Code PROGMEM = {
	freq_to_timerval(35714),
	46,		// # of pairs
	3,		// # of bits per index
	code_eu099Times,  
	{
		0x46,
		0x80,
		0x00,
		0x00,
		0x00,
		0x03,
		0x44,
		0x52,
		0x00,
		0x00,
		0x0C,
		0x22,
		0x22,
		0x90,
		0x00,
		0x00,
		0x60,
		0x80,
	}
};


/* Duplicate timing table, same as eu098 !
const uint16_t code_eu100Times[] PROGMEM = {
	3, 8,
	3, 18,
	3, 28,
	3, 12731,
};
*/
const struct IrCode code_eu100Code PROGMEM = {
	0,              // Non-pulsed code
	27,		// # of pairs
	2,		// # of bits per index
	code_eu098Times,  
	{
		0x80,
		0x04,
		0x00,
		0xB8,
		0x55,
		0x40,
		0x08,
	}
};



const uint16_t code_eu101Times[] PROGMEM = {
	14, 491,
	14, 743,
	14, 4674,
};
const struct IrCode code_eu101Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu101Times,  
	{
		0x55,
		0x50,
		0x06,
		0x55,
		0x50,
		0x05,
	}
};

/* Duplicate timing table, same as eu087 !
const uint16_t code_eu102Times[] PROGMEM = {
	14, 491,
	14, 743,
	14, 5126,
};
*/
const struct IrCode code_eu102Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu087Times,  
	{
		0x45,
		0x54,
		0x02,
		0x45,
		0x54,
		0x01,
	}
};
const uint16_t code_eu103Times[] PROGMEM = {
	44, 815,
	45, 528,
	45, 815,
	45, 5000,
};
const struct IrCode code_eu103Code PROGMEM = {
	freq_to_timerval(34483),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu103Times,  
	{
		0x29,
		0x9A,
		0x9B,
		0xA9,
		0x9A,
		0x9A,
	}
};
const uint16_t code_eu104Times[] PROGMEM = {
	14, 491,
	14, 743,
	14, 5881,
};
const struct IrCode code_eu104Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu104Times,  
	{
		0x44,
		0x40,
		0x02,
		0x44,
		0x40,
		0x01,
	}
};

/* Duplicate timing table, same as na009 !
const uint16_t code_eu105Times[] PROGMEM = {
	53, 56,
	53, 171,
	53, 3950,
	53, 9599,
	898, 451,
	900, 226,
};
*/
const struct IrCode code_eu105Code PROGMEM = {
	freq_to_timerval(38610),
	38,		// # of pairs
	3,		// # of bits per index
	code_na009Times,  
	{
		0x84,
		0x10,
		0x00,
		0x20,
		0x90,
		0x01,
		0x00,
		0x80,
		0x40,
		0x04,
		0x12,
		0x09,
		0x2A,
		0xBA,
		0x40,
	}
};
const uint16_t code_eu106Times[] PROGMEM = {
	48, 246,
	50, 47,
	50, 94,
	50, 245,
	50, 1488,
	50, 10970,
	100, 47,
	100, 94,
};
const struct IrCode code_eu106Code PROGMEM = {
	freq_to_timerval(38462),
	59,		// # of pairs
	3,		// # of bits per index
	code_eu106Times,  
	{
		0x0B,
		0x12,
		0x49,
		0x24,
		0x92,
		0x49,
		0x8D,
		0x1C,
		0x89,
		0x27,
		0xFC,
		0xAB,
		0x47,
		0x22,
		0x49,
		0xFF,
		0x2A,
		0xD1,
		0xC8,
		0x92,
		0x7F,
		0xC9,
		0x00,
	}
};
const uint16_t code_eu107Times[] PROGMEM = {
	16, 847,
	16, 5900,
	17, 559,
	17, 846,
	17, 847,
};
const struct IrCode code_eu107Code PROGMEM = {
	freq_to_timerval(33333),
	24,		// # of pairs
	3,		// # of bits per index
	code_eu107Times,  
	{
		0x62,
		0x08,
		0xA0,
		0x8A,
		0x19,
		0x04,
		0x08,
		0x40,
		0x83,
	}
};
const uint16_t code_eu108Times[] PROGMEM = {
	14, 491,
	14, 743,
	14, 4622,
};
const struct IrCode code_eu108Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu108Times,  
	{
		0x45,
		0x54,
		0x16,
		0x45,
		0x54,
		0x15,
	}
};
const uint16_t code_eu109Times[] PROGMEM = {
	24, 185,
	27, 78,
	27, 183,
	27, 1542,
};
const struct IrCode code_eu109Code PROGMEM = {
	freq_to_timerval(38462),
	22,		// # of pairs
	2,		// # of bits per index
	code_eu109Times,  
	{
		0x19,
		0x95,
		0x5E,
		0x66,
		0x55,
		0x50,
	}
};


const uint16_t code_eu110Times[] PROGMEM = {
	56, 55,
	56, 168,
	56, 4850,
	447, 453,
	448, 453,
};
const struct IrCode code_eu110Code PROGMEM = {
	freq_to_timerval(38462),
	68,		// # of pairs
	3,		// # of bits per index
	code_eu110Times,  
	{
		0x64,
		0x10,
		0x00,
		0x04,
		0x10,
		0x00,
		0x00,
		0x80,
		0x00,
		0x04,
		0x12,
		0x49,
		0x2A,
		0x10,
		0x40,
		0x00,
		0x10,
		0x40,
		0x00,
		0x02,
		0x00,
		0x00,
		0x10,
		0x49,
		0x24,
		0x90,
	}
};
const uint16_t code_eu111Times[] PROGMEM = {
	49, 52,
	49, 250,
	49, 252,
	49, 2377,
	49, 12009,
	100, 52,
	100, 102,
};
const struct IrCode code_eu111Code PROGMEM = {
	freq_to_timerval(31250),
	21,		// # of pairs
	3,		// # of bits per index
	code_eu111Times,  
	{
		0x22,
		0x80,
		0x1A,
		0x18,
		0x01,
		0x10,
		0xC0,
		0x02,
	}
};
const uint16_t code_eu112Times[] PROGMEM = {
	55, 55,
	55, 167,
	55, 5023,
	55, 9506,
	448, 445,
	450, 444,
};
const struct IrCode code_eu112Code PROGMEM = {
	freq_to_timerval(38462),
	40,		// # of pairs
	3,		// # of bits per index
	code_eu112Times,  
	{
		0x80,
		0x02,
		0x00,
		0x00,
		0x02,
		0x00,
		0x04,
		0x92,
		0x00,
		0x00,
		0x00,
		0x49,
		0x2A,
		0x97,
		0x48,
	}
};


/* Duplicate timing table, same as eu054 !
const uint16_t code_eu113Times[] PROGMEM = {
	49, 53,
	49, 104,
	49, 262,
	49, 264,
	49, 8030,
	100, 103,
};
*/
const struct IrCode code_eu113Code PROGMEM = {
	freq_to_timerval(31250),
	14,		// # of pairs
	3,		// # of bits per index
	code_eu054Times,  
	{
		0x46,
		0x80,
		0x23,
		0x34,
		0x00,
		0x80,
	}
};

/* Duplicate timing table, same as eu028 !
const uint16_t code_eu114Times[] PROGMEM = {
	47, 267,
	50, 55,
	50, 110,
	50, 265,
	50, 2055,
	50, 12117,
	100, 57,
};
*/
const struct IrCode code_eu114Code PROGMEM = {
	freq_to_timerval(30303),
	31,		// # of pairs
	3,		// # of bits per index
	code_eu028Times,  
	{
		0x04,
		0x92,
		0x49,
		0x26,
		0x34,
		0x71,
		0x44,
		0x9A,
		0xD1,
		0xC5,
		0x12,
		0x48,
	}
};

#ifndef NA_CODES

const uint16_t code_eu115Times[] PROGMEM = {
	48, 98,
	48, 196,
	97, 836,
	395, 388,
	1931, 389,
};
const struct IrCode code_eu115Code PROGMEM = {
	freq_to_timerval(58824),
	77,		// # of pairs
	3,		// # of bits per index
	code_eu115Times,  
	{
		0x84,
		0x92,
		0x01,
		0x24,
		0x12,
		0x00,
		0x04,
		0x80,
		0x08,
		0x09,
		0x92,
		0x48,
		0x04,
		0x90,
		0x48,
		0x00,
		0x12,
		0x00,
		0x20,
		0x26,
		0x49,
		0x20,
		0x12,
		0x41,
		0x20,
		0x00,
		0x48,
		0x00,
		0x82,
	}
};
const uint16_t code_eu116Times[] PROGMEM = {
	3, 9,
	3, 31,
	3, 42,
	3, 10957,
};
const struct IrCode code_eu116Code PROGMEM = {
	0,              // Non-pulsed code
	29,		// # of pairs
	2,		// # of bits per index
	code_eu116Times,  
	{
		0x80,
		0x01,
		0x00,
		0x2E,
		0x00,
		0x04,
		0x00,
		0x80,
	}
};
const uint16_t code_eu117Times[] PROGMEM = {
	49, 53,
	49, 262,
	49, 264,
	49, 8030,
	100, 103,
};
const struct IrCode code_eu117Code PROGMEM = {
	freq_to_timerval(31250),
	14,		// # of pairs
	3,		// # of bits per index
	code_eu117Times,  
	{
		0x22,
		0x00,
		0x1A,
		0x10,
		0x00,
		0x40,
	}
};
const uint16_t code_eu118Times[] PROGMEM = {
	44, 815,
	45, 528,
	45, 815,
	45, 4713,
};
const struct IrCode code_eu118Code PROGMEM = {
	freq_to_timerval(34483),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu118Times,  
	{
		0x2A,
		0x9A,
		0x9B,
		0xAA,
		0x9A,
		0x9A,
	}
};

const uint16_t code_eu119Times[] PROGMEM = {
	14, 491,
	14, 743,
	14, 5430,
};
const struct IrCode code_eu119Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu119Times,  
	{
		0x44,
		0x44,
		0x02,
		0x44,
		0x44,
		0x01,
	}
};


const uint16_t code_eu120Times[] PROGMEM = {
	19, 78,
	21, 27,
	21, 77,
	21, 3785,
	22, 0,
};
const struct IrCode code_eu120Code PROGMEM = {
	freq_to_timerval(38462),
	82,		// # of pairs
	3,		// # of bits per index
	code_eu120Times,  
	{
		0x09,
		0x24,
		0x92,
		0x49,
		0x12,
		0x4A,
		0x24,
		0x92,
		0x49,
		0x24,
		0x92,
		0x49,
		0x24,
		0x94,
		0x89,
		0x69,
		0x24,
		0x92,
		0x49,
		0x22,
		0x49,
		0x44,
		0x92,
		0x49,
		0x24,
		0x92,
		0x49,
		0x24,
		0x92,
		0x91,
		0x30,
	}
};

/* Duplicate timing table, same as eu051 !
const uint16_t code_eu121Times[] PROGMEM = {
	84, 88,
	84, 261,
	84, 3360,
	347, 347,
	347, 348,
};
*/
const struct IrCode code_eu121Code PROGMEM = {
	freq_to_timerval(38462),
	52,		// # of pairs
	3,		// # of bits per index
	code_eu051Times,  
	{
		0x64,
		0x00,
		0x09,
		0x24,
		0x00,
		0x09,
		0x24,
		0x00,
		0x09,
		0x2A,
		0x10,
		0x00,
		0x24,
		0x90,
		0x00,
		0x24,
		0x90,
		0x00,
		0x24,
		0x90,
	}
};

/* Duplicate timing table, same as eu120 !
const uint16_t code_eu122Times[] PROGMEM = {
	19, 78,
	21, 27,
	21, 77,
	21, 3785,
	22, 0,
};
*/
const struct IrCode code_eu122Code PROGMEM = {
	freq_to_timerval(38462),
	82,		// # of pairs
	3,		// # of bits per index
	code_eu120Times,  
	{
		0x04,
		0xA4,
		0x92,
		0x49,
		0x22,
		0x49,
		0x48,
		0x92,
		0x49,
		0x24,
		0x92,
		0x49,
		0x24,
		0x94,
		0x89,
		0x68,
		0x94,
		0x92,
		0x49,
		0x24,
		0x49,
		0x29,
		0x12,
		0x49,
		0x24,
		0x92,
		0x49,
		0x24,
		0x92,
		0x91,
		0x30,
	}
};
const uint16_t code_eu123Times[] PROGMEM = {
	13, 490,
	13, 741,
	13, 742,
	13, 5443,
};
const struct IrCode code_eu123Code PROGMEM = {
	freq_to_timerval(40000),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu123Times,  
	{
		0x6A,
		0xA0,
		0x0B,
		0xAA,
		0xA0,
		0x09,
	}
};
const uint16_t code_eu124Times[] PROGMEM = {
	50, 54,
	50, 158,
	50, 407,
	50, 2153,
	843, 407,
};
const struct IrCode code_eu124Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_eu124Times,  
	{
		0x80,
		0x10,
		0x40,
		0x08,
		0x92,
		0x48,
		0x01,
		0xC0,
		0x08,
		0x20,
		0x04,
		0x49,
		0x24,
		0x00,
		0x00,
	}
};
const uint16_t code_eu125Times[] PROGMEM = {
	55, 56,
	55, 168,
	55, 3929,
	56, 0,
	882, 454,
	884, 452,
};
const struct IrCode code_eu125Code PROGMEM = {
	freq_to_timerval(38462),
	68,		// # of pairs
	3,		// # of bits per index
	code_eu125Times,  
	{
		0x84,
		0x80,
		0x00,
		0x20,
		0x82,
		0x49,
		0x00,
		0x02,
		0x00,
		0x04,
		0x90,
		0x49,
		0x2A,
		0x92,
		0x00,
		0x00,
		0x82,
		0x09,
		0x24,
		0x00,
		0x08,
		0x00,
		0x12,
		0x41,
		0x24,
		0xB0,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_eu126Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_eu126Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x20,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x2B,
		0x3D,
		0x00,
	}
};

/* Duplicate timing table, same as eu087 !
const uint16_t code_eu127Times[] PROGMEM = {
	14, 491,
	14, 743,
	14, 5126,
};
*/
const struct IrCode code_eu127Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu087Times,  
	{
		0x44,
		0x40,
		0x56,
		0x44,
		0x40,
		0x55,
	}
};
const uint16_t code_eu128Times[] PROGMEM = {
	152, 471,
	154, 156,
	154, 469,
	154, 782,
	154, 2947,
};
const struct IrCode code_eu128Code PROGMEM = {
	freq_to_timerval(41667),
	8,		// # of pairs
	3,		// # of bits per index
	code_eu128Times,  
	{
		0x05,
		0xC4,
		0x59,
	}
};
const uint16_t code_eu129Times[] PROGMEM = {
	50, 50,
	50, 99,
	50, 251,
	50, 252,
	50, 1449,
	50, 11014,
	102, 49,
	102, 98,
};
const struct IrCode code_eu129Code PROGMEM = {
	freq_to_timerval(38462),
	45,		// # of pairs
	3,		// # of bits per index
	code_eu129Times,  
	{
		0x47,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x8C,
		0x8C,
		0x40,
		0x03,
		0xF1,
		0xEB,
		0x23,
		0x10,
		0x00,
		0xFC,
		0x74,
	}
};

/* Duplicate timing table, same as eu129 !
const uint16_t code_eu130Times[] PROGMEM = {
	50, 50,
	50, 99,
	50, 251,
	50, 252,
	50, 1449,
	50, 11014,
	102, 49,
	102, 98,
};
*/
const struct IrCode code_eu130Code PROGMEM = {
	freq_to_timerval(38462),
	45,		// # of pairs
	3,		// # of bits per index
	code_eu129Times,  
	{
		0x47,
		0x00,
		0x00,
		0x00,
		0x00,
		0x00,
		0x8C,
		0x8C,
		0x40,
		0x03,
		0xE3,
		0xEB,
		0x23,
		0x10,
		0x00,
		0xF8,
		0xF4,
	}
};
const uint16_t code_eu131Times[] PROGMEM = {
	14, 491,
	14, 743,
	14, 4170,
};
const struct IrCode code_eu131Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu131Times,  
	{
		0x55,
		0x55,
		0x42,
		0x55,
		0x55,
		0x41,
	}
};

/* Duplicate timing table, same as eu069 !
const uint16_t code_eu132Times[] PROGMEM = {
	4, 499,
	4, 750,
	4, 4999,
};
*/
const struct IrCode code_eu132Code PROGMEM = {
	0,              // Non-pulsed code
	23,		// # of pairs
	2,		// # of bits per index
	code_eu069Times,  
	{
		0x05,
		0x50,
		0x06,
		0x05,
		0x50,
		0x04,
	}
};

/* Duplicate timing table, same as eu071 !
const uint16_t code_eu133Times[] PROGMEM = {
	14, 491,
	14, 743,
	14, 4422,
};
*/
const struct IrCode code_eu133Code PROGMEM = {
	freq_to_timerval(38462),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu071Times,  
	{
		0x55,
		0x54,
		0x12,
		0x55,
		0x54,
		0x11,
	}
};
const uint16_t code_eu134Times[] PROGMEM = {
	13, 490,
	13, 741,
	13, 742,
	13, 5939,
};
const struct IrCode code_eu134Code PROGMEM = {
	freq_to_timerval(40000),
	24,		// # of pairs
	2,		// # of bits per index
	code_eu134Times,  
	{
		0x40,
		0x0A,
		0x83,
		0x80,
		0x0A,
		0x81,
	}
};
const uint16_t code_eu135Times[] PROGMEM = {
	6, 566,
	6, 851,
	6, 5188,
};
const struct IrCode code_eu135Code PROGMEM = {
	0,              // Non-pulsed code
	23,		// # of pairs
	2,		// # of bits per index
	code_eu135Times,  
	{
		0x54,
		0x45,
		0x46,
		0x54,
		0x45,
		0x44,
	}
};

/* Duplicate timing table, same as na004 !
const uint16_t code_eu136Times[] PROGMEM = {
	55, 57,
	55, 170,
	55, 3949,
	55, 9623,
	56, 0,
	898, 453,
	900, 226,
};
*/
const struct IrCode code_eu136Code PROGMEM = {
	freq_to_timerval(38462),
	38,		// # of pairs
	3,		// # of bits per index
	code_na004Times,  
	{
		0xA0,
		0x00,
		0x00,
		0x04,
		0x92,
		0x49,
		0x24,
		0x00,
		0x00,
		0x00,
		0x92,
		0x49,
		0x2B,
		0x3D,
		0x00,
	}
};
const uint16_t code_eu137Times[] PROGMEM = {
	86, 91,
	87, 90,
	87, 180,
	87, 8868,
	88, 0,
	174, 90,
};
const struct IrCode code_eu137Code PROGMEM = {
	freq_to_timerval(35714),
	22,		// # of pairs
	3,		// # of bits per index
	code_eu137Times,  
	{
		0x14,
		0x95,
		0x4A,
		0x35,
		0x9A,
		0x4A,
		0xA5,
		0x1B,
		0x00,
	}
};
const uint16_t code_eu138Times[] PROGMEM = {
	4, 1036,
	4, 1507,
	4, 3005,
};
const struct IrCode code_eu138Code PROGMEM = {
	0,              // Non-pulsed code
	11,		// # of pairs
	2,		// # of bits per index
	code_eu138Times,  
	{
		0x05,
		0x60,
		0x54,
	}
};

const uint16_t code_eu139Times[] PROGMEM = {
	0, 0,
	14, 141,
	14, 452,
	14, 607,
	14, 6310,
};
const struct IrCode code_eu139Code PROGMEM = {
	0,              // Non-pulsed code
	30,		// # of pairs
	3,		// # of bits per index
	code_eu139Times,  
	{
		0x64,
		0x92,
		0x4A,
		0x24,
		0x92,
		0xE3,
		0x24,
		0x92,
		0x51,
		0x24,
		0x96,
		0x00,
	}
};

#endif
#endif

////////////////////////////////////////////////////////////////


const struct IrCode *NApowerCodes[] PROGMEM = {
#ifdef NA_CODES
	&code_na000Code,
	&code_na001Code,
       	&code_na002Code,
	&code_na003Code,
	&code_na004Code,
	&code_na005Code,
	&code_na006Code,
	&code_na007Code,
	&code_na008Code,
	&code_na009Code,
	&code_na010Code,
	&code_na011Code,
	&code_na012Code,
	&code_na013Code,
	&code_na014Code,
	&code_na015Code,
	&code_na016Code,
	&code_na017Code,
	&code_na018Code,
	&code_na019Code,
	&code_na020Code,
	&code_na021Code,
	&code_na022Code,
	&code_na023Code,
	&code_na024Code,
	&code_na025Code,
	&code_na026Code,
	&code_na027Code,
	&code_na028Code,
	&code_na029Code,
	&code_na030Code,
	&code_na031Code,
	&code_na032Code,
	&code_na033Code,
	&code_na034Code,
	&code_na035Code,
	&code_na036Code,
	&code_na037Code,
	&code_na038Code,
	&code_na039Code,
	&code_na040Code,
	&code_na041Code,
	&code_na042Code,
	&code_na043Code,
	&code_na044Code,
	&code_na045Code,
	&code_na046Code,
	&code_na047Code,
	&code_na048Code,
	&code_na049Code,
	&code_na050Code,
	&code_na051Code,
	&code_na052Code,
	&code_na053Code,
	&code_na054Code,
	&code_na055Code,
	&code_na056Code,
	&code_na057Code,
	&code_na058Code,
	&code_na059Code,
	&code_na060Code,
	&code_na061Code,
	&code_na062Code,
	&code_na063Code,
	&code_na064Code,
	&code_na065Code,
	&code_na066Code,
	&code_na067Code,
	&code_na068Code,
	&code_na069Code,
	&code_na070Code,
	&code_na071Code,
	&code_na072Code,
	&code_na073Code,
	&code_na074Code,
	&code_na075Code,
	&code_na076Code,
	&code_na077Code,
	&code_na078Code,
	&code_na079Code,
	&code_na080Code,
	&code_na081Code,
	&code_na082Code,
	&code_na083Code,
	&code_na084Code,
	&code_na085Code,
	&code_na086Code,
	&code_na087Code,
	&code_na088Code,
	&code_na089Code,
	&code_na090Code,
	&code_na091Code,
	&code_na092Code,
	&code_na093Code,
	&code_na094Code,
	&code_na095Code,
	&code_na096Code,
	&code_na097Code,
	&code_na098Code,
	&code_na099Code,
	&code_na100Code,
	&code_na101Code,
	&code_na102Code,
	&code_na103Code,
	&code_na104Code,
	&code_na105Code,
	&code_na106Code,
	&code_na107Code,
	&code_na108Code,
	&code_na109Code,
	&code_na110Code,
	&code_na111Code,
	&code_na112Code,
	&code_na113Code,
	&code_na114Code,
#ifndef EU_CODES
	&code_na115Code,
	&code_na116Code,
	&code_na117Code,
	&code_na118Code,
	&code_na119Code,
	&code_na120Code,
	&code_na121Code,	
	&code_na122Code,
	&code_na123Code,
	&code_na124Code,
	&code_na125Code,
	&code_na126Code,
	&code_na127Code,
	&code_na128Code,
	&code_na129Code,
	&code_na130Code,
	&code_na131Code,
	&code_na132Code,
	&code_na133Code,
	&code_na134Code,
	&code_na135Code,
	&code_na136Code,
#endif
#endif
}; 

const struct IrCode *EUpowerCodes[] PROGMEM = {
#ifdef EU_CODES
        &code_eu000Code,
	&code_eu001Code,
	&code_eu002Code,
	&code_na000Code, // same as &code_eu003Code
	&code_eu004Code,
	&code_eu005Code,
	&code_eu006Code,
	&code_eu007Code,
	&code_eu008Code,
	&code_na005Code, // same as &code_eu009Code
	&code_na004Code, // same as &code_eu010Code
	&code_eu011Code,
	&code_eu012Code,
	&code_eu013Code,
	&code_na021Code, // same as &code_eu014Code
	&code_eu015Code,
	&code_eu016Code,
	&code_eu017Code,
	&code_eu018Code,
	&code_eu019Code,
	&code_eu020Code,
	&code_eu021Code,
	&code_eu022Code,
	&code_na022Code, // same as &code_eu023Code
	&code_eu024Code,
	&code_eu025Code,
	&code_eu026Code,
	&code_eu027Code,
	&code_eu028Code,
	&code_eu029Code,
	&code_eu030Code,
	&code_eu031Code,
	&code_eu032Code,
	&code_eu033Code,
	&code_eu034Code,
	//&code_eu035Code, same as eu009
	&code_eu036Code,
	&code_eu037Code,
	&code_eu038Code,
	&code_eu039Code,
	&code_eu040Code,
	&code_eu041Code,
	&code_eu042Code,
	&code_eu043Code,
	&code_eu044Code,
	&code_eu045Code,
	&code_eu046Code,
	&code_eu047Code,
	&code_eu048Code,
	&code_eu049Code,
	&code_eu050Code,
	&code_eu051Code,
	&code_eu052Code,
	&code_eu053Code,
	&code_eu054Code,
	&code_eu055Code,
	&code_eu056Code,
	//&code_eu057Code, same as eu008
	&code_eu058Code,
	&code_eu059Code,
	&code_eu060Code,
	&code_eu061Code,
	&code_eu062Code,
	&code_eu063Code,
	&code_eu064Code,
	&code_eu065Code,
	&code_eu066Code,
	&code_eu067Code,
	&code_eu068Code,
	&code_eu069Code,
	&code_eu070Code,
	&code_eu071Code,
	&code_eu072Code,
	&code_eu073Code,
	&code_eu074Code,
	&code_eu075Code,
	&code_eu076Code,
	&code_eu077Code,
	&code_eu078Code,
	&code_eu079Code,
	&code_eu080Code,
	&code_eu081Code,
	&code_eu082Code,
	&code_eu083Code,
	&code_eu084Code,
	&code_eu085Code,
	&code_eu086Code,
	&code_eu087Code,
	&code_eu088Code,
	&code_eu089Code,
	&code_eu090Code,
	&code_eu091Code,
	&code_eu092Code,
	&code_eu093Code,
	&code_eu094Code,
	&code_eu095Code,
	&code_eu096Code,
	&code_eu097Code,
	&code_eu098Code,
	&code_eu099Code,
	&code_eu100Code,
	&code_eu101Code,
	&code_eu102Code,
	&code_eu103Code,
	&code_eu104Code,
	&code_eu105Code,
	&code_eu106Code,
	&code_eu107Code,
	&code_eu108Code,
	&code_eu109Code,
	&code_eu110Code,
	&code_eu111Code,
	&code_eu112Code,
	&code_eu113Code,
	&code_eu114Code,
#ifndef NA_CODES
	&code_eu115Code,
	&code_eu116Code,
	&code_eu117Code,
	&code_eu118Code,
	&code_eu119Code,
	&code_eu120Code,
	&code_eu121Code,
	&code_eu122Code,
	&code_eu123Code,
	&code_eu124Code,
	&code_eu125Code,
	&code_eu126Code,
	&code_eu127Code,
	&code_eu128Code,
	&code_eu129Code,
	&code_eu130Code,
	&code_eu131Code,
	&code_eu132Code,
	&code_eu133Code,
	&code_eu134Code,
	&code_eu135Code,
	&code_eu136Code,
	&code_eu137Code,
	&code_eu138Code,
	&code_eu139Code,
#endif
#endif
};

const uint8_t num_NAcodes = NUM_ELEM(NApowerCodes);
const uint8_t num_EUcodes = NUM_ELEM(EUpowerCodes);

