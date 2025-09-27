#include "chek_number.h"
#include <string>
#include <vector>
#include <cmath>

int eliminate_unset_bits(const std::string& n) {
    std::string new_bit;
    for (char i : n) {
        if (i == '1') {
            new_bit += i;
        }
    }
    int new_10;
    if (new_bit.empty()) {
        new_10 = 0;
        return new_10;
    }

    new_10 = 0;
    int s = 0;
    for (char i : new_bit) {
        new_10 += std::pow(2, s);
        s++;
    }
    return new_10;
}