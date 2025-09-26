#include "chek_number.h"

bool isSchizophrenia(const std::string& d, int n) {
    if (d == "Понедельник") {
        return n == 12;
    }
    if (d == "Вторник") {
        return n > 95;
    }
    if (d == "Среда") {
        return n == 34;
    }
    if (d == "Четверг") {
        return n == 0;
    }
    if (d == "Пятница") {
        return n % 2 == 0;
    }
    if (d == "Суббота") {
        return n == 56;
    }
    if (d == "Воскресенье") {
        return n == 666 || n == -666;
    }
    return false;
}