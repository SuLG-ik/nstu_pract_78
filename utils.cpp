//
// Created by Володя on 07.05.2024.
//


#include "utils.h"

bool FirstEmptyOrEquals(const std::string &first, const std::string &second) {
    std::string a, b;
    std::transform(first.begin(), first.end(), a.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    std::transform(second.begin(), second.end(), b.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    return a.empty() || a == b;
}

bool FirstZeroOrEquals(int first, int second) {
    return first == 0 || first == second;
}

bool FirstZeroOrEquals(double first, double second) {
    return first == 0 || first == second;
}