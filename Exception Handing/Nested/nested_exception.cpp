/*
    this is a nested try catch block example

    we can rethrow an exception using 
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
             cout << "Handle Partially "; 
             throw;   //Re-throwing an exception 
        } 
    } 
    catch (int n) 
    { 
        cout << "Handle remaining "; 
    }

    return 0; 
}
