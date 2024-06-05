#include"Smartphone.h"
#include"Catalog.h"
#include<iostream>

using namespace std;

Catalog InitializeCatalog() {
    Catalog catalog;
    catalog.addSmartphone(Smartphone("iPhone 12 Pro", Manufacturer::APPLE, Color::WHITE, 100, 6, 3, CPU::APPLE, OS::IOS,
                                     Money(1000, MONEY_UNIT_EUR)));
    catalog.addSmartphone(Smartphone("iPhone 12 Pro", Manufacturer::APPLE, Color::WHITE, 100, 6, 3, CPU::APPLE, OS::IOS,
                                     Money(100000, MONEY_UNIT_RUB)));


    catalog.addSmartphone(Smartphone("iPhone 12 Pro", Manufacturer::APPLE, Color::WHITE, 102, 8, 3, CPU::APPLE, OS::IOS,
                                     Money(100000, MONEY_UNIT_RUB)));

    catalog.addSmartphone(Smartphone("iPhone 12 Pro", Manufacturer::APPLE, Color::BLUE, 100, 6, 3, CPU::APPLE, OS::IOS,
                                     Money(100, MONEY_UNIT_USD)));

    return catalog;
}

int main() {
    Catalog catalog = InitializeCatalog();
    Smartphone whatBuyerLikes{"iphone 12 pro", Manufacturer::APPLE, Color::WHITE, 0, 0, 0, CPU::UNDEFINED,
                              OS::UNDEFINED};
    vector<Smartphone> results = catalog.search(whatBuyerLikes);
    if (!results.empty()) {
        cout << "You might like this:" << endl;
        for (Smartphone s: results) {
            cout << s << endl;
        }
    } else cout << "Sorry, we have nothing for you.";
    return 0;
}
