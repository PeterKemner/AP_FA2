#include <array>
#include "src\include\pallet.hpp"
#include "src\include\IContainer.hpp"

// class Shelf: public IContainer{
class Shelf{
private:
std::array<Pallet, 4> pallets;

public:
Shelf();
bool swapPallet(int slot, int slot2);
// virtual bool isEmpty();
// virtual bool isFull();
};