#include <iostream>
#include <string>
#include <vector>
#include "chek_number.h"

int main() {
    std::string d;
    int n;

    std::cout << "Enter day ";
    std::cin >> d;

    
    std::cout << "Enter number";
    if (!(std::cin >> n)) {
        std::cerr << "Schizophrenia!" << std::endl;
        return 1;
    }
// Да она так и пишется
    bool s = isSchizophrenia(d, n);
        if (s) {
        std::cout << "Yes You are Psyho " << n << " on " << d << std::endl;
    } else {
        std::cout << "No You are`t Psyho " << n << " on " << d << std::endl;
    }
    return 0;
}
