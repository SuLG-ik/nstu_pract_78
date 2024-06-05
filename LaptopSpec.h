//
// Created by Володя on 05.06.2024.
//

#pragma once

#include <ostream>
#include "Params.h"

class LaptopSpec {
    Manufacturer manufacturer;
    Color color;
    float displaySize;
    int ram, storage;
    CPU cpu;
    OS os;

public:
    LaptopSpec(Manufacturer manufacturer = Manufacturer::UNDEFINED,
               Color color = Color::UNDEFINED, float displaySize = 0, int ram = 0,
               int storage = 0,
               CPU cpu = CPU::UNDEFINED, OS os = OS::UNDEFINED);

    bool Similar(const LaptopSpec &laptop) const;

    friend std::ostream &operator<<(std::ostream &os, const LaptopSpec &spec);
};