#include <iostream>

#pragma once

#define MONEY_UNIT_RUB MoneyUnit(0.01, "RUB")
#define MONEY_UNIT_USD MoneyUnit(1.1, "USD")
#define MONEY_UNIT_EUR MoneyUnit(1, "EUR")

class MoneyUnit {

    double multiplier;
    std::string code;
public:
    MoneyUnit(double multiplier = 1, const std::string &code = "undefined");
    virtual int ToBase(double value) const;

    virtual double Convert(int value) const;

    virtual std::string Format(int value) const;

    virtual const std::string &getCode() const;
};