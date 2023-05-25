#include <iostream>
#include "src\include\warehouse.hpp"

int main(){
    // std::cout << "Hello world" << std::endl;

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
    
    warehouse.addShelf(shelf1);
    warehouse.addShelf(shelf2);
    warehouse.addShelf(shelf3);

    warehouse.pickItems("Books", 10);

    std::cout << shelf1.pallets[0].getItemName() << ", " << shelf1.pallets[0].getItemCount();

    // int totalCount = 0;
    // for (int x = 0; x < warehouse.Shelves.size(); ++x){
    //     std::cout << warehouse.Shelves[0].pallets[0].getItemName();
    //     for (int i; i < 3; ++i){
    //         if (warehouse.Shelves[x].pallets[i].getItemName() == "iPhone"){
    //             totalCount += warehouse.Shelves[x].pallets[i].getItemCount();
    //         }; 
    //     };
    // };
    // if (totalCount - 20 > 0){ 
    //     for (int x = 0; x < warehouse.Shelves.size(); ++x){
    //         for (int i; i < 3; ++i){
    //             if (warehouse.Shelves[x].pallets[i].getItemName() == "iPhone"){
    //                 int temp = warehouse.Shelves[x].pallets[i].getItemCount();
    //                 totalCount -= temp;
    //                 for (int y; y < temp; ++y){
    //                     warehouse.Shelves[x].pallets[i].takeOne();
    //                 };
    //             };
    //         };
    //     };
    // }
    return 1;
};
