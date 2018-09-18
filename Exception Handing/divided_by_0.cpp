#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num, num2;

	try
	{
		cout<<"enter two integer numbers respectively"<<endl;

		cin>>num>>num2;

		if (num2 == 0)
		{
			throw 0;
		}

		result = num / num2;

		cout<<"The dividation result is: "<<result<<endl;
	}

	return 0;
}