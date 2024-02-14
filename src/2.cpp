// Get electricity price owed by a homeowner. (kWh) 

#include <iostream>

int main() {
    double usage;
    double price;

    std::cout << "Input units in kWh consumed: ";
    std::cin >> usage;

    if (usage > 100) {
        //this is the rate over 100 kWh
        price = 100*0.12 + (usage - 100)*0.15;
    }
    else {
        price = usage * 0.12;
    }
    std::cout << "Consumer owes $" << price << " for " << usage << " kWh.\n";
}