#include<stdio.h>
int main()

{
	int a = 5, b = 0, c = 9;
	
	if((a>c) || (c>b++))
	 a = a + 1;
	 else
	     b = a - b;
	     
    printf("%d%d%d",a,b,c);
    return 0;
}
