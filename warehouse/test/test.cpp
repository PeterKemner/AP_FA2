#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "include/catch.hpp"
#include "..\src\include\warehouse.hpp"

// Find all tests in test*.cpp in test/
TEST_CASE("Picks certain amount of items from the shelf", "warehouse::pickItems"){
    // Construct warehouse with unsorted shelf of books.
    Warehouse warehouse = Warehouse();
    Shelf shelf1 = Shelf();
    shelf1.pallets = {
        Pallet("Toy Cars", 100, 20), 
        Pallet("Toy Cars", 100, 80), 
        Pallet("Toy Cars", 100, 30), 
        Pallet("Toy Cars", 100, 70)
    };
    
    Employee Greg = Employee("Greg", true);
    Greg.setBusy(true);

    warehouse.addEmployee(Greg);
    warehouse.addShelf(shelf1);

    warehouse.pickItems("Toy Cars", 30);

    REQUIRE(warehouse.shelves[0].pallets[0].getItemCount() == 0);
    REQUIRE(warehouse.shelves[0].pallets[1].getItemCount() == 70);
    REQUIRE(warehouse.shelves[0].pallets[2].getItemCount() == 30);
    REQUIRE(warehouse.shelves[0].pallets[3].getItemCount() == 70);
}