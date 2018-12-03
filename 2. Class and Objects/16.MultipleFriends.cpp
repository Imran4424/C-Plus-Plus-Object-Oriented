

#include <iostream>
using namespace std;

class Multipicator;

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


    private: friend void Show(const Accumulator &a_obj,const Multipicator &m_obj);
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


    private: friend void Show(const Accumulator &a_obj, const Multipicator &m_obj);
};



void Show(const Accumulator &a_obj, const Multipicator &m_obj)
{
    cout << a_obj.value << " " << m_obj.value << endl;
}
 
int main()
{
    Accumulator red;
    Multipicator green;

    Show(red,green); // to show both class objects value
    
    red.Add(5); // add 5 to the accumulator

    green.Mul(15);

    Show(red,green); // to show both class objects value

    return 0;
}