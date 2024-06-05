//
// Created by Володя on 05.06.2024.
//

#include "Params.h"

#include <iostream>

std::ostream &operator<<(std::ostream &out, CPU cpu) {
    out << ToString(cpu);
    return out;
}

std::ostream &operator<<(std::ostream &out, OS os) {
    out << ToString(os);
    return out;
}

std::ostream &operator<<(std::ostream &out, Manufacturer manufacturer) {
    out << ToString(manufacturer);
    return out;
}

std::ostream &operator<<(std::ostream &out, Color color) {
    out << ToString(color);
    return out;
}

std::string ToString(CPU cpu) {
    switch (cpu) {
        case CPU::SNAPDRAGON:
            return "Snapdragon";
        case CPU::APPLE:
            return "Apple";
        case CPU::UNDEFINED:
            return "undefined";
        case CPU::Mediatek:
            return "Mediatek";
    }
    throw std::runtime_error("No such CPU ToString declaration");
}

std::string ToString(OS os) {
    switch (os) {
        case OS::ANDROID:
            return "Android";
        case OS::IOS:
            return "IOS";
        case OS::UNDEFINED:
            return "undefined";
        case OS::Avrora:
            return "Avrora";
    }
    throw std::runtime_error("No such OS ToString declaration");
}

std::string ToString(Color color) {
    switch (color) {
        case Color::WHITE:
            return "white";
        case Color::GRAY:
            return "gray";
        case Color::BLACK:
            return "black";
        case Color::BLUE:
            return "blue";
        case Color::RED:
            return "red";
        case Color::GOLD:
            return "gold";
        case Color::UNDEFINED:
            return "undefined";
    }
    throw std::runtime_error("No such Color ToString declaration");
}

std::string ToString(Manufacturer manufacturer) {
    switch (manufacturer) {
        case Manufacturer::APPLE:
            return "Apple";
        case Manufacturer::SAMSUNG:
            return "Samsung";
        case Manufacturer::XIAOMI:
            return "Xiaomi";
        case Manufacturer::HTC:
            return "HTC";
        case Manufacturer::UNDEFINED:
            return "undefined";
    }
    throw std::runtime_error("No such Manufacturer ToString declaration");
}

bool EqualsOrUndefined(Manufacturer first, Manufacturer second) {
    return first == Manufacturer::UNDEFINED || second == Manufacturer::UNDEFINED || first == second;
}

bool EqualsOrUndefined(Color first, Color second) {
    return first == Color::UNDEFINED || second == Color::UNDEFINED || first == second;
}

bool EqualsOrUndefined(CPU first, CPU second) {
    return first == CPU::UNDEFINED || second == CPU::UNDEFINED || first == second;
}

bool EqualsOrUndefined(OS first, OS second) {
    return first == OS::UNDEFINED || second == OS::UNDEFINED || first == second;
}
