#include <iostream>
using namespace std;

int stringLength(char *line) {
	
	int len = 0;
	for(int i = 0; line[i] != '\0'; i++) {
		len++;
	}

	return len;
}

void stringConcatenation(char *first, char *second) {
	int length = stringLength(first);

	int i, j;

	for(i = length, j = 0; second[j] != '\0'; i++, j++) {
		first[i] = second[j];
	}

	first[i] = '\0';
}

int main(int argc, char const *argv[])
{
	
	return 0;
}