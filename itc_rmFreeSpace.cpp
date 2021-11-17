#include "middle_str.h"

string itc_rmFreeSpace(string str)
{
    string w1 = "";
    string w2 = "";
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            w2 += str[i];
        }
        else
        {
            if (w2 != "")
                w2 = " ";
            w1 += w2;
            w2 = "";
            w1 += str[i];
        }
    }
    return w1;
}
