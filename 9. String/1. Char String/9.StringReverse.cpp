#include <iostream>
using namespace std;

int stringLength(char *line) {
	
	int len = 0;
	for(int i = 0; line[i] != '\0'; i++) {
		len++;
	}

	return len;
}

void copyString(char source[], char destination[]) {
	int index;

	for(index = 0; source[index] != '\0'; index++) {
		destination[index] = source[index];
	}

	destination[index] = '\0';
}

void reverseString(char *str) {
	int len = stringLength(str);	


	char storeStr[len];

	copyString(str, storeStr);

	int i, j;
	for(i = len - 1, j = 0; i >= 0 && j < len; i--, j++) {
		str[j] = storeStr[i];
	}
}

int main(int argc, char const *argv[])
{
	char name[25];

	cout << "Enter your name" << endl;
	cin >> name;

	cout << name << endl << endl;

	reverseString(name);

	cout << name << endl;

	return 0;
}