#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	char text[100];

	cout << "enter a line" << endl;
	cin.getline(text, sizeof(text));

	cout << endl << "entered text is - " << endl;
	cout << text << endl; 

	return 0;
}