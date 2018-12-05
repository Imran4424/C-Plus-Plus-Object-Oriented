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

    cout << " Accumulator Current value: " << a_obj.value << endl;
    cout << " Multipicator Current value: " << m_obj.value << endl;
}
 
int main()
{
    Accumulator red;
    red.Add(5); // add 5 to the accumulator

    //red.Show();

    Multipicator blue;
    blue.Mul(12);

    Reset(red, blue); // shows both class object current value
    
    Reset(red);   // resets the accumulator to 0
    red.Show();

    Reset(blue);  // resets the multipicator to 0
    blue.Show();

    return 0;
}

/*
    a function can be friend to more than one class

    in that case, friend function some limitations

                  friend function can access private class variables

                  but can't modify them


    we can overcome this by friend function overloading
*/