#include <iostream>
using namespace std;

template <typename imran , typename sakib>
const imran& Add(const imran &x, const sakib &y)
{

	imran = x + y;

	return imran;
}



int main(int argc, char const *argv[])
{
	cout << Add(8, 12) << endl;
	
	cout << Add(4.5, 7.5) << endl;
	
	cout << Add(8.2, 12.36) << endl;

	cout << Add(8.2, 12) << endl;
	
	cout << Add(string("Hi, "), string("Let's Play")) << endl;

	return 0;
}