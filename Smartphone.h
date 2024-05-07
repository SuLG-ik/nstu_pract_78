#pragma once

#include <string>

using namespace std;

class Smartphone {
private:
    string model, manufacturer, color, display, ram, storage, cpu, os;
    int manufactureYear, cameraCount;
    double price;
public:
    Smartphone(string model = "", double price = 0, string manufacturer = "", string color = "", string display = "",
               string ram = "",
               string storage = "", string cpu = "", string os = "", int manufactureYear = 0, int cameraCount = 0);


    int getManufactureYear() const;

    int getCameraCount() const;

    string getModel() const;

    string getManufacturer() const;

    string getColor() const;

    string getDisplay() const;

    string getRAM() const;

    string getStorage() const;

    string getCPU() const;

    string getOS() const;

    double getPrice() const;

    void setPrice(double price);

    bool similar(Smartphone smartphone) const;

    void print() const;
};