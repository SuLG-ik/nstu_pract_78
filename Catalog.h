
#pragma once

#include <string>
#include<list>
#include "Laptop.h"

class Catalog {
private:
    std::list<Laptop> laptops;
public:
    void addLaptop(const Laptop &laptop);

    Laptop getLaptop(string model);

    vector<Laptop> search(const LaptopSpec &searchLaptops);
};