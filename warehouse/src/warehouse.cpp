#include "src\include\warehouse.hpp"
#include "src\include\shelf.hpp"

Warehouse::Warehouse(){};

void Warehouse::addEmployee(Employee employee){
    Employees.push_back(employee);
};

void Warehouse::addShelf(Shelf shelf){
    Shelves.push_back(shelf);
};

bool Warehouse::rearrengeShelf(Shelf& shelf){

};

bool Warehouse::pickItems(std::string itemName, int itemCount){
    
};