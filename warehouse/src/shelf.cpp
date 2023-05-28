#include "..\src\include\shelf.hpp"
#include "..\src\include\pallet.hpp"

Shelf::Shelf(){
    std::array<Pallet, 4> pallets;
};

bool Shelf::swapPallet(int slot, int slot2){
    Pallet temp = pallets[slot];
    pallets[slot] = pallets[slot2];
    pallets[slot2] = temp;
    return true;
};

bool Shelf::isEmpty(){
    if (this->pallets.size() == 0){
        return true;
    }
    return false;
};

bool Shelf::isFull(){
    if (this->pallets.size() == 4){
        return true;
    }
    return false;
};