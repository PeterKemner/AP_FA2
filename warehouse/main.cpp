#include <iostream>
#include "src\include\warehouse.hpp"

int main(){
    // std::cout << "Hello world" << std::endl;

    Warehouse warehouse = Warehouse();
    warehouse.addShelf(Shelf());
    warehouse.addEmployee(Employee("Bob", true));
    warehouse.addEmployee(Employee("Gert", false));
    warehouse.addEmployee(Employee("Mark", true));

    // for(int x = 0; x < warehouse.Employees.size(); x++){
    //     std::cout << warehouse.Employees[x];
    // }

    Pallet pallet1 = Pallet("iPhone", 250, 21);
    Pallet pallet2 = Pallet("Sink", 8, 5);
    Pallet pallet3 = Pallet("Knife", 500, 233);
    Pallet pallet4 = Pallet("Laptop", 50, 2);

    std::cout << pallet1.getItemCount() << ", " << pallet1.getItemName() << "\n";
    std::cout << pallet2.getItemCount() << ", " << pallet2.getItemName() << "\n";
    std::cout << pallet3.getItemCount() << ", " << pallet3.getItemName() << "\n";
    std::cout << pallet4.getItemCount() << ", " << pallet4.getItemName() << "\n";

    std::cout << pallet2.getRemainingSpace() << ", " << "\n";

    // pallet3.reallocateEmptyPallet("Mirror", 50);

    pallet1.takeOne();
    // warehouse.pickItems("iPone", 20);
    std::cout << pallet1.getItemCount() << ", " << pallet1.getItemName() << "\n";

    return 1;
};
