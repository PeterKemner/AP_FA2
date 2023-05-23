#include "..\src\include\shelf.hpp"
#include "..\src\include\IContainer.hpp"

Shelf::Shelf(){};

bool Shelf::swapPallet(int slot, int slot2){
    if (slot >= 0 and slot <= 3 or slot2 >= 0 and slot <= 3){
        Pallet temp = pallets[slot];
        pallets[slot] = pallets[slot2];
        pallets[slot2] = temp;
        return true;
    };
    return false;
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