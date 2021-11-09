#include "funcPointer.h"

int main()
{
	Pointer point1;
	Pointer point2;
	point1.setPointY();
	point1.setPointX();
	point2.setPointX();
	point2.setPointY();

	Pointer point3;

	point3 = point1 + point2;
	point3.getPointX();
	point3.getPointY();
	if (point1 < point2)
	{
		std::cout << "ew";
	}
	if (point1 > point2)
	{
		std::cout << "dasd";
	}

}