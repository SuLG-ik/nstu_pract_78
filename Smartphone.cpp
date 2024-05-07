//
// Created by Володя on 07.05.2024.
//

#include "Smartphone.h"
#include "utils.h"

string Smartphone::getModel() const {
    return model;
}

string Smartphone::getManufacturer() const {
    return manufacturer;
}

string Smartphone::getColor() const {
    return color;
}

string Smartphone::getDisplay() const {
    return display;
}

string Smartphone::getRAM() const {
    return ram;
}

string Smartphone::getStorage() const {
    return storage;
}

string Smartphone::getCPU() const {
    return cpu;
}

string Smartphone::getOS() const {
    return os;
}

double Smartphone::getPrice() const {
    return price;
}

void Smartphone::setPrice(double price) {
    if (price > 0) {
        Smartphone::price = price;
    } else {
        std::cout << "Price must be greater than 0";
        Smartphone::price = 0;
    }
}


Smartphone::Smartphone(string model, double price, string manufacturer, string color, string display, string ram,
                       string storage, string cpu, string os, int manufactureYear, int cameraCount) {
    this->model = model;
    this->price = price;
    this->manufacturer = manufacturer;
    this->color = color;
    this->display = display;
    this->ram = ram;
    this->storage = storage;
    this->cpu = cpu;
    this->os = os;
    this->manufactureYear = manufactureYear;
    this->cameraCount = cameraCount;
}

int Smartphone::getManufactureYear() const {
    return manufactureYear;
}

int Smartphone::getCameraCount() const {
    return cameraCount;
}

bool Smartphone::similar(Smartphone smartphone) const {
    return firstEmptyOrEquals(model, smartphone.model) &&
           firstEmptyOrEquals(manufacturer, smartphone.manufacturer) &&
           firstEmptyOrEquals(color, smartphone.color) &&
           firstEmptyOrEquals(display, smartphone.display) &&
           firstEmptyOrEquals(ram, smartphone.ram) &&
           firstEmptyOrEquals(storage, smartphone.storage) &&
           firstEmptyOrEquals(cpu, smartphone.cpu) &&
           firstEmptyOrEquals(os, smartphone.os) &&
           (manufactureYear == 0 || manufactureYear == smartphone.manufactureYear) &&
           (cameraCount == 0 || cameraCount == smartphone.cameraCount) &&
           (price == 0 || price == smartphone.price);
}

void Smartphone::print() const {
    if (!getModel().empty()) {
        cout << "You might like this: ";
        cout << getManufacturer() << " ";
        cout << getModel() << endl;
        cout << "Price: " << getPrice() << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Display: " << getDisplay() << endl;
        cout << "OS: " << getOS() << endl;
        cout << getRAM() << "Gb RAM, " << getStorage()
             << " GB storage" << endl;
        cout << "CPU: " << getCPU() << endl;
        cout << "Manufacture year: " << getManufactureYear() << endl;
        cout << "Camera count: " << getCameraCount() << endl;

    } else cout << "Sorry, we have nothing for you.";
}