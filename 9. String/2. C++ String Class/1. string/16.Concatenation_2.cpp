/*
	write a cpp program to demonstrate string concatenation in c++
*/


#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string first = "I love to";
	string play = "Play";

	string final = first + " " + play + " Games";

	string final2 = first + " Play " + "Games";

	string final3 = first + " play " + "Games. " + "What" + " about " + "you?";

	string final4 = "I love to " + play + " Games. " + "What" + " about " + "you?";

	
	cout<< "final string: " << final << endl;

	cout<< "final string: " << final2 << endl;
	
	cout<< "final string: " << final3 << endl;

	cout<< "final string: " << final4 << endl;

	return 0;
}
/*
	Look at the following statements:

		string final3 = "I" + " Love to " + "Play " + "Games";

		string final3 = "I " + "love to " + play + " Games";

		string final3 = "I" + "Play " + "Games";

		string final5 = "Play " + "Games";

	these are not valid 

	now look at the first two operands of the statements means two operands around the first '+' operator

	both are plain string not string class object

	to make these statements valid, we need to make one of them string object

	the easiest way to do that,

		string final3 = "I" + string(" Love to ") + "Play " + "Games";
*/