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
		return length*width;
	}
	
};



int main(int argc, char const *argv[])
{
	Box red; // this line of code will give us error

	cout << "Area is: " << red.Area() << endl;

	return 0;
}