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