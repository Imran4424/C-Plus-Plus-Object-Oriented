/*
	write a program to demonstrate nested class in c++	
*/

#include <iostream>
using namespace std;


class Enclosing
{
	private: int x = 10, y = 12;

	public: class Nested
	{
		private: int a = 7, b = 11;

		public: void Show()
		{
			Enclosing obj;

			cout << "Enclosing: " << obj.x << " " << obj.y << endl;			
		}

		public: void ShowOwn()
		{
			cout << "Nested: " << a << " " << b << endl;
		}
	};

	public: void Show()
	{
		Nested obj;

		//cout << "Nested: " << obj.a << " " << obj.b << endl; // this statement will give error because 
								    // enclosing class members can not access 
								   // nested class private variables

		obj.ShowOwn(); // now this is OK
		
		obj.Show();
	}

};


int main(int argc, char const *argv[])
{
	Enclosing red;

	red.Show();


	Enclosing::Nested green; // now this is OK, becase Enclosing class memeber nested class
				// is public, and we can access class members outside the class

	return 0;
}