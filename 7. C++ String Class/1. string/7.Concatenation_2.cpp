#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string first = "I love to";
	string play = "Play";

	string final = first + " " + play + " Games";

	string final2 = first + " Play " + "Games";

	string final3 = first + " play " + " Games. " + "What" + " about " + "you?";

	string final4 = "I love to " + play + " Games. " + "What" + " about " + "you?";

	cout<< "final string: " << final << endl;

	cout<< "final string: " << final2 << endl;
	
	cout<< "final string: " << final3 << endl;

	cout<< "final string: " << final4 << endl;

	return 0;
}
/*
	string final3 = "I" + " Love to " + "Play " + "Games";

	string final3 = "I" + "Play " + "Games";

	string final3 = "I " + "love to " + play + " Games";
*/