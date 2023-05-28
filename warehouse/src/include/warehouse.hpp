#pragma once
#include "employee.hpp"
#include "shelf.hpp"
#include <vector>

class Warehouse{
    public:
        std::vector<Employee> Employees;
        std::vector<Shelf> shelves;

        /// @brief
        /// Constructor voor wanneer er geen shelves worden meegegeven.
        /// @return Niet van toepassing.
        Warehouse();

        /// @brief
        /// Voegt een nieuwe employee toe aan de Employees vector.
        /// @param employee Is een employee van de employee klasse.
        /// @return Niet van toepassing.
        void addEmployee(Employee employee);

        /// @brief
        /// Voegt een nieuwe shelf toe aan de shelves vector.
        /// @param shelf Is een shelf van de shelf klasse.
        /// @return Niet van toepassing. 
        void addShelf(Shelf shelf); 

        /// @brief
        /// Sorteert de pallets in een shelf op oplopende volgorde als er een employee is met een forkliftcertificate.
        /// @details
        /// Als eerst wordt er een loop gestart die door Employees lijst kijkt, als er een employee is die niet busy is en een forkliftcertificate heeft gaat verder naar de volgende loop,
        /// daarna wordt een loop 5 keer geloopt door een andere loop, die kijkt of de eerste pallet kleiner is dan de volgende pallet, als dat zo is dan gebruikt het swapPallet zodat ze veranderen van positie,
        /// zodra de loops klaar zijn wordt er true gereturned en als er geen employee is die niet busy is en een forkliftcertificate dan wordt er false gereturned.
        /// @param shelf De shelf die wordt gesorteert en als vanaf het begin de totalCount en de totalCountEnd gelijk zijn hoeft er niks weggehaalt worden en wordt er false gereturned.
        /// @return Een bool, als het gelukt is: true, anders false.
        bool rearrangeShelf(Shelf& shelf);

        /// @brief
        /// Haalt items uit de pallets over de alle shelfs, hoeveel keer, en welk item wordt meegegeven.
        /// @details
        /// Als eerst wordt er twee for loops gestart die door alle shelfs en pallets kijken voor de item naam die is meegegeven en alle itemCount worden opgeteld in de variable totalCount.
        /// Na die loops wordt een variable gemaakt: totalCountEnd, dat is wat de totalCount moet zijn nadat alle items van de pallet zijn afgehaald. 
        /// Daarna worden er twee for loops gestart die door alle shelf en pallets zoeken die dezelfde naam hebben als de naam die is meegegeven, zodra er 1 is gevonden word er een for loop 
        /// gestart met als lengte het aantal op die pallet, die takeOne() aanroept en totalCount -= 1. Dit blijft gebeuren totdat de totalCount even veel is als de totalCountEnd, 
        /// en wanner die gelijk zijn stoppen alle for loops en wordt er true gereturned
        /// @param itemName De naam van het item.
        /// @param itemCount De hoeveelheid van hoeveel er van het item wordt weggehaald.
        /// @return Een bool, als het lukt: true anders false.
        bool pickItems(std::string itemName, int itemCount);

};
