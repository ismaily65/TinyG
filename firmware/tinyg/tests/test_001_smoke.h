/* 
 * test_002_smoke.h 
 *
 * Notes:
 *	  -	The character array should be derived from the filename (by convention)
 *	  - Comments are not allowed in the char array, but gcode comments are OK e.g. (g0 test)
 */
const char PROGMEM test_smoke[] = "\
(MSG**** Smoke Test [v1] ****)\n\
G00 G17 G21 G40 G49 G80 G90\n\
g0x0y0z0\n\
g00 x40\n\
x0\n\
y40\n\
y0\n\
z40\n\
z0\n\
a40\n\
a0\n\
G00 x40 y40 z40 a40\n\
G00 x0 y0 z0 a0\n\
G01 f200 x10 y10 z10 a10\n\
x0 y0 z0 a0\n\
G02 f10000 x0 y0 z40 i27 j27\n\
G03 f10000 x0 y0 z0 i27 j27\n\
g0x0y0z0\n\
m3g4p1\n\
m5g4p1\n\
m4g4p1\n\
m3g4p1\n\
m5g4p1\n\
m7g4p1\n\
m9g4p1\n\
m8g4p1\n\
m9\n\
g0x1\n\
g0x0\n\
m2";
