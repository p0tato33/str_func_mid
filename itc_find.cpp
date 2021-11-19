#include "middle_str.h"

int itc_find_str(string str1, string str2)
{
    long long n = 0;
    long long lenght1 = itc_len(str1);
    long long lenght2 = itc_len(str2);
    long long presv = -1;
    for (int i = 0; i < lenght1; i++) {
        if (str1[i] == str2[0]) {
            presv = i;
            for (int j = 0; j < lenght2; j++) {
                if (str1[j + i] == str2[n]) {
                    n++;
                }
                else {
                    n = 0;
                    break;
                }
            }
        }
        if (n == lenght2) {
            break;
        }
    }
    return(presv);
}
