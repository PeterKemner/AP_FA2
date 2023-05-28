#include "..\src\include\warehouse.hpp"
#include "..\src\include\shelf.hpp"
#include "..\src\include\employee.hpp"
#include "..\src\include\pallet.hpp"
#include <iostream>

Warehouse::Warehouse(){
    std::vector<Employee> Employees;
    std::vector<Shelf> shelves;
};

void Warehouse::addEmployee(Employee employee){
    Employees.push_back(employee);
};

void Warehouse::addShelf(Shelf shelf){
    shelves.push_back(shelf);
};

bool Warehouse::rearrangeShelf(Shelf& shelf){
    for(int y = 0; y < ((int)Employees.size()); y++){
        if (Employees[y].getForkliftCertificate() == true && Employees[y].getBusy() == false){
            for (int x = 0; x < 5; x++){
                for (int i = 0; i < 3; i++){
                    int one = shelf.pallets[i].getItemCount();
                    int two = shelf.pallets[i+1].getItemCount();
                    if (one > two){
                        shelf.swapPallet(i, (i+1));
                    }
                }
            };
        return true;
        }
    }
    return false;
};

bool Warehouse::pickItems(std::string itemName, int itemCount){
    int totalCount = 0;
    for (int x = 0; x < ((int)shelves.size()); x++){
        for (int i; i < 4; i++){
            if (shelves[x].pallets[i].getItemName() == itemName){
                totalCount += shelves[x].pallets[i].getItemCount();
            }; 
        };
    };

    int totalCountEnd = totalCount - itemCount;

    if (totalCount != totalCountEnd){ 
        for (int x = 0; x < ((int)shelves.size()); x++){
            if (totalCount == totalCountEnd){
                break;
                }
            for (int i = 0; i < 4; i++){
                if (shelves[x].pallets[i].getItemName() == itemName){
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
    return false;
    }
    