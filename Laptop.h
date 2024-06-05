#pragma once

#include <string>
#include <ostream>
#include "Params.h"
#include "Money.h"
#include "LaptopSpec.h"


using namespace std;

class Laptop {
private:
    string model;
    Money price;
    LaptopSpec spec;
public:
    Laptop(const string &model = "", const Money &price = Money(), const LaptopSpec &spec = LaptopSpec());

    bool Similar(const Laptop &laptop) const;

    const string &getModel() const;

    const Money &getPrice() const;

    const LaptopSpec &getSpec() const;

    void setPrice(const Money &price);

    friend ostream &operator<<(ostream &os, const Laptop &laptop);
};