#include <iostream>
using namespace std;

int stringLength(char *line) {
	
	int len = 0;
	for(int i = 0; line[i] != '\0'; i++) {
		len++;
	}

	return len;
}


int main(int argc, char const *argv[])
{
	char text[100];

	cout << "enter a text" << endl;
	cin.getline(text, sizeof(text));

	cout << "length of the entered string is - " << stringLength(text) << endl;

	return 0;
}