#include<iostream>
using namespace std;

int main()
{
    int a = 10 ;
    int b ;
   // Pre-Incrementer
    b = ++a ;
    cout << a << "  " << b << endl ; 
   // Post-Incrementer
    int d = 10 ;
    int c ; 
    c = d++ ;
    cout << d << "  " << c << endl ;

    // Relational Operators : Defines a realtion between two operands and returns a boolean value.{True, False}    
    int m = 5 ;  // 0 means false ; 1 means true . 
    int n = 4 ;
    cout << (m == n)<< endl  ; 
    cout << (m > n)<< endl ;
    cout  << (m != n) << endl; 
    cout << (m < n)<< endl ; 
    cout << (m <= n) << endl ;
    cout << (m >= n) << endl ;
    // Logical operators : Used to connect multiple conditions/expressions together or to reverse logical value .
    // && {AND} ; || {OR} ; ! {NOT}
    int number ; 
    cout << "Enter any number of your choice: " << endl ;
    cin >> number ;
    if (number%2 == 0 && number%3 == 0){
        cout << "The number is divisible by both 2  and 3 " << endl ; 
    }
    else if (number%2==0 || number%3 == 0){
        cout << "The number is divisible by only one " << endl ;
        if(number%2 == 0){
            cout << "The number is divisible by 2  " << endl;
        }
        else if (number%3 == 0){
            cout << "The numebr is divisible by 3  " << endl; 
        }
    }
    else{
        cout << "The number is divisible by neither 2 nor 3 " << endl ; 
    }
    // Bitwise Operator : Operate on bits and perform bit-by-bit operations. 
    // AND ; OR ; XOR(0,0 - 0 ; 1,1 - 0 ; 0,1 - 1 ; 1,0 - 1) ; Ones Complement(1-0;0-1) ; Left Shift Operator ; Right Shift Operator .
    //                                                                       Formulae :-  a << n -> a * 2^n   ; a >> n -> a/2^n
    // Assignment Operators :  Assigns value to the various chars. Examples :(+= ; -= ; = ; *= ; /=)
    // Miscellaneous Operators : Ex - sizeof(){returns the size of variable} ; condition?x:y{Returns value of X if condition is true or else 
    // value of Y}; cast{Converts one data type into another }; cpmma(,){Causes a sequence of operations to be performed.}; reference(&){Returns
    // address of a variable} ; pointer(*){Pointer to a variable}
    int df = 10 ;
    int db = 5 ;
    int dc = df > db ? df-db : db-df ; // {Turnery or Condition Operator Example}

    int ch ;
    cout << &(ch) << endl ; // Retruns the address of a variable. 

    int * chm = &ch ;  // Shall learn about it later. Advanced Topics in C++ . 

    // Casting and TypeCasting in C++ :

    int num = 10;
    double numDouble = static_cast<double>(num); // Static Casting in C++
    cout << typeid(num).name() << endl ;  // Line to print the type of the data. 
    cout << typeid(numDouble).name() << endl; 
    
  
    
    return 0 ; 
}