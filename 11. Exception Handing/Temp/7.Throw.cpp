#include <cmath> // for sqrt() function
#include <iostream>
 
// A modular square root function
double mySqrt(double x)
{
    // If the user entered a negative number, this is an error condition
    if (x < 0.0)
        throw "Can not take sqrt of negative number"; // throw exception of type const char*
 
    return sqrt(x);
}
 
int main()
{
    std::cout << "Enter a number: ";
    double x;
    std::cin >> x;
 
    try // Look for exceptions that occur within try block and route to attached catch block(s)
    {
        double d = mySqrt(x);
        std::cout << "The sqrt of " << x << " is " << d << '\n';
    }
    catch (const char* exception) // catch exceptions of type const char*
    {
        std::cerr << "Error: " << exception << std::endl;
    }
 
    return 0;
}