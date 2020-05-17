#include <iostream>
using namespace std;

void copyString(char *source, char *destination) {
	int index;

	for(index = 0; source[index] != '\0'; index++) {
		destination[index] = source[index];
	}

	destination[index] = '\0';
}

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}