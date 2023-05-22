#include "src\include\shelf.hpp"

Shelf::Shelf(){};

bool Shelf::swapPallet(int slot, int slot2){
    Pallet temp = pallets[slot];
    pallets[slot] = pallets[slot2];
    pallets[slot2] = temp;
};

bool Pallet::isEmpty(){
    if (this->itemCount == 0){
        return true;
    };
    return false;
};

bool Pallet::isFull(){
    if (this->itemCount == itemCapacity){
        return true;
    };
    return false;
};