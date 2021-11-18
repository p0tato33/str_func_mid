#include "middle_str.h"
long long itc_len(string str) {
    int counter = 0;
    while (str[counter] != '\0') {
        counter += 1;
    } return counter;
}
