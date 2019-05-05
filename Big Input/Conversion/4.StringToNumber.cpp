#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
	char str[] = "951753";
	char str2[] = "3.1416";
	char str3[] = "13 is my id";

	int num = atoi(str);

	int num2 = atoi(str2);
	
	int num3 = atoi(str3);

	cout << "atoi(\"951753\") is: " << num << endl;

	cout << "atoi(\"3.1416\") is: " << num2 << endl;
	
	cout << "atoi(\"13 is my id\") is: " << num3 << endl;

	return 0;
}

/*
	using atoi() function from cstdlib or stdlib.h

	atoi converts char string to int
*/