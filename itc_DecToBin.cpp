#include "middle_str.h"

string itc_DecToBin(string str)
{
	string res = "";
	int lenght = itc_len(str);
	int num = 0;
	for (int i = 0; i < lenght; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num *= 10;
			num += str[i] - '0';
		}
		else
		{
			if (i > 0 && str[i - 1] >= '0' && str[i - 1] <= '9')
			{
				res += itc_decToBase(num, 2);
				num = 0;
			}
			res += str[i];
		}
	}
	if (lenght > 0 && str[lenght - 1] >= '0' && str[lenght - 1] <= '9')
		res += itc_decToBase(num, 2);
	return res;
}
