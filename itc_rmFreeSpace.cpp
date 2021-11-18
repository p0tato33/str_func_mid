#include "middle_str.h"

string itc_rmFreeSpace(string str) {
    long long i = 0;
    string new_str = "";
    while (str[i] != '\0') {
        if ((str[i] == 32 && str[i - 1] != 32) || str[i] < 32 || str[i] > 32)
            new_str += str[i];
        i++;
    }
    if (new_str[0] == 32)
        new_str = itc_slice_str(new_str, 1, itc_len(new_str) - 1);

    if ((new_str[itc_len(new_str) - 1]) == 32)
        new_str = itc_slice_str(new_str, 0, itc_len(new_str) - 2);

    return new_str;
}
string itc_slice_str(string str, int start, int end) {
	long long len = itc_len(str);
	if (start > end)
		return str;
	if (end >= len){ 
		end = len - 1;
  }string ans = "";
	for(long long i = start; i <= end && i < len; i++) {
		ans += str[i];
	}
	return ans;
