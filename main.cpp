#include"Laptop.h"
#include"Catalog.h"
#include<iostream>

using namespace std;

Catalog InitializeCatalog() {
    Catalog catalog;
    catalog.addLaptop(Laptop("Macbook pro 14", Money(1000, MONEY_UNIT_EUR),
                             LaptopSpec(Manufacturer::APPLE, Color::GRAY, 100, 6, 3, CPU::APPLE, OS::MACOS)));
    catalog.addLaptop(Laptop(
            "Macbook Pro 15",
            Money(100000, MONEY_UNIT_RUB),
            LaptopSpec(Manufacturer::APPLE, Color::GRAY, 100, 6, 3, CPU::APPLE, OS::MACOS))
    );


    catalog.addLaptop(Laptop(
            "Macbook Air 16",
            Money(100000, MONEY_UNIT_RUB),
            LaptopSpec(Manufacturer::APPLE, Color::BLACK, 102, 8, 3, CPU::APPLE, OS::MACOS)
    ));

    return catalog;
}

int main() {
    Catalog catalog = InitializeCatalog();
    LaptopSpec whatBuyerLikes{Manufacturer::APPLE, Color::GRAY, 0, 0, 0, CPU::UNDEFINED,
                              OS::UNDEFINED};
    vector<Laptop> results = catalog.search(whatBuyerLikes);
    if (!results.empty()) {
        cout << "You might like this:" << endl;
        for (Laptop s: results) {
            cout << s << endl;
        }
    } else cout << "Sorry, we have nothing for you.";
    return 0;
}
