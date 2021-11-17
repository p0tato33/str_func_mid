#include "middle_str.h"

bool itc_isFirstInSecond(string s1, string s2)
{
    long long length = 0;
    bool flag = false;
    for (long long i = 0; s2[i] != '\0'; i++)
    {
        if (s1[length] == s2[i])
        {
            length++;
        }
        else
        {
            flag = (length == itc_len(s1));
            length = 0;
        }
    }
    flag = (length == itc_len(s1));
    return flag;
}
