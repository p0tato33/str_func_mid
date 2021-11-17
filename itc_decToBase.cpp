#include "middle_str.h"

string itc_decToBase(int num, int base) {
    string chars = "0123456789ABCDEF";
    string res = "";
    if (num < 0) {
        res = "-";
        num *= (-1);
    }
    while (num > 0) {
        res += chars[num % base];
        num /= base;
    }
    return res;
}
