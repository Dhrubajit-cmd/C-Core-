// In this class we shall learn about the if-else statements in C++ . 

# include <iostream>
using  namespace std ;
int main(){
    
  int savings ;
  cout << "Enter your savings: \n" ; 
  cin >> savings ; 

  if(savings > 5000){
    cout << "I shall go with Neha. \n" ;
  }
  else if (savings < 2000){
    cout << "I shall go with Friends. \n";
  }
  else {
    cout << "I shall go with Rashmi. \n";
  }


  // Find the max of three different numbers . 
   int a , b ,c ;
   cin >> a >> b >> c ;

   if (a > b){
     if(a>c){
        cout << "The max number is:\n" << a ;
     }
     else{
        cout << "The max number is:\n" << c ;
     }
   }
   else{
    if(b > c){
        cout << "The max number is:\n" << b ;
    }
    else {
        cout << "The max number is:\n" << c ;
    }
   }
  
    
    
    
    
    // These are all about if-else statements in C++ . 
    
    
    
    
    
    
    
    
    
    
    return 0 ; 
} 
