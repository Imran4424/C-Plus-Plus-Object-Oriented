#include <iostream>
 
double divide(int x, int y, bool &success)
{
    if (y == 0)
    {
        success = false;
        return 0.0;
    }
 
    success = true;
    return static_cast<double>(x)/y;
}
 
int main()
{
    bool success; // we must now pass in a bool value to see if the call was successful
    double result = divide(5, 3, success);
 
    if (!success) // and check it before we use the result
        std::cerr << "An error occurred" << std::endl;
    else
        cout << "The answer is " << result << '\n';
}

/*
    code from learncpp
*/