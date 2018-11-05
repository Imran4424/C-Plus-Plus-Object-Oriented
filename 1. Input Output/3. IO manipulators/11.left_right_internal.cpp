/*	
	write a program to demonstrate I/O manipulators left, right and internal
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	cout<< setw(7) << -71 << endl;

	cout<< left << setw(7) << -71 << endl;
	
	cout<< right << setw(7) << -71 << endl;
	
	cout<< internal << setw(7) << -71 << endl;
	
	return 0;
}