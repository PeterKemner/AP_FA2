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
        Pallet("Books", 100, 50), 
        Pallet("Boxes", 100, 100), 
        Pallet("Books", 100, 0), 
        Pallet("Boxes", 100, 30)
    };
    
    warehouse.addShelf(shelf1);
    warehouse.addShelf(shelf2);
    Employee Greg = Employee("Greg", true);
    Greg.setBusy(false);

    warehouse.addEmployee(Greg);
    
    std::cout << std::boolalpha;
    std::cout << "Employees die in de warehouse werken: " << "\n";
    std::cout << warehouse.Employees[0].getName() << ", " << warehouse.Employees[0].getBusy() << ", " << warehouse.Employees[0].getForkliftCertificate() <<"\n ";

    std::cout << "\n";

    std::cout << "In shelf1 zitten: " << "\n";
    std::cout << shelf1.pallets[0].getItemName() << ", " << shelf1.pallets[0].getItemCount() << ", " << shelf1.pallets[0].getRemainingSpace() << "\n";
    std::cout << shelf1.pallets[1].getItemName() << ", " << shelf1.pallets[1].getItemCount() << ", " << shelf1.pallets[1].getRemainingSpace() << "\n";
    std::cout << shelf1.pallets[2].getItemName() << ", " << shelf1.pallets[2].getItemCount() << ", " << shelf1.pallets[2].getRemainingSpace() << "\n";
    std::cout << shelf1.pallets[3].getItemName() << ", " << shelf1.pallets[3].getItemCount() << ", " << shelf1.pallets[3].getRemainingSpace() << "\n";

    std::cout << "\n";

    std::cout << "Deze pallets van shelf2 zijn vol: " << "\n";
    std::cout << std::boolalpha; 
    std::cout << warehouse.shelves[1].pallets[0].isFull() << "\n";
    std::cout << warehouse.shelves[1].pallets[1].isFull() << "\n";
    std::cout << warehouse.shelves[1].pallets[2].isFull() << "\n";
    std::cout << warehouse.shelves[1].pallets[3].isFull() << "\n";

    std::cout << "\n";

    std::cout << "Sorteren van self1: " << "\n";
    warehouse.rearrangeShelf(shelf1);
    std::cout << shelf1.pallets[0].getItemName() << ", " << shelf1.pallets[0].getItemCount() << "\n";
    std::cout << shelf1.pallets[1].getItemName() << ", " << shelf1.pallets[1].getItemCount() << "\n";
    std::cout << shelf1.pallets[2].getItemName() << ", " << shelf1.pallets[2].getItemCount() << "\n";
    std::cout << shelf1.pallets[3].getItemName() << ", " << shelf1.pallets[3].getItemCount() << "\n";

    std::cout << "\n";

    std::cout << "Pakken 55 boeken uit de pallets: " << "\n";
    warehouse.pickItems("Books", 55);
    std::cout << warehouse.shelves[0].pallets[0].getItemName() << ", " << warehouse.shelves[0].pallets[0].getItemCount() << "\n";
    std::cout << warehouse.shelves[0].pallets[1].getItemName() << ", " << warehouse.shelves[0].pallets[1].getItemCount() << "\n";
    std::cout << warehouse.shelves[0].pallets[2].getItemName() << ", " << warehouse.shelves[0].pallets[2].getItemCount() << "\n";
    std::cout << warehouse.shelves[0].pallets[3].getItemName() << ", " << warehouse.shelves[0].pallets[3].getItemCount() << "\n";

    std::cout << "\n";


};
