// In this class we shall learn about data-types and type modifiers 

# include <iostream>
using  namespace std ;
int main(){
    // Primitive Data Types :- 
    // 1. Integer
    // 2. Float(7 decimal digits) , Double(15 decimal digits)
    // 3. Boolean {True,False}
    //            [0,1]
    // 4. Characer :- c , f , @ , %

// Integer : (Occupies  -> 4 Bytes or 32 bits of memory) 
    int a ; // Declaration 
    a = 12 ; // Initialisation
    cout <<"size of int "<<sizeof(a)<< endl ; //sizeof() is a function helps us to get the size of a variable.
// Float : 
   float b; 
   b = 12.45 ;
   cout <<"size of float "<<sizeof(b)<< endl ;
// Boolean :
   bool c ;
   c = true ;
   cout<<"size of bool "<<sizeof(c)<< endl ;
// Character :
   char d; 
   cout<<"size of char "<<sizeof(d)<< endl ;

// Type Modifiers :
  /*
  1. Signed.
  2. Unsigned.
  3. Long Int - 8 bytes 
  4. Short Int - 2 bytes 
  */
 short int si ;
 long int li ; 
 cout<<"size of short int "<<sizeof(si)<< endl ;
 cout<<"size of long int "<<sizeof(li)<< endl ;


 return 0 ;

// This is all about data types and type modifiers in C++. 
}