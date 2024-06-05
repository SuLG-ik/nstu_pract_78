#pragma once

#include <string>
#include <ostream>
#include "Params.h"
#include "Money.h"


using namespace std;

class Smartphone {
private:
    string model;
    Manufacturer manufacturer;
    Color color;
    float displaySize;
    int ram, storage;
    CPU cpu;
    OS os;
    Money price;
public:
    Smartphone(const string &model = "", Manufacturer manufacturer = Manufacturer::UNDEFINED,
               Color color = Color::UNDEFINED, float displaySize = 0, int ram = 0,
               int storage = 0,
               CPU cpu = CPU::UNDEFINED, OS os = OS::UNDEFINED, const Money &price = Money());

    const string &getModel() const;

    Manufacturer getManufacturer() const;

    Color getColor() const;

    float getDisplay() const;

    int getRAM() const;

    int getStorage() const;

    CPU getCPU() const;

    OS getOS() const;

    bool Similar(const Smartphone &smartphone) const;

    friend ostream &operator<<(ostream &os, const Smartphone &smartphone);

    const Money &getPrice() const;

    void setPrice(const Money &price);
};