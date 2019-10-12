#include <iostream>
#include <string>
using namespace std;

struct box
{
	int length, width, height;

	box() { } // default constructor

	box(int length, int width, int height)
	{
		length = length;
		width = width;
		height = height;
	}

	void Assign(int length, int width, int height)
	{
		length = length;
		width = width;
		height = height;
	}

	int Area()
	{
		return length * width;
	}

	int Volume()
	{
		return length * width * height;
	}
};

int main(int argc, char const *argv[])
{
	
	return 0;
}