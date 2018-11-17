#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string text = "I am a Programmer";

	cout << text << endl;

	cout << "Is the string empty? " ;

	if (text.empty())
	{
	 	cout << "Yes" << endl; 
	} 
	else
	{
		cout << "No" << endl;
	}

	text.clear();

	cout << "string cleared" << endl;

	cout << "Is the string empty? " ;

	if (text.empty())
	{
	 	cout << "Yes" << endl; 
	} 
	else
	{
		cout << "No" << endl;
	}
	
	return 0;
}