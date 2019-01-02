#include <iostream>
using namespace std;

class Box
{
	private: int length, width, height;

	public: Box(int length = 0; int width = 0; int height = 0)
	{
		this -> length = length;
		this -> width = width;
		this -> height = height;
	}

	public: int Area()
	{
		return length * width;
	}

	public: int Volume()
	{
		return length * width * height;
	}

	Box& operator= (const Box &steel)
	{
		length = steel.length;
		width = steel.width;
		height = steel.height;

		return *this;
	}
};

int main(int argc, char const *argv[])
{
	
	return 0;
}