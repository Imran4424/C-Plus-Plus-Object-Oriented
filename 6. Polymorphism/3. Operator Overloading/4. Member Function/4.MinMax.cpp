#include <iostream>
using namespace std;

class ChocolateBox
{
	private: int maxChocolate;
	private: int minChocolate;

	public: ChocolateBox()
	{
		minChocolate = 0;
		maxChocolate = 0;
	}

	public: ChocolateBox(int min, int max)
	{
		minChocolate = min;
		maxChocolate = max;
	}

	public: int GetMinChocolate()
	{
		return  minChocolate;
	}

	public: int GetMaxChocolate()
	{
		return maxChocolate;
	}

	public: ChocolateBox operator+(const ChocolateBox &fiveStar)
	{
		int min, max;

		if (minChocolate < fiveStar.minChocolate)
		{
			min = minChocolate;
		}
		else
		{
			min = fiveStar.minChocolate;
		}

		

		if (maxChocolate > fiveStar.maxChocolate)
		{
			max = maxChocolate;
		}
		else
		{
			max = fiveStar.maxChocolate;
		}

		
		return ChocolateBox(min, max);
	}

	public: ChocolateBox operator+(int value)
	{
		int min, max;

		if (minChocolate < value)
		{
			min = minChocolate;
		}
		else
		{
			min = value;
		}

		

		if (maxChocolate > value)
		{
			max = maxChocolate;
		}
		else
		{
			max = value;
		}

		
		return ChocolateBox(min, max);
	}


	//friend ChocolateBox operator+(int value, const ChocolateBox &fiveStar);

	/*
	this function can not convert to member function

	because this function has a value as left operand and an object as right operand

	but in member function this pointer object always remain as left operand

	and we can't have three parameters or operands because it's a binary operator 

	*/

};


/*ChocolateBox operator+(int value, const ChocolateBox &fiveStar)
{

	// calling operator+(ChocolateBox, value)

	return fiveStar + value;
}
*/

int main(int argc, char const *argv[])
{
	ChocolateBox kitkat(15,30);
	ChocolateBox fiveStar(30,75);
	ChocolateBox cadbury(5, 25);
	ChocolateBox galaxy(6, 20);

	ChocolateBox total = kitkat + fiveStar + cadbury + 27 + 22 + galaxy + 3; 

	// ChocolateBox total = 7 + kitkat + fiveStar + cadbury + 27 + 22 + galaxy + 3; 
	// this line will give error, because there no member function as value + object

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

/*

	friend function can't overload following operators, so we need to overload them with member function

	assignment (=)
	subscript ([])
	function call (())
	member selection (->)


	member function can't overload following operators, so we need to overload them using friend function 
	or normal function

	input operator(>>)
	output operator(>>)
	binary operator who have value as left operand ( 5 + obj)

*/

/*
	unary operators can be overloaded with 

	friend function
	normal function and
	member function

	but it is preferred to use member function because it has only one operand
*/