//
// Created by Володя on 07.05.2024.
//

#include "Smartphone.h"
#include "utils.h"

bool Smartphone::Similar(const Smartphone &smartphone) const {
    return FirstEmptyOrEquals(model, smartphone.model) &&
           EqualsOrUndefined(manufacturer, smartphone.manufacturer) &&
           EqualsOrUndefined(color, smartphone.color) &&
           FirstZeroOrEquals(displaySize, smartphone.displaySize) &&
           FirstZeroOrEquals(ram, smartphone.ram) &&
           FirstZeroOrEquals(storage, smartphone.storage) &&
           EqualsOrUndefined(cpu, smartphone.cpu) &&
           EqualsOrUndefined(os, smartphone.os) &&
           price.SemiEquals(smartphone.price);
}

const string &Smartphone::getModel() const {
    return model;
}

Manufacturer Smartphone::getManufacturer() const {
    return manufacturer;
}

Color Smartphone::getColor() const {
    return color;
}

float Smartphone::getDisplay() const {
    return displaySize;
}

int Smartphone::getRAM() const {
    return ram;
}

int Smartphone::getStorage() const {
    return storage;
}

CPU Smartphone::getCPU() const {
    return cpu;
}

OS Smartphone::getOS() const {
    return os;
}

ostream &operator<<(ostream &os, const Smartphone &smartphone) {
    os << "model: " << smartphone.model << " manufacturer: " << smartphone.manufacturer << " color: "
       << smartphone.color << " displaySize: " << smartphone.displaySize << " ram: " << smartphone.ram << " storage: "
       << smartphone.storage << " cpu: " << smartphone.cpu << " os: " << smartphone.os << " price: "
       << smartphone.price;
    return os;
}

Smartphone::Smartphone(const string &model, Manufacturer manufacturer, Color color, float displaySize, int ram,
                       int storage, CPU cpu, OS os, const Money &price) : model(model), manufacturer(manufacturer),
                                                                          color(color), displaySize(displaySize),
                                                                          ram(ram), storage(storage), cpu(cpu), os(os),
                                                                          price(price) {}

const Money &Smartphone::getPrice() const {
    return price;
}

void Smartphone::setPrice(const Money &price) {
    Smartphone::price = price;
}
