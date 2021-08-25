#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,sum,product;
    //clrscr();
    printf("\nEnter the value of a:");
    scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    sum=a+b;
    product=a*b;
    printf("\nThe sum is=%d",sum);
    printf("\nThe product is=%d",product);
    getch();
    return 0;
}
