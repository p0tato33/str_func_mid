#include "middle_str.h"

int itc_len(string str)
{
	if (str == "")
		return 0;
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
