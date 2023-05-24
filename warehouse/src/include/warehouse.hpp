#pragma once
#include "employee.hpp"
#include "shelf.hpp"
#include <vector>

class Warehouse{
    public:
        std::vector<Employee> Employees;
        std::vector<Shelf> Shelves;
        Warehouse();
        void addEmployee(Employee employee);
        void addShelf(Shelf shelf); 
        bool rearrengeShelf(Shelf& shelf);
        bool pickItems(std::string itemName, int itemCount);
};
