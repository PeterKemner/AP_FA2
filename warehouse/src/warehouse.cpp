#include "src\include\warehouse.hpp"

Warehouse::Warehouse(){};

void Warehouse::addEmployee(Employee employee){
    Employees.push_back(employee);
};

void Warehouse::addShelf(Shelf shelf){
    Shelves.push_back(shelf);
};

// bool rearrengeShelf(Shelf& shelf){

// };

bool pickItems(std::string itemName, int itemCount){
    
};