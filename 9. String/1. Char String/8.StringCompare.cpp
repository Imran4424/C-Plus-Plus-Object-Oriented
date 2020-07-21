#include <iostream>
using namespace std;

int compareString(char *subject, char *given) {
	int i;

	for(i = 0; subject[i] != '\0'; i++) {
		if(subject[i] != given[i]) {
			return subject[i] - given[i]; // we can also use break instead
		}
	}

	return subject[i] - given[i];
}

int main(int argc, char const *argv[])
{
	char wordOne[100], wordTwo[100];

	cout << "Enter two words" << endl;
	cin >> wordOne >> wordTwo;

	int result = compareString(wordOne, wordTwo);

	cout << endl;

	if(0 == result) {
		cout << "Both string are equal" << endl;
	} else if(result > 0) {
		cout << "wordOne is greater than wordTwo" << endl;
	} else {
		cout << "wordTwo is greater than wordOne" << endl;
	}

	return 0;
}