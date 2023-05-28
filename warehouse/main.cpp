#include <iostream>
#include "src\include\warehouse.hpp"

int main(){

Warehouse warehouse = Warehouse();
    warehouse.addShelf(Shelf());
    warehouse.addEmployee(Employee("Bob", true));
    std::cout << warehouse.shelves[0].pallets[0].getItemCount() << "\n";
    std::cout << warehouse.shelves[0].pallets[1].getItemCount() << "\n";
    std::cout << warehouse.shelves[0].pallets[2].getItemCount() << "\n";
    std::cout << warehouse.shelves[0].pallets[3].getItemCount() << "\n";
};
