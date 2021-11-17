#include "middle_str.h"

unsigned char itc_toUpper(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return c;
}
