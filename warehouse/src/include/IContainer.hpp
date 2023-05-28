#pragma once

class IContainer{
    public:
        virtual bool isEmpty() = 0;
        /// @brief
        /// Geeft aan of een pallet leeg is of niet.
        /// @return Niet van toepassing.

        virtual bool isFull() = 0;
        /// @brief
        /// Geeft aan of een pallet vol is of niet.
        /// @return Niet van toepassing.
};
