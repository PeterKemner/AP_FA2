#include "src\include\shelf.hpp"

Shelf::Shelf();

bool swapPallet(int slot, int slot2){
    std::array temp = pallets[slot];
    pallets[slot] = pallets[slot2];
    pallets[slot2] = temp;
};


// virtual bool isEmpty();
// virtual bool isFull();