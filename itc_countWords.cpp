#include "middle_str.h"
int itc_countWords(string str)
{
	long long s1 = itc_len(str);
	long long counter = 1;
	for (int i = 0; i < s1; i++) {
		if (str[i] == ' ') {
			counter++;
		}
	}
	return counter;
}
