
#pragma once

#include <string>
#include<list>
#include "Smartphone.h"

using namespace std;

class Catalog {
private:
    std::list<Smartphone> smartphones;
public:
    void addSmartphone(string model, double price, string manufacturer, string color, string display, string ram,
                       string storage, string cpu, string os, int manufactureYear, int cameraCount);

    Smartphone getSmartphone(string model);

    Smartphone search(const Smartphone &searchSmartphone);
};