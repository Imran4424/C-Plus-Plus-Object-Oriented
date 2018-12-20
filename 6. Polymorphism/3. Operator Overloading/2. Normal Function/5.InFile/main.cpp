#include "ChocolateBox.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	ChocolateBox kitkat(15,30);
	ChocolateBox fiveStar(30,75);
	ChocolateBox cadbury(5, 25);
	ChocolateBox galaxy(6, 20);

	ChocolateBox total = kitkat + fiveStar + cadbury + 27 + 22 + galaxy + 3; 

	cout << "Minimum Chocolate in the box: " << total.GetMinChocolate() << endl;
	cout << "Maximum Chocolate in the box: " << total.GetMaxChocolate() << endl;

	
	return 0;
}

/*
	the above arithmetic expression will evaluate like this

	ChocolateBox total = ((((((kitkat + fiveStar) + cadbury) + 27) + 22) + galaxy) + 3)


	here, we don't use any function for value + value (ex: 7 + 12)

	so, following type of arithmetic expression will give error

	ChocolateBox total = 7 + 12 + kitkat + fivestar + 3 + galaxy;

	because first two operands is in "value + value" form
 */