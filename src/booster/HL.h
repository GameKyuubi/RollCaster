#ifndef TH075BOOSTER_HL
#define TH075BOOSTER_HL

#include "windows.h"

void FloatHL(BYTE*, int, int);//加算減算	//(浮かばせる・沈める感じに近い)
void FloatH(BYTE*, int);
void FloatL(BYTE*, int);
BYTE GetH(BYTE*);			//返す
BYTE GetL(BYTE*);
void SetH(BYTE*, BYTE);
void SetL(BYTE*, BYTE);

#endif
