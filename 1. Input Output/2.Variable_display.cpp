/*
	An int variable num contains 7. Write a program that prints the value of num.
*/

#include <iostream> // for cout
using namespace std;

int main(int argc, char const *argv[])
{
	int num = 7;

	cout<<num<<endl;
	
	return 0;
}

/*
	here, in cout, endl is equivalent to '\n' escape sequence character

	now, why this line?
	using namespace std;

	we will talk about namespace later.
	
*/