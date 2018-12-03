/*
    write a program to demonstrate friend function in c++
*/

#include <iostream>
using namespace std;

class Accumulator
{

    private: int value;

    public: Accumulator()
    {
        value = 0;
    }

    public: void Add(int num)
    {
        value = value + num;
    }

    public: void Show()
    {
        cout <<"Current Value: " << value << endl;
    }

    private: friend void Reset(Accumulator &obj);
};
 

void Reset(Accumulator &obj)
{
    obj.value = 0;
}
 
int main()
{
    Accumulator red;
    red.Add(5); // add 5 to the accumulator

    red.Show();

    Reset(red); // Reset the accumulator to 0
    red.Show();
 
    return 0;
}