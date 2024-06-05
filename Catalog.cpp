#include "Catalog.h"
#include "utils.h"

void Catalog::addLaptop(const Laptop &laptop) {
    laptops.push_back(laptop);
}

Laptop Catalog::getLaptop(string model) {
    for (Laptop s: laptops) {
        if (FirstEmptyOrEquals(s.getModel(), model))
            return s;
    }
    return Laptop();
}

vector<Laptop> Catalog::search(const LaptopSpec &searchLaptops) {
    vector<Laptop> result;
    for (const Laptop &s: laptops) {
        if (searchLaptops.Similar(s.getSpec()))
            result.push_back(s);
    }
    return result;
}