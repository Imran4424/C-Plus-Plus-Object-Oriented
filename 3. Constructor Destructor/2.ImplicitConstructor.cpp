#include <iostream>
using namespace std;

class Box
{

	private: int length,width;

	public: int Area()
	{
		return length*width;
	}
	
};



int main(int argc, char const *argv[])
{
	Box red;



	cout << "Area is: " << red.Area() << endl;

	return 0;
}