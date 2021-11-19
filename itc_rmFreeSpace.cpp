#include "middle_str.h"

string itc_rmFreeSpace(string str) {
    if (itc_len(str) == 0) return "";
    string sp = "";
    string res = "";
    bool flag2 = false;
    bool flag = false;
    for (long long i = 0; i < itc_len(str); i++) {
        if (str[0] == ' ' && !flag) {
            while (str[i] == ' ') {
                i++;
            }
            flag = true;
        }
        if (str[i] == ' ' && !flag2) {
            flag2 = true;
            sp += ' ';
        }
        if (flag2 && str[i] != ' ') flag2 = false;
        if (!flag2) sp += str[i];
    }
    if (sp[itc_len(sp) - 1] == ' ') {
        for (long long i = 0; i < itc_len(sp) - 1; i++) res += sp[i];
    }
    else res = sp;
    return res;
}
