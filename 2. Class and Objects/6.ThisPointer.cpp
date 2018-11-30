/*
	write a program to demonstrate this pointer
*/

#include <iostream>
using namespace std;

class Box
{
	private: int length, width;

	public: void Assign(int length, int width)
	{
		this -> length = length;
		this -> width = width;
	}
	
	public: int Area()
	{
		return length * width;
	}
};


int main(int argc, char const *argv[])
{
	
	return 0;
}