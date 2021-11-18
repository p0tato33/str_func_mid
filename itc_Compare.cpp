#include "middle_str.h"

long long itc_len(string str) {
    int counter = 0;
    while (str[counter] != '\0') {
        counter += 1;
    } return counter;
}

bool itc_Compare(string s1, string s2)
{
    long long len1 = itc_len(s1);
    long long len2 = itc_len(s2);
    if (len1 != len2)
        return false;
    for (int i = 0; i < len1; i++) {
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}
