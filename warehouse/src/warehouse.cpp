#include "..\src\include\warehouse.hpp"
#include "..\src\include\shelf.hpp"
#include "..\src\include\employee.hpp"
#include "..\src\include\pallet.hpp"

Warehouse::Warehouse(){};

void Warehouse::addEmployee(Employee employee){
    Employees.push_back(employee);
};

void Warehouse::addShelf(Shelf shelf){
    Shelves.push_back(shelf);
};

// bool Warehouse::rearrengeShelf(Shelf& shelf){
//     if (getForkliftCertificate == true){

//     };
//     return false;
// };

bool Warehouse::pickItems(std::string itemName, int itemCount){
    int totalCount = 0;
    for (int x = 0; x < Shelves.size(); x++){
        for (int i; i < 3; i++){
            if (Shelves[x].pallets[i].getItemName() == itemName){
                totalCount += Shelves[x].pallets[i].getItemCount();
            }; 
        };
    };

    if (totalCount - itemCount >= 0){ 
        for (int i = 0; i < itemCount; i++){
            takeOne();
        };
        return true;  
    };
};
