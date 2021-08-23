#include<iostream>

using namespace std;

int main()
{

 int i = 2, j, p;
 
 while(i <= 100){
 
   /* Initialize P */
   
    p = 1;

    for(j = 2; j < i; j++){
   
    /*if it is divisible by any other number,
      other than 1 or itself then it's not a prime
      number. */
       
       if(i % j == 0){
        
            /* If it's not a prime, Set p=0 . */
            p = 0;
       }
      
    }
    
    /* Print prime number. */
    
    if(p) {
      cout << i << " ";
    }
    
    i++; 
 }
 
 return 0;
}