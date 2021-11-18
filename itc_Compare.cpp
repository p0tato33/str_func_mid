#include "middle_str.h"

bool itc_compare(string s1, string s2)
{
    if (s1 == "" || s2 == "")
        return false;
    long long lenght = itc_len(s1);
    long long length2 = itc_len(s2);
    if (lenght != length2)
        return false;
    for (int i = 0; i < lenght; i++) {
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}
