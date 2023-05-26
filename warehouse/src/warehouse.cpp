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
    for (int x = 0; x < shelves.size(); ++x){
        for (int i; i < 3; ++i){
            if (shelves[x].pallets[i].getItemName() == itemName){
                totalCount += shelves[x].pallets[i].getItemCount();
            }; 
        };
    };
    if (totalCount - itemCount > 0){ 
        for (int x = 0; x < shelves.size(); ++x){
            for (int i; i < 3; ++i){
                if (shelves[x].pallets[i].getItemName() == itemName){
                    int temp = shelves[x].pallets[i].getItemCount();
                    totalCount -= temp;
                    for (int y; y < temp; ++y){
                        shelves[x].pallets[i].takeOne();
                    return true;
                    };
                };
            };
        };
    }else{
        return false;
    }
};