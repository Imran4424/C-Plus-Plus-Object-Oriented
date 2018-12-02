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


    private: friend void Show(const Accumulator &a_obj,const Multiply &m_obj);
};

class Multiply
{
    private: int value;

    public: Multiply()
    {
        value = 1;
    }

    public: void Mul(int num)
    {
        value = value * num;
    }


    private: friend void Show(Accumulator &a_obj, Multiply &m_obj);
};



void Reset(const Accumulator &a_obj, const Multiply &m_obj)
{

}
 
int main()
{
    Accumulator red;
    Multiply green;

    Show(red,green); // to show both class objects value
    
    red.Add(5); // add 5 to the accumulator

    green.Mul(15);

    Show(red,green); // to show both class objects value

    return 0;
}