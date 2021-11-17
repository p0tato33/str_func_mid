#include "middle_str.h"

unsigned char itc_changeCase(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
		c = itc_toUpper(c);
	else if (c >= 'A' && c <= 'Z')
		c += 32;
	return c;
}
