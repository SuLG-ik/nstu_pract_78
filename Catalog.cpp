#include "Catalog.h"

void Catalog::addSmartphone(string model, double price, string manufacturer, string color, string display, string ram,
                            string storage, string cpu, string os) {
    smartphones.push_back(Smartphone{model, price, manufacturer,
                                     color, display, ram,
                                     storage, cpu, os});
}

Smartphone Catalog::getSmartphone(string model) {
    for (Smartphone s: smartphones) {
        if (s.getModel() == model) return s;
    }
    return Smartphone();
}

Smartphone Catalog::search(const Smartphone &searchSmartphone) {
    for (Smartphone s: smartphones) {
        string model = searchSmartphone.getModel();
        if (!model.empty() && model != s.getModel()) continue;
        string manufacturer = searchSmartphone.getManufacturer();
        if (!manufacturer.empty() && manufacturer != s.getManufacturer())
            continue;
        // Пропущены фрагменты кода по проверке значений полей:
        // color, display, ram, storage, cpu, os.
        // Проверка реализована аналогичным образом
        return s;
    }
    return Smartphone();
}