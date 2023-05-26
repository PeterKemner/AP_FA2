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
    
    warehouse.addShelf(shelf1);
    warehouse.addShelf(shelf2);
    warehouse.addShelf(shelf3);

    // int totalCount = 0;
    // for (int x = 0; x < warehouse.shelves.size(); x++){
    //     for (int i; i < 4; i++){
    //         if (warehouse.shelves[x].pallets[i].getItemName() == "Books"){
    //             totalCount += warehouse.shelves[x].pallets[i].getItemCount();
    //         }; 
    //     };
    // };
    
    // int totalCountEnd = totalCount - 68;

    // if (totalCount - 68 > 0){ 
    //     for (int x = 0; x < warehouse.shelves.size(); x++){
    //         if (totalCount == totalCountEnd){
    //             break;
    //             }
    //         for (int i = 0; i < 4; i++){
    //             if (warehouse.shelves[x].pallets[i].getItemName() == "Books"){
    //                 if (totalCount == totalCountEnd){
    //                 break;
    //                 }
    //                 int temp = warehouse.shelves[x].pallets[i].getItemCount();
    //                 for (int y = 0; y < temp; ++y){
    //                     if (totalCount == totalCountEnd){
    //                     break;
    //                     }
    //                     warehouse.shelves[x].pallets[i].takeOne();
    //                     totalCount -= 1;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    warehouse.pickItems("Books", 23);
    std::cout << warehouse.shelves[0].pallets[0].getItemName() << ", " << warehouse.shelves[0].pallets[0].getItemCount() << "\n";
    std::cout << warehouse.shelves[0].pallets[2].getItemName() << ", " << warehouse.shelves[0].pallets[2].getItemCount() << "\n";
    std::cout << warehouse.shelves[0].pallets[3].getItemName() << ", " << warehouse.shelves[0].pallets[3].getItemCount() << "\n";


    return 1;
};
