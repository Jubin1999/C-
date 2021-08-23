#include<stdio.h>

int main(){
    int a,b,c,product;

    printf("Enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    product=(&a*&b*&c);

    printf("The product of three numbers:&a,&b,&c",product); 
    return 0;
}
