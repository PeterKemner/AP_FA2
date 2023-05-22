#include "src\include\warehouse.hpp"
#include "src\include\shelf.hpp"
#include "src\include\employee.hpp"

Warehouse::Warehouse(){};

void Warehouse::addEmployee(Employee employee){
    Employees.push_back(employee);
};

void Warehouse::addShelf(Shelf shelf){
    Shelves.push_back(shelf);
};

bool Warehouse::rearrengeShelf(Shelf& shelf){
    if (getForkliftCertificate == true){

    };
    return false;
};

bool Warehouse::pickItems(std::string itemName, int itemCount){
    
};