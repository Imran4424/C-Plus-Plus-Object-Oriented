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

	but just remember this, cin, cout is the member of std namespace

	so if we don't write "using namespace std;", then 

	every time we write a namespace member of std, we have to write this way,
																std::cin
																std::cout
																std::endl
																std::fixed
	
*/