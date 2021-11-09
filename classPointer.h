#include <iostream>

class Pointer
{
public:
	void setPointY();
	void setPointX();
	void getPointY();
	void getPointX();
	Pointer operator+(const Pointer &obj)
	{
		Pointer sum;
		sum.x = obj.x + this->x;
		sum.y = obj.y + this->y;

		return sum;
	}
	bool operator>(const Pointer& obj)
	{
		return (this->x > obj.x || this->y > obj.y);
	}
	bool operator<(const Pointer& obj)
	{
		return (this->x < obj.x || this->y < obj.y);
	}
	Pointer& operator=(const Pointer& obj)
	{
		if(this == &obj)
		{
			return *this;
		}
		this->x = obj.x;
		this->y = obj.y;
		return *this;
	}
	Pointer(int x_m, int y_m)
	{
		x = x_m;
		y = x_m;
	}
private:
	int x = 0;
	int y = 0;
};
