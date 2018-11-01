/*
	Write a program that read any character and display equivalent ASCII value
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch;

	cin>>ch;

	int ascii_num = (int) ch;

	cout<<"Entered character equivalent ASCII value is: "<<ascii_num<<endl;

	return 0;
}

/*
	Here, 
		we reading a char using cin

		them displaying the equivalent ASCII value(decimal) using cout after type casting
*/