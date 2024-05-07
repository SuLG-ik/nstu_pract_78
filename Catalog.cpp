#include "Catalog.h"

void Catalog::addSmartphone(string model, double price, string manufacturer, string color, string display, string ram,
                            string storage, string cpu, string os, int manufactureYear, int cameraCount) {
    smartphones.push_back(Smartphone{model, price, manufacturer,
                                     color, display, ram,
                                     storage, cpu, os, manufactureYear, cameraCount});
}

Smartphone Catalog::getSmartphone(string model) {
    for (Smartphone s: smartphones) {
        if (s.getModel() == model) return s;
    }
    return Smartphone();
}

Smartphone Catalog::search(const Smartphone &searchSmartphone) {
    for (Smartphone s: smartphones) {
        if (searchSmartphone.similar(s))
            return s;
    }
    return Smartphone();
}