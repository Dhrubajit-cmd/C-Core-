// In this class we shall learn and solve some awesome pattern questions in C++ 
#include<iostream>
using namespace std;

int main()
{
   // Rectangle Pattern (Print it)
    int row ; 
    cout << "Enter the rows" << endl ; 
    cin >> row ; 
    int col ;
    cout << "Enter the coloumns " << endl ; 
    cin >> col ; 
    for (int i = 1 ; i <= row ; i++){
            for (int j = 1 ; j <= col ; j++){
                cout << "*";
            }
            cout << endl ; 
    }
  // Hollow Rectangle Pattern (Print It)
    int rows ; 
    cout << "Enter the rows" << endl ;
    cin >> rows;  
    int columns ; 
    cout << "Enter the column" << endl; 
    cin >> columns ;
    for(int i = 1 ; i <= rows ; i++){
      for(int j = 1 ; j <= columns ; j++){
        if(i == 1 || i == rows){
          cout << "*" ;
        }
        else if(j == 1 || j == columns){
          cout << "*" ; 
        }
        else{
          cout << " " ; 
        }
       
      }
    cout << endl ;
    } 

  // Inverted Half Pyramid (Print It)
   int n ;
   cout << "Enter the number of rows you want : " << endl ; 
   cin >> n ; 
   for(int i=n ; i >= 1; i-- ){
    for (int j = 1 ; j <= i ; j++){
      cout << "*" ;
    }
    cout << endl ; 
   }
  // Half pyramid after 180 degree rotation (Print it)
   int m ; 
   cout << "Enter the number of rows you want: " << endl ; 
   cin >> m ; 
   for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= n ;j++){
      if(j <= n-i){
        cout << " " ;
      }
      else{
        cout << "*" ; 
      }
    
    }
    cout << endl ; 
   }
   // Half Pyramid Using Numbers : 
   int x ; 
   cout << "Enter the number of rows you want: " << endl ; 
   cin >> x ;
   for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= i ; j++){
      cout << i <<" " ; 
    }
    cout << endl ; 
   }  
   // Floyd's Triangle 
   int val ; 
   cout << "Enter the number of rows you want: " << endl ; 
   cin >> val ; 
   int count = 1 ; 
   for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= i ; j++){
      cout << count << " "; 
      count++ ; 
    }
    cout << endl ; 
   }
   // Butterfly Pattern 
        // Here n is given as 4. 
      int rowm ; 
      cout << "Enter the number of rows you want : " << endl ; 
      cin >> rowm ; 
      for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
          cout << "*" ;
        }
        int space = 2*rowm - 2*i ; 
        for(int j = 1 ; j<= space ; j++){
          cout << " " ;  
        }
        for(int j = 1 ; j <= i ; j++){
          cout << "*" ;
        }
        cout << endl ;
      }
      for(int i = n ; i >= 1 ; i--){
        for(int j = 1 ; j <= i ; j++){
          cout << "*" ;
        }
        int space = 2*rowm - 2*i ; 
        for(int j = 1 ; j<= space ; j++){
          cout << " " ;  
        }
        for(int j = 1 ; j <= i ; j++){
          cout << "*" ;
        }
        cout << endl ;
      }
    return 0;
}
