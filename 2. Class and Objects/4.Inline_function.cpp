#include <iostream>
using namespace std;

class Box
{
public:
	int length, width;

	void Assign(int l, int w)
	{
		length = l;
		width = w;
	}
	
	int Area();
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