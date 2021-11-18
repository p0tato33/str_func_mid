#include "middle_str.h"

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
}

bool itc_isFirstInSecond(string s1, string s2){
    for(int i = 0; itc_len(itc_slice_str(s2, i, i + itc_len(s1) - 1)) == itc_len(s1); i++){
        if(itc_slice_str(s2, i, i + itc_len(s1) - 1) == s1) return true;
    }
    return false;
}
