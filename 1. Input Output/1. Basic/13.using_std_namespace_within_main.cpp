/*
	write a program using std namespace within main function
*/

#include <iostream>


int main(int argc, char const *argv[])
{

	std::cout<<"Not using std namespace"<<std::endl;

	using namespace std;

	cout<<"I am a programmer"<<endl;

	return 0;
}

/*
	this code shows us we can use namespace at anywhere in our code

	it also shows that

	we can use namespace components with scope resolution after the

		using namespace statement
*/