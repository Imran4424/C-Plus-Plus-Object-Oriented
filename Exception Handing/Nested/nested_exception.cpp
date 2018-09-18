/*
    this is a nested try catch block example

    we can rethrow an exception using "throw"

    A function can also re-throw a function using same “throw; “.
    A function can handle a part and can ask the caller to handle remaining.
*/

#include <iostream> 
using namespace std; 
  
int main() 
{ 
    try 
    { 
        try  
        { 
            throw 20; 
        } 
        catch (int n) 
        { 
             cout << "Handle Partially " << endl; 
             throw;   //Re-throwing an exception 
        } 
    } 
    catch (int n) 
    { 
        cout << "Handle remaining " << endl; 
    }

    return 0; 
}
