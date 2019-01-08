#include <iostream>
 
int main()
{
    try
    {
        throw 4.5; // throw exception of type double
        std::cout << "This never prints\n";
    }
    catch(double x) // handle exception of type double
    {
        std::cerr << "We caught a double of value: " << x << '\n';
    }
 
    return 0;
}

/*
    code from learncpp
*/