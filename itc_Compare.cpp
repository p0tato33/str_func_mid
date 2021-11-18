#include "middle_str.h"

long long itc_len(string str) {
    int counter = 0;
    while (str[counter] != '\0') {
        counter += 1;
    } return counter;
}

bool itc_compare(string s1, string s2) {
    if (itc_len(s1) != itc_len(s2) || s1 == "" || s2 == "") return false;
    for (long long i = 0; i != itc_len(s1) - 1; i++) if (s1[i] != s2[i]) return false;
    return true;
}
