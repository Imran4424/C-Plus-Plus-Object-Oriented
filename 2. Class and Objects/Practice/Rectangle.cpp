/**
	Write a program and follow the instruction below:
	1.Generate two random numbers in the range between 5 to 10 ([5,10]), and set them as the 
	length and width of a rectangle.

	2.Write a function named getPerimeter() and return the permiter of the rectangle.

	3.Write a function named getArea() and return the area of the rectangle.

	4.Write a function named isSquare() and return true if it is a square, return false if 
	it is not a square.

	5.At the end display the information of the rectangle and the function results.
*/
#include <iostream>
#include <ctime>
using namespace std;

class Rectangle {
	int length;
	int width;

	int getRandom() {
		return rand() % 6 + 5;
	}
public:
	Rectangle() {
		srand(time(0));

		length = getRandom();
		width = getRandom();
	}

	int getPerimeter() {
		return 2 * (length + width);
	}

	int getArea() {
		return length * width;
	}

	bool isSquare() {
		return length == width;
	}

	void display() {
		cout << "Rectangle length - " << length << endl;
		cout << "Rectangle width - " << width << endl;
		cout << "Rectangle permiter - " << getPerimeter() << endl;
		cout << "Rectangle area - " << getArea() << endl;

		if (isSquare()) {
			cout << "This Rectangle is square" << endl;
		} else {
			cout << "This Rectangle is not square" << endl;
		}
	}
};



int main(int argc, char const *argv[])
{
	Rectangle myRect;

	myRect.display();

	return 0;
}