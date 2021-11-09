#include "classPointer.h"

void Pointer::setPointX()
{
	std::cout << "Please enter X : \n";
	std::cin >> x;
}
void Pointer::setPointY()
{
	std::cout << "Please enter Y : \n";
	std::cin >> y;
}
void Pointer::getPointX()
{
	std::cout << "X is equal : " << x<<"\n";
}
void Pointer::getPointY()
{
	std::cout << "Y is equal : " << y << "\n";
}