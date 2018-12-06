#include <iostream>
using namespace std;
 
class Cents
{
        private: int m_cents;
 
        public: Cents(int cents) 
        { 
                m_cents = cents; 
        }
 
        public: int GetCents() const 
        { 
                return m_cents; 
        }
};
 
Cents Add(const Cents &c1, const Cents &c2)
{
    Cents sum = Cents(c1.GetCents() + c2.GetCents());

    return sum;
}
 
int main()
{
    Cents cents1(6);
    Cents cents2(8);

    Cents sum = Add(cents1, cents2);
    
    cout << "I have " << sum.GetCents() << " cents." << endl;
 
    return 0;
}