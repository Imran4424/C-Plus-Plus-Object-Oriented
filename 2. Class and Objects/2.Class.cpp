#include <iostream>
using namespace std;

class Box
{
public:
	int length,width;

	int Area()
	{
		return length*width;
	}
	
};



int main(int argc, char const *argv[])
{
	Box red;

	red.length = 8;
	red.width = 6;

	cout << "Area is: " << obj.Area() << endl;

	return 0;
}