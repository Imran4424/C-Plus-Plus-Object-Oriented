/*
	write a proram to demonstrate structure in c++
*/

#include <iostream>
using namespace std;

struct Box
{
	int length,width;

	int Area()
	{
		return length*width;
	}
};


int main(int argc, char const *argv[])
{
	Box red;

	red.length = 10;
	red.width = 8;

	cout << "Area is: " << red.Area() << endl;
	
	return 0;
}


/*
	In this chapter we will learn about class and objects.

	for learning classes first we need to understand the basic operations of structres.

	although classes are different from structure, the low level basic concept of 
	classes are same as structures.


	because classes are build on the basic concept of structures and evolve into a new 
	programming paradism called object oriented programming.


	now, let's talk about struct

	structs are mainly a package of variables and functions, it is also called as user 
	defined data types.

	in a struct code block we can declare multiple variables and functions in a single 
	code block as for the requirements and access them using struct type variable

	for accessing struct member variables we use dot(.) operators, sometimes which is 
	called member access operator

	struct also support constructors like classes and structure  type object creating 
	become easy with these constructors

	example

	struct Student
	{
		// variables
		int id; 
		string name;

		Student() { } // default constructor
	
		Student(int sId, string sName) // constructor
		{
			id = sId;
			name = sName;
		}

		//functions

		void Display()
		{
			cout << id << " " << name << endl;
		}
	};

	now, you may ask what is constructor ? for now just remember constructor are 
	helpful in structure type variables. Later we will have a long discuss about 
	constuctor

	see the above code for better understanding
*/