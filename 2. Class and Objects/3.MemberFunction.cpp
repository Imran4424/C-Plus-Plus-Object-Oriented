#include <iostream>
using namespace std;

class Box
{
	private: int length, width;

	// Member function
	// inside the class
	public: void Assign(int l, int w) 
	{
		length = l;
		width = w;
	}
	
	public: int Area();
};

// Member function
// Outside the class
int Box::Area()
{
	return width*length;
}



int main(int argc, char const *argv[])
{

	cout << "input length and width of a box" << endl;

	int length,width;
	cin >> length >> width;

	Box red;

	red.Assign(length, width);

	cout << "Area of the Box is: " << red.Area() << endl;

	return 0;
}

/*
	Member functions can be define in two ways in C++

	Inside Class
	Outside class
	

	Member function inside the class, inside class functions are by default inline function
	
	Inside class member functions declared and defined inside the class

	class Box
	{
	
		private: int length, width;

		// Member function
		// inside the class
		void Assign(int l, int w) 
		{
			length = l;
			width = w;
		}
		
		int Area();
	};

	Advantage - executes faster because compiler doesn't have to deal with overheads of 
	            searching the function body int the program

	Disadvantage - inside functions(inline functions) take up more memory because they are copied
	               into every call instead of being defined just once.


	
	Outside Class members declared inside the class but their body defined outside the class

	class Box
	{
	
		private: int length, width;

		// Member function
		// inside the class
		void Assign(int l, int w) 
		{
			length = l;
			width = w;
		}
		
		int Area(); // just declaration
	};

	// Member function
	// Outside the class
	// Definition with body

	int Box::Area()
	{
		return width*length;
	}


	Advantage - Takes very less memory memory because function is just defined once for every
	            function call

	Disadvantage - Takes more runtime than inside class function because compiler needs to
	               find the function body then jump the control to the function body after 
	               finishing the function compiler jump back the control to the class. These
	               overhead increase the run time.

	
	Considerations

	For small and simple member functions we can easily define members function inside the class

	But

	For large and complex function body we should use outside class definition for member
	functions

	Note

	:: - this is an operator, this is called scope resolution

	this operator is used after the class and before the class member.
	This is a binary operator

	This operator is also used to define outside class definition for member functions

	// Member function
	// Outside the class
	// Definition with body

	int Box::Area()
	{
		return width*length;
	}

	we will see more use of scope resolution in future
*/