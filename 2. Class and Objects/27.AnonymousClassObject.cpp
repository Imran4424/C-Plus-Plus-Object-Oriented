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
    return Cents(c1.GetCents() + c2.GetCents());
}
 
int main()
{  
    cout << "I have " << Add(Cents(8), Cents(6)).GetCents() << " cents." << endl;
 
    return 0;
}