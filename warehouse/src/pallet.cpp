#include "src\include\pallet.hpp"

Pallet(std::string itemName, int itemCapacity, int itemCount){
    this-> itemName = itemName;
    this-> itemCapacity = itemCapacity;
    this-> itemCount = itemCount;
};

Pallet::Pallet();

std::string Pallet::getItemName(){
    return this-> name;
};

int Pallet::getItemCount(){
    this-> itemCount = itemCount;
};

int getRemainingSpace(){
    return this-> itemCapacity;
};

// bool reallocateEmptyPallet(std::string itemName, int itemCapacity){
    
// };

// bool takeOne(){

// };

// bool putOne();



// virtual bool isEmpty();

// virtual bool isFull();