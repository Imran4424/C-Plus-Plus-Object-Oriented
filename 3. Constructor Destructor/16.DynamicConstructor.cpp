/*
	write a program to demonstrate dynamic constructor in c++
*/

#include <iostream>
#include <cstring>
using namespace std;

class DynamicConstructor
{
	private: char *name;
	private: int length;

	public: DynamicConstructor()
	{
		length = 0;
		name = new char(length+1);
	}
	
	public: DynamicConstructor(char *line)
	{
		length = strlen(line);
		name = new char(length+1);

		strcpy(name, line);
	}

	public: void Join(DynamicConstructor &a, DynamicConstructor &b)
	{
		
	}

	public: void Display()
	{
		cout << name << endl;
		cout << "Number of Characters: " << length << endl;
	}
};