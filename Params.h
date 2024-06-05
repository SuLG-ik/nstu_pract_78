//
// Created by Володя on 05.06.2024.
//

#pragma once

#include <iostream>

enum class Manufacturer {
    APPLE, SAMSUNG, XIAOMI, HTC, UNDEFINED
};

enum class Color {
    WHITE, GRAY, BLACK, BLUE, RED, GOLD, UNDEFINED
};

enum class OS {
    ANDROID, IOS, Avrora, UNDEFINED
};

enum class CPU {
    SNAPDRAGON, APPLE, Mediatek, UNDEFINED
};

std::string ToString(CPU cpu);

std::string ToString(OS os);

std::string ToString(Color color);

std::string ToString(Manufacturer manufacturer);

bool EqualsOrUndefined(Manufacturer first, Manufacturer second);

bool EqualsOrUndefined(Color first, Color second);

bool EqualsOrUndefined(OS first, OS second);

bool EqualsOrUndefined(CPU first, CPU second);

std::ostream &operator<<(std::ostream &out, CPU cpu);

std::ostream &operator<<(std::ostream &out, OS os);

std::ostream &operator<<(std::ostream &out, Color color);

std::ostream &operator<<(std::ostream &out, Manufacturer manufacturer);