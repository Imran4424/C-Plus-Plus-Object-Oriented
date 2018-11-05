/*	
	write a program to demonstrate I/O manipulators setw and setfill
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char const *argv[])
{
	cout<< setw(25) <<setfill('.') << "I am a Programmer" <<endl;

	return 0;
}