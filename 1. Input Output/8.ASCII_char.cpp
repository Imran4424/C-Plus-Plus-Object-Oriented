/*
	Write a program that read any ASCII value and display equivalent character
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;

	cin>>num;

	char ch = (char) num; // type casting

	cout<<"Entered ASCII value equivalent character is: "<<ch<<endl;

	return 0;
}

/*
	Here, 
		we reading a ASCII value in int(decimal) format using cin

		them displaying the equivalent character using cout after type casting
*/