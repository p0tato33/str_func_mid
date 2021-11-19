#include "middle_str.h"

string itc_slice_str(string str, int start, int end) {
    long long len = itc_len(str);
    if (start > end)
        return str;
    if (end >= len) {
        end = len - 1;
    }string ans = "";
    for (long long i = start; i <= end && i < len; i++) {
        ans += str[i];
    }
    return ans;
}
