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
    
    int totalCountEnd = totalCount - itemCount;

    if (totalCount - itemCount > 0){ 
        for (int x = 0; x < shelves.size(); x++){
            if (totalCount == totalCountEnd){
                break;
                }
            for (int i = 0; i < 4; i++){
                if (shelves[x].pallets[i].getItemName() == "Books"){
                    if (totalCount == totalCountEnd){
                    break;
                    }
                    int temp = shelves[x].pallets[i].getItemCount();
                    for (int y = 0; y < temp; ++y){
                        if (totalCount == totalCountEnd){
                        break;
                        }
                        shelves[x].pallets[i].takeOne();
                        totalCount -= 1;
                        }
                    }
                }
            }
        return true;
        }
    else{
        return false;
        }
    }