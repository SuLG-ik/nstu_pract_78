//
// Created by Володя on 07.05.2024.
//

#include "Laptop.h"
#include "utils.h"

bool Laptop::Similar(const Laptop &laptop) const {
    return FirstEmptyOrEquals(model, laptop.model) &&
           price.SemiEquals(laptop.price) && spec.Similar(laptop.spec);
}

Laptop::Laptop(const string &model, const Money &price, const LaptopSpec &spec) : model(model), price(price),
                                                                                  spec(spec) {}

const string &Laptop::getModel() const {
    return model;
}

const Money &Laptop::getPrice() const {
    return price;
}

const LaptopSpec &Laptop::getSpec() const {
    return spec;
}

ostream &operator<<(ostream &os, const Laptop &laptop) {
    os << "model: " << laptop.model << " price: " << laptop.price << " spec: " << laptop.spec;
    return os;
}

void Laptop::setPrice(const Money &price) {
    Laptop::price = price;
}
