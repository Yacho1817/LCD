#ifndef LCD2004A_H
#define lcd2004a
#include <stdint.h>


void inputLCD(int, int, int, int, int, int, int, int, int, int);
void clearDisplay();
void CursorHome();
void entryModeSet(int, int);
void lcdInitialize();
void DOCShift(int, int);
int SetCursor(int, int);


#endif