#include<iostream>
using namespace std ; 
int main(){
 // Inverted Pattern{Print it}
   int a ; 
   cout << "Enter the number of rows you want: " << endl ; 
   cin >> a ;
   for(int i = 1 ; i <= a ; i++){
    for(int j = 1 ; j <= a+1-i ; j++){
        cout << j << " ";
    }
    cout << endl ; 
   }
// 0 1 Pattern Question 
   int b ; 
   cout << "Enter the number of rows you want: " << endl ;
   cin >> b ;
   for(int i =1 ; i <= b ; i++){
    for(int j =1 ; j <= i ; j++){
     if((i+j)%2 == 0){
        cout << " 1" ;
     }
     else{
        cout << " 0"; 
     }
    }
     cout << endl ; 
   }
// Rhombus Pattern 
  int c ;
  cout << "Enter the number of rows you want: " << endl ;
  cin >> c ;
  for(int i =1 ; i <= c ; i++){
    
  }
    return 0 ; 
}