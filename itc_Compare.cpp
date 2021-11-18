#include "middle_str.h"

bool itc_compare(string s1, string s2) {
    unsigned long long size1 = itc_len(s1);
    unsigned long long size2 = itc_len(s2);
    if(size1 != size2 || size1 == 0 || size2 == 0)return 0;
    for(unsigned long long i = 0;i < size1;i++)if(s1[i]!=s2[i])return 0;
    return 1;
}
