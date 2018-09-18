/*
	A derived class exception should be caught before a base class exception.

	If we put base class catch block first then the derived class catch block will never be reached.
*/


#include<iostream> 
using namespace std; 
  
class Base {}; 
class Derived: public Base {};


int main() 
{ 
   Derived d;

   // some other stuff 
   
   try 
   { 
       // Some monitored code 
       throw d; 
   } 
   catch(Base b) 
   {  
        cout<<"Caught Base Exception"; 
   } 
   catch(Derived d) //This catch block is NEVER executed 
   {  
        cout<<"Caught Derived Exception"; 
   } 
   
   return 0; 
} 

