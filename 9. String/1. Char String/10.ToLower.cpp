#include <iostream>
using namespace std;

void toLower(char *str) {
	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
	}
}


int main(int argc, char const *argv[])
{
	
	return 0;
}