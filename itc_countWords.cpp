#include "middle_str.h"

int itc_countWords(string str)
{
    if (str == "")
        return 0;
    str += " ";
    bool flag = false;
    int counter = 0;
    int lenght = itc_len(str);
    for (int i = 1; i < lenght; i++)
    {
        if (str[i] == ' ' && (str[i - 1] >= 'a' && str[i - 1] <= 'z' || str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
        {
            if (!flag)
                counter++;
            flag = false;
        }
        else
        {
            if (!(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'))
                flag = true;
        }
    }
    return counter;
}
