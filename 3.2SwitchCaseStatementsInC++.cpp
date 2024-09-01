// In this class we shall learn about the switch case statements in C++ .
#include<iostream>
using namespace std;

int main()
{
    char button ;
    cout << "Input a character: " << endl ;
    cin >> button ;

    switch(button){
        case 'a' :
          cout << "Hello" << endl ; 
          break ;
        case 'b' :
          cout << "Salut" << endl ;
          break;
        case 'c' :
          cout << "Hola" << endl ;
          break ;
        default :
           cout << "I am learning more" << endl ; 
           break ;  
    }
    
    int a,b;
    cout << "Input Two Numbers: " << endl ;
    cin >> a >> b ; 
    char op ;
    cout << "Enter the operator:" << endl; 
    cin >> op ;
    switch(op){
        case '+':
            cout << a + b << endl ; 
            break ; 
        case '-':
           cout << a - b << endl ;
           break ; 
        case '*':
           cout << a * b << endl ;
           break;
        case '/':
           cout << a/b << endl; 
           break ; 
        default :
           cout << "I am learning more" << endl; 
           break ;
    }
    return 0;
}