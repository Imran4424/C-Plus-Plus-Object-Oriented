#include <iosream>
using namespace std;

void Print(int value)
{
	cout << value << endl;
}


int main(int argc, char const *argv[])
{
	
	Print(12 + 9);  // an anonymous object is created to hold the vlue of 12+9 and then pass it to the Print
	
	return 0;
}