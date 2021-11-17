#include "middle_str.h"

string itc_maxCharWord(string str)
{
	str += " ";
	if (itc_countWords(str) == 1)
		return "error";
	int maxx = 0;
	int max1 = 0;
	int lenght = itc_len(str);
	string str2 = "";
	string res = "";
	for (int i = 0; i < lenght; i++)
	{
		if (str[i] == ' ')
		{
			if (max1 > maxx)
			{
				maxx = max1;
				max1 = 0;
				res = str2;
			}
			str2 = "";
		}
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
			{
				max1++;
				str2 += str[i];
			}
		}
	}
	return res;
}
