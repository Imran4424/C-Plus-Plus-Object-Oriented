#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	string givenStr;
	getline(cin, givenStr);

	vector <string> words;

	string tempWord;

	for(int i = 0; i <= givenStr.size(); i++) {
	
		if(' ' == givenStr[i] || i == givenStr.size()) {
			words.push_back(tempWord);

			tempWord.clear();

			continue;
		}

		tempWord += givenStr[i];	
	}

	string reveseStr;

	for(int i = words.size() - 1; i >= 0; i--) {

		reveseStr += words[i];
	}

	cout << reveseStr << endl;

	return 0;
}