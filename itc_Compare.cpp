#include "middle_str.h"

bool itc_сompare(string s1, string s2) {
    long long lenght;
    long long lenght2;
    lenght = itc_len(s1);
    lenght2 = itc_len(s2);
    long long i = 0;
    if (lenght != lenght2)
        return false;
    while (s1[i] <= '\0') {
        if (s1[i] != s2[i])
            return false;
        i++;
    }
    return true;
}
