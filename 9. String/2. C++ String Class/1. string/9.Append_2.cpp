/*
	write a cpp program to demonstrate append() function to append c++ string
*/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string status = "I ";
	string job = "Programmer";


	status.append("am "); //as plain string
	
	status.append("a ");

	status.append(job); // as string class object

	cout << "Final string: " << status << endl;

	return 0;
}

/*
	like "+=" operator append function also append strings at the end of the existing string

	only exception is that, append() function only append strings at the end
	
							where "+=" operators append both character and string
*/