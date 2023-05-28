#pragma once
#include <array>
#include "pallet.hpp"
#include "IContainer.hpp"


class Shelf: public IContainer{
    public:
        std::array<Pallet, 4> pallets;

        Shelf();
        /// @brief
        /// Constructor op basis van meegegeven waarden
        /// @param name De naam van de employee.
        /// @param forkliftCertificate De certificate waarmee de employees pallets kunnen verplaatsen.
        /// @return Niet van toepassing.

        bool swapPallet(int slot, int slot2);
        /// @brief
        /// Constructor op basis van meegegeven waarden
        /// @param name De naam van de employee.
        /// @param forkliftCertificate De certificate waarmee de employees pallets kunnen verplaatsen.
        /// @return Niet van toepassing.

        bool isEmpty() override;
        /// @brief
        /// Constructor op basis van meegegeven waarden
        /// @param name De naam van de employee.
        /// @param forkliftCertificate De certificate waarmee de employees pallets kunnen verplaatsen.
        /// @return Niet van toepassing.

        bool isFull() override;
        /// @brief
        /// Constructor op basis van meegegeven waarden
        /// @param name De naam van de employee.
        /// @param forkliftCertificate De certificate waarmee de employees pallets kunnen verplaatsen.
        /// @return Niet van toepassing.
        
};