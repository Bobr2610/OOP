#include <iostream>
#include <string>
#include <vector>
#include "chek_number.h"

int main() {
    std::string n;
    std::cout << "Enter number: ";
    std::cin >> n;
    int answ = eliminate_unset_bits(n);
    std::cout << answ << std::endl;
    return 0;
}
