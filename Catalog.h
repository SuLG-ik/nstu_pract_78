
#pragma once

#include <string>
#include<list>
#include "Smartphone.h"

class Catalog {
private:
    std::list<Smartphone> smartphones;
public:
    void addSmartphone(const Smartphone &smartphone);

    Smartphone getSmartphone(string model);

    vector<Smartphone> search(const Smartphone &searchSmartphone);
};