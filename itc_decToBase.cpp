#include "middle_str.h"

string itc_rev_str(string str)
{
	string res = "";
	int lenght = itc_len(str);
	for (int i = lenght - 1; i >= 0; i--)
		res += str[i];
	return res;
}

string itc_decToBase(int num, int base)
{
	string res = "";
	string chars = "0123456789ABCDEF";
	if (num == 0)
		res = "0";
	while (num != 0)
	{
		res += chars[num % base];
		num /= base;
	}
	res = itc_rev_str(res);
	return res;
}
