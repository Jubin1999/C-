#include<stdio.h>
int square(int n){
    return n*n;

}
 
int main()
{
  int a,b;
 
  printf(" \n Please Enter any integer Value : ");
  scanf("%d", &a);
  b=square(a);
  printf("\n Square of a given number %d is  =  %d", a,b);
 
  return 0;
}