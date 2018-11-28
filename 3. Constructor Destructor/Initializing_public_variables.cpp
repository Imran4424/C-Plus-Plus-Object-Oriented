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
	Box red = {4,8};

	cout << "Area is: " << red.Area() << endl;

	return 0;
}