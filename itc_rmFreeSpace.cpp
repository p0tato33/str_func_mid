#include "middle_str.h"

string itc_rmFreeSpace(string str) {
    long long lenght = itc_len(str);
    string ans;
    for (int i = 0; i < lenght; i++) {
        if (str[i] != ' ' and str[i + 1] != ' ') {
            ans += str[i];
        }
        if (str[i + 1] == ' ' and str[i] != ' ') {
            ans += str[i];
            ans += ' ';
        }
    }
    int lenght2 = itc_len(ans);
    if (ans[lenght2 - 1] == ' ') {
        return itc_slice_str(ans, 0, itc_len(ans) - 2);
    }
    return ans;
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
