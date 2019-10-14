#include <iostream>
using namespace std;

class Box
{
public:
	int length, width;

	// Member function
	// inside the class
	void Assign(int l, int w) 
	{
		length = l;
		width = w;
	}
	
	int Area();
};

// Member function
// Outside the class
int Box::Area()
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
	Member functions can be define in two ways in C++

	Inside Class
	Outside class
	

	Member function inside class

*/