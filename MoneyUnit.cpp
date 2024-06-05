//
// Created by Володя on 05.06.2024.
//

#include "MoneyUnit.h"


double MoneyUnit::Convert(int value) const {
    return value * multiplier;
}

std::string MoneyUnit::Format(int value) const {
    return std::to_string(Convert(value)) + " " + getCode();
}

const std::string &MoneyUnit::getCode() const {
    return code;
}

int MoneyUnit::ToBase(double value) const {
    return (int) (value / multiplier);
}

MoneyUnit::MoneyUnit(double multiplier, const std::string &code) : multiplier(multiplier),
                                                                                       code(code) {}