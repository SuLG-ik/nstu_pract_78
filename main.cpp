#include"Smartphone.h"
#include"Catalog.h"
#include<iostream>

using namespace std;

Catalog InitializeCatalog() {
    Catalog catalog;
    catalog.addSmartphone("iPhone 12 Pro", 100, "Apple", "White",
                          "6", "3", "64", "Apple", "iOS", 2019, 3);
    return catalog;
}

int main() {
    Catalog catalog = InitializeCatalog();
    Smartphone whatBuyerLikes{"iPhone 12 Pro"};
    Smartphone smartphone = catalog.search(whatBuyerLikes);
    smartphone.print();
    return 0;
}
