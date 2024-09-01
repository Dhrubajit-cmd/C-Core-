// In this class we shall learn about loops in C++.

#include <iostream>
using  namespace std ;
int main (){
    int n ;
    cin >> n ;

    int sum = 0 ;
    // For loop :
    for(int counter = 1 ; counter <= n ; counter++){
        sum = sum + counter  ;
    }

    cout << sum << endl  ;
    
    // While Loop :
    int input ;
    cin >> input ;
    while(input > 0){
        cout << input << endl   ;
        cin >> input ;
    }

    // Do While Loop :
    int num ;
    cin >> num ;
    do{
        cout << num << endl ;
    }while(num>0);

   // A simple program 
    int factorial ; 
    cout << "Enter a number whose factorial you want to find : " << endl ;
    cin >> factorial ; 
    if(factorial == 0){
        cout << "The factorial of " << factorial << " is 1 ." << endl; 
    }
    else if(factorial == 1){
        cout << "The factorial of "<< factorial << " is 1. " << endl; 
    }
    else {
        int fact = 1 ; 
        for(int i = 1 ; i <= factorial ; i++){
            fact = fact * i ; 
        }
        cout << "The factorial of " << factorial << " is " << fact << endl; 


        /* 
        
        
        
        */
    }
    




    return 0 ; 
}