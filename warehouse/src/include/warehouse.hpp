#include "src\include\employee.hpp"
#include "src\include\shelf.hpp"
#include <vector>

class Warehouse{
    private:
        std::vector<Employee> Employees;
        std::vector<Shelf> Shelves;

    public:
        Warehouse();
        void addEmployee(Employee employee);
        void addShelf(Shelf shelf); 
        bool rearrengeShelf(Shelf& shelf);
        bool pickItems(std::string itemName, int itemCount);
};
