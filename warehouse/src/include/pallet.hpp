#include <string>
#include "src\include\IContainer.hpp"

// class Pallet: public IContainer{
class Pallet{
private:
int itemCount;
std::string itemName;
int itemCapacity;

public:
Pallet(std::string itemName, int itemCapacity, int itemCount);\
Pallet();
std::string getItemName();
int getItemCount();
int getRemainingSpace();
bool reallocateEmptyPallet(std::string itemName, int itemCapacity);
bool takeOne();
bool putOne();
// virtual bool isEmpty();
// virtual bool isFull();
};