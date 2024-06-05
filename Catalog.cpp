#include "Catalog.h"
#include "utils.h"

void Catalog::addSmartphone(const Smartphone &smartphone) {
    smartphones.push_back(smartphone);
}

Smartphone Catalog::getSmartphone(string model) {
    for (Smartphone s: smartphones) {
        if (FirstEmptyOrEquals(s.getModel(), model))
            return s;
    }
    return Smartphone();
}

vector<Smartphone> Catalog::search(const Smartphone &searchSmartphone) {
    vector<Smartphone> result;
    for (const Smartphone &s: smartphones) {
        if (searchSmartphone.Similar(s))
            result.push_back(s);
    }
    return result;
}