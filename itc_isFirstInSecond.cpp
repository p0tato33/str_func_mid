#include "middle_str.h"

bool itc_isFirstInSecond(string s1, string s2)  //вообще не поянтно что за тест который рушит
{
    if (s1 == "") return true;
    if (s2 == "") return false;
    return (itc_find_str(s2, s1) != -1);
}
