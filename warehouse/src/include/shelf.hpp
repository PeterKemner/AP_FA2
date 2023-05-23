#include <array>
#include "pallet.hpp"

class Shelf: public IContainer{
    public:
        std::array<Pallet, 4> pallets;
        Shelf();
        bool swapPallet(int slot, int slot2);
        virtual bool isEmpty();
        virtual bool isFull();
};