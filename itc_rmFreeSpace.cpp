#include "middle_str.h"

string itc_rmFreeSpace(string str) {
    if (itc_len(str) == 0) return "";
    string space = "";
    string res = "";
    bool flag = false;
    for (long long i = 0; i <= itc_len(str); i++) {
        if (str[i] == ' ' && !flag) {
            flag = true;
            space += ' ';
        }
        if (flag && str[i] != ' ') flag = false;
        if (!flag) space += str[i];
    }
    if (space[itc_len(space) - 1] = ' ') {
        for (long long i = 0; i < itc_len(space) - 1; i++) res += space[i];
    }
    return res;
}
