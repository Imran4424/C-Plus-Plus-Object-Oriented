#include <iostream>
using namespace std;

class Box
{
	private: int length, width;

	public: void Assign(int l, int w)
	{
		length = l;
		width = w;
	}
	
	public: int Area();
};

inline int Box::Area()
{
	return width*length;
}



int main(int argc, char const *argv[])
{

	cout << "input length and width of a box" << endl;

	int length,width;
	cin >> length >> width;

	Box red;

	red.Assign(length, width);

	cout << "Area of the Box is: " << red.Area() << endl;

	return 0;
}

/*
	public - anyone can access

	private - only class member and friend functions can access

	protected - class member, friend function, derived class members can access
*/