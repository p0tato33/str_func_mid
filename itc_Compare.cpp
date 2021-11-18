#include "middle_str.h"

long long itc_len(string str) {
    int counter = 0;
    while (str[counter] != '\0') {
        counter += 1;
    } return counter;
}

bool itc_compare(string s1, string s2)
{
	long long lenght = itc_len(s1);
	bool ans = (lenght == itc_len(s2));
	if (ans == false) {
		return ans;
	}
	for (int i = 0; i < lenght; i++) {
		ans = (s1[i] == s2[i]);
		if (ans == false) {
			return ans;
		}
	}
	return ans;
}
