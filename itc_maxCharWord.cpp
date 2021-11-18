#include "middle_str.h"

string itc_maxCharWord(string str)
{
    int i = 0;
    int counter = 0;
    string word;
    string ans;
    string str1 = "";
    bool flag = true;
    str += ' ';
    while (str[i] != '\0') {
        if (str[i] == ' ')
            counter++;
        i++;
    }
    i = 0;
    if (counter < 2)
        return "error";
    while (str[i] != '\0') {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) && flag == true) {
            str1 += str[i];
        }
        else if (str[i] == ' ') {
            if (flag == true) {
                word = str1;
                str1 = "";
            }
            else
                flag = true;
        }
        else {
            str1 = "";
            flag = false;
        }
        if (itc_len(word) > itc_len(ans))
            ans = word;
        i++;
    }
    if (ans == "")
        return "error";
    return ans;
}
