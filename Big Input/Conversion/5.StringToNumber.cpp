#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string str = "13";
	string str2 = "3.1416";
	string str3 = "12 is even";

	int num = stoi(str);

	int num2 = stoi(str2);
	
	int num3 = stoi(str3);

	cout << "stoi(\"13\") is: " << num << endl;

	cout << "stoi(\"3.1416\") is: " << num2 << endl;
	
	cout << "stoi(\"12 is even\") is: " << num3 << endl;

	return 0;
}