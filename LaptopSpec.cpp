//
// Created by Володя on 05.06.2024.
//

#include "LaptopSpec.h"
#include "utils.h"

LaptopSpec::LaptopSpec(Manufacturer manufacturer, Color color, float displaySize, int ram, int storage, CPU cpu, OS os)
        : manufacturer(manufacturer), color(color), displaySize(displaySize), ram(ram), storage(storage), cpu(cpu),
          os(os) {}

std::ostream &operator<<(std::ostream &os, const LaptopSpec &spec) {
    os << "manufacturer: " << spec.manufacturer << " color: " << spec.color << " displaySize: " << spec.displaySize
       << " ram: " << spec.ram << " storage: " << spec.storage << " cpu: " << spec.cpu << " os: " << spec.os;
    return os;
}

bool LaptopSpec::Similar(const LaptopSpec &laptop) const {
    return EqualsOrUndefined(manufacturer, laptop.manufacturer) &&
            EqualsOrUndefined(color, laptop.color) &&
            FirstZeroOrEquals(displaySize, laptop.displaySize) &&
            FirstZeroOrEquals(ram, laptop.ram) &&
            FirstZeroOrEquals(storage, laptop.storage) &&
            EqualsOrUndefined(cpu, laptop.cpu) &&
            EqualsOrUndefined(os, laptop.os);
}
