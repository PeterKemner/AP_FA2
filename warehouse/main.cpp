#include <iostream>
#include "src\include\warehouse.hpp"

int main(){

    Warehouse warehouse = Warehouse();
    Shelf shelf1 = Shelf();
    shelf1.pallets = {
        Pallet("Books", 100, 40), 
        Pallet("Boxes", 100, 10), 
        Pallet("Books", 100, 20), 
        Pallet("Books", 100, 20)
    };

    Shelf shelf2 = Shelf();
    shelf2.pallets = {
        Pallet("Books", 100, 15), 
        Pallet("Boxes", 100, 20), 
        Pallet("Books", 100, 5), 
        Pallet("Boxes", 100, 30)
    };

    Shelf shelf3 = Shelf();
    shelf3.pallets = {
        Pallet("Toy Bears", 100, 20), 
        Pallet("Toy Bears", 100, 10), 
        Pallet(), 
        Pallet("Toy Bears", 100, 30)
    };

    Shelf shelf4 = Shelf();
    shelf4.pallets = {
        Pallet("Toy Car", 100, 20), 
        Pallet("Toy Car", 100, 10), 
        Pallet("Toy Car", 100, 60), 
        Pallet("Toy Car", 100, 30)
    };

    warehouse.addEmployee(Employee("Bob", true));
    warehouse.addEmployee(Employee("Greg", false));
    warehouse.addEmployee(Employee("Nick", false));

    warehouse.Employees[0].setBusy(false);
    warehouse.Employees[1].setBusy(true);
    warehouse.Employees[2].setBusy(false);
    
    warehouse.addShelf(shelf1);
    warehouse.addShelf(shelf2);
    warehouse.addShelf(shelf3);

    // warehouse.pickItems("Books", 68);
    warehouse.rearrengeShelf(shelf1);
    std::cout << shelf1.pallets[0].getItemName() << ", " << shelf1.pallets[0].getItemCount() << "\n";
    std::cout << shelf1.pallets[1].getItemName() << ", " << shelf1.pallets[1].getItemCount() << "\n";
    std::cout << shelf1.pallets[2].getItemName() << ", " << shelf1.pallets[2].getItemCount() << "\n";
    std::cout << shelf1.pallets[3].getItemName() << ", " << shelf1.pallets[3].getItemCount() << "\n";

    return 1;
};
