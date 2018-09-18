/*
    
*/
#include <iostream> 
using namespace std; 
  
class MyExcept1 {}; 
  
class MyExcept2 
{ 
public: 
  
    // Conversion constructor 
    MyExcept2 (const MyExcept1 &e ) 
    { 
        cout << "Conversion constructor called"; 
    } 
}; 
  
int main() 
{ 
    try
    { 
        MyExcept1 myexp1; 
        throw myexp1; 
    } 
    catch(MyExcept2 e2) 
    { 
        cout << "Caught MyExcept2 " << endl; 
    } 
    catch(...) 
    { 
        cout << " Defaule catch block " << endl; 
    } 
    return 0; 
} 
