//
// Created by Володя on 05.06.2024.
//

#include "Money.h"

Money::Money(double value, const MoneyUnit &unit) : unit(unit) {
    Money::value = unit.ToBase(value);
}

std::ostream &operator<<(std::ostream &os, const Money &money) {
    os << money.ToString();
    return os;
}

std::string Money::ToString() const {
    return unit.Format(value);
}

bool Money::Equals(Money other) const {
    return value == other.value;
}

bool Money::SemiEquals(Money other) const {
    return value == 0 || Equals(other);
}
