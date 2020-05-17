#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char word[15];

	word[0] = 'C';
	word[1] = 'o';
	word[2] = 'd';
	word[3] = 'e';

	for(int i = 0; i < 4; i++) {
		cout << word[i];		
	}

	cout << endl;


	return 0;
}