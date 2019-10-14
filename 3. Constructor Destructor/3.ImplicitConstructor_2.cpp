/*
	write a program to demonstrate implicit constructor and user define constructor conflict
*/

#include <iostream>
using namespace std;

class Box
{

	private: int length,width;

	public: Box(int l, int w)
	{
		length = l;
		width = w;
	}

	public: int Area()
	{
		return length * width;
	}
	
};



int main(int argc, char const *argv[])
{
	Box red; // this line of code will give us error

	cout << "Area is: " << red.Area() << endl;

	return 0;
}


/*
	as we know we can declare user defined constructors in our class

	when we define a user define constructor that moment implicit constructor just disabled 

	and if we define a user define constructor which can take parameters then, statements like,

			Box red;
	
	will give error

	because, here box object red has no parameters
*/