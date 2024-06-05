//
// Created by Володя on 05.06.2024.
//
#pragma once

#include <ostream>
#include "MoneyUnit.h"

class Money {
    int value;
    MoneyUnit unit;
public:
    bool Equals(Money other) const;

    Money(double value = 0.0, const MoneyUnit &unit = MoneyUnit());

    std::string ToString() const;

    friend std::ostream &operator<<(std::ostream &os, const Money &money);

    bool SemiEquals(Money other) const;
};

