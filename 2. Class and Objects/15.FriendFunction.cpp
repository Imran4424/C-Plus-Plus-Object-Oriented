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
        cout << "Current Value: " << value << endl;
    }

    friend void Reset(Accumulator &obj); // declaring friend function
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

/*
    As we know, only class members can access private member variables


    so, if we need to access private variable outside the class

    then we can easily declare a funtion friend of that class and the friend class can access private 
    class members

    see the code for practical example
*/