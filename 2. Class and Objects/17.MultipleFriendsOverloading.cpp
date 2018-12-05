/*
    write a program to demonstrate multiple friends in c++
*/

#include <iostream>
using namespace std;

class Multipicator;

class Accumulator
{

    public: int value;

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

    private: friend void Reset(Accumulator &a_obj);
    private: friend void Reset(Accumulator &a_obj, Multipicator &m_obj);
};

class Multipicator
{
    private: int value;

    public: Multipicator()
    {
        value = 1;
    }

    public: void Mul(int num)
    {
        value = value * num;
    }

    public: void Show()
    {
        cout <<"Current Value: " << value << endl;
    }

    private: friend void Reset(Multipicator &m_obj);
    private: friend void Reset(Accumulator &a_obj, Multipicator &m_obj);
};


void Reset(Accumulator &a_obj)
{
    a_obj.value = 0;
}

void Reset(Multipicator &m_obj)
{
    m_obj.value = 0;
}
 

void Reset(Accumulator &a_obj, Multipicator &m_obj)
{
    // can not change any private value in this function because this function is friend of multiple class

    
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