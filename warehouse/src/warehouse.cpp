#include "..\src\include\warehouse.hpp"
#include "..\src\include\shelf.hpp"
#include "..\src\include\employee.hpp"
#include "..\src\include\pallet.hpp"
#include <iostream>

Warehouse::Warehouse(){};

void Warehouse::addEmployee(Employee employee){
    Employees.push_back(employee);
};

void Warehouse::addShelf(Shelf shelf){
    shelves.push_back(shelf);
};

// bool Warehouse::rearrengeShelf(Shelf& shelf){
//     if (getForkliftCertificate == true){

//     };
//     return false;
// };

bool Warehouse::pickItems(std::string itemName, int itemCount){
        int totalCount = 0;
    for (int x = 0; x < shelves.size(); x++){
        for (int i; i < 4; i++){
            if (shelves[x].pallets[i].getItemName() == "Books"){
                totalCount += shelves[x].pallets[i].getItemCount();
            }; 
        };
    };

    if (totalCount - itemCount > 0){ 
        std::cout << totalCount << "\n";
        for (int x = 0; x < shelves.size(); x++){
            if (totalCount == 0){
                // std::cout << "klaar" << "\n";
                break;
                }
            for (int i = 0; i < 4; i++){
                if (shelves[x].pallets[i].getItemName() == "Books"){
                    int temp = shelves[x].pallets[i].getItemCount();
                    std::cout << totalCount << "\n";
                    // std::cout << temp << "\n";
                    if (totalCount == 0){
                        // std::cout << "klaar" << "\n";
                        break;
                    }
                    if (temp > totalCount){
                        temp = totalCount;
                    }
                    for (int y; y < temp; ++y){
                        shelves[x].pallets[i].takeOne();
                        totalCount -= 1;
                        // std::cout << warehouse.shelves[x].pallets[i].getItemCount() << "\n";
                        // std::cout << totalCount << "\n";
                        }
                    }
                }
            }
        }
    }