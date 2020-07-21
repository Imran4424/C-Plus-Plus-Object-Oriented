#include <iostream>
using namespace std;

void toUpper(char *str) {
	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
		}
	}
}

int main(int argc, char const *argv[])
{
	
	return 0;
}