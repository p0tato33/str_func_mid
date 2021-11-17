#include "middle_str.h"

string itc_Cezar(string str, int k)
{
	string res = "";
	int lenght = itc_len(str);
	for (int i = 0; i < lenght; i++)
	{
		char shift = ' ';
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] + k < 'a')
				shift = str[i] + k + ('z' - 'a' + 1);
			else
				shift = str[i] + k;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] + k < 'A')
				shift = str[i] + k + ('Z' - 'A' + 1);
			else
				shift = str[i] + k;
		}
		res += shift;
	}
	return res;
}
