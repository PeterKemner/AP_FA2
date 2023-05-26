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

    int totalCount = 0;
    for (int x = 0; x < warehouse.shelves.size(); x++){
        for (int i; i < 4; i++){
            if (warehouse.shelves[x].pallets[i].getItemName() == "Books"){
                totalCount += warehouse.shelves[x].pallets[i].getItemCount();
            }; 
        };
    };

    if (totalCount - 23 > 0){ 
        std::cout << totalCount << "\n";
        for (int x = 0; x < warehouse.shelves.size(); x++){
            if (totalCount == 0){
                std::cout << "klaar" << "\n";
                break;
                }
            for (int i = 0; i < 4; i++){
                if (warehouse.shelves[x].pallets[i].getItemName() == "Books"){
                    int temp = warehouse.shelves[x].pallets[i].getItemCount();
                    std::cout << totalCount << "\n";
                    // std::cout << temp << "\n";
                    if (totalCount == 0){
                        std::cout << "klaar" << "\n";
                        break;
                    }
                    if (temp > totalCount){
                        temp = totalCount;
                    }
                    for (int y; y < temp; ++y){
                        warehouse.shelves[x].pallets[i].takeOne();
                        totalCount -= 1;
                        // std::cout << warehouse.shelves[x].pallets[i].getItemCount() << "\n";
                        // std::cout << totalCount << "\n";
                        }
                    }
                }
            }
        }

    // warehouse.pickItems("Books", 23);
    std::cout << shelf1.pallets[0].getItemName() << ", " << shelf1.pallets[0].getItemCount() << "\n";
    std::cout << shelf1.pallets[2].getItemName() << ", " << shelf1.pallets[2].getItemCount();
    return 1;
};
