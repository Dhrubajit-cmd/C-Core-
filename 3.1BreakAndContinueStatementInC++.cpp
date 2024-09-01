#include<iostream>
using namespace std;

int main()
{
    int i ;
    for(i = 1 ; i <= 100 ; i++){
        if (i%3 == 0){
            continue ; 
        }
        else if(i == 9){
            break ;
        }
        else{
            cout << i << endl ; 
        }
    }
    for (int date = 1 ; date <= 30 ; date++){
        if (date%2 == 0){
            continue ;
        }
        else{
            cout << "You can go out today" << endl ; 
        }
    }
    
    return 0;
}