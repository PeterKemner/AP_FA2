#pragma once
#include <string>
#include "IContainer.hpp"

class Pallet: public IContainer{
    private:
        mutable int itemCount;
        mutable std::string itemName;
        mutable int itemCapacity;

    public:
        /// @brief
        /// Constructor op basis van meegegeven waarden
        /// @param itemName De naam van wat op de pallet ligt.
        /// @param itemCapacity Het maximaal aantal objecten op de pallet.
        /// @param itemCount Het aantal van het object dat er nu op de pallet liggen.
        /// @return Niet van toepassing.
        Pallet(std::string itemName, int itemCapacity, int itemCount);

        /// @brief
        /// Constructor voor lege pallets, zorgt ervoor als je een lege pallet mee geeft de naam niks is, capacity 0 is en count ook 0.
        /// @return Niet van toepassing
        Pallet();

        /// @brief
        /// Geeft de naam van het item.
        /// @return De naam van het item.
        std::string getItemName();

        /// @brief
        /// Geeft de hoveelheid van het item die op de pallet liggen.
        /// @return Het getal van hoveel van het item op de pallet ligt.
        int getItemCount();

        /// @brief
        /// Geeft hoeveel plaats er nog op de pallet is.
        /// @return Het getal van hoeveel er nog op de pallet kan.
        int getRemainingSpace();

        /// @brief
        /// Wanneer de pallet leeg is, wordt naam en de capacity veranderd naar de meegegeven waarden.
        /// @param itemName De naam van wat op de pallet ligt.
        /// @param itemCapacity Het maximaal aantal objecten op de pallet.
        /// @return Een bool, true als het gelukt is, anders false.
        bool reallocateEmptyPallet(std::string itemName, int itemCapacity);

        /// @brief
        /// Haalt 1 van de itemCount af van een pallet
        /// @return Een bool, true als het gelukt is, anders false.
        bool takeOne();

        /// @brief
        /// Voegt 1 toe de itemCount af van een pallet
        /// @return Een bool, true als het gelukt is, anders false.
        bool putOne();

        /// @brief
        /// Geeft aan of een pallet leeg is of niet.
        /// @return Een bool, true als de pallet leeg is, anders false.
        bool isEmpty() override;

        /// @brief
        /// Geeft aan of een pallet vol is of niet.
        /// @return Een bool, true als de pallet vol is, anders false.
        bool isFull() override;

};
