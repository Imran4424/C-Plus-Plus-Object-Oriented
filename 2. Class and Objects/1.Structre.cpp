/*
	write a proram to demonstrate structure in c++
*/

#include <iostream>
using namespace std;

struct Box
{
	int length,width;

	int Area()
	{
		return length*width;
	}
};


int main(int argc, char const *argv[])
{
	Box red;

	red.length = 10;
	red.width = 8;

	cout << "Area is: " << red.Area() << endl;
	
	return 0;
}


/*
	In this chapter we will learn about class and objects

	for learning classes first we need to understand the basic operations of structres

	although structure is completely different from 
*/