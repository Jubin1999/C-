#include<stdio.h>
main(){
	int r,c,n=10;
	for(r=n/2;r<=n;r+=2){
		for(c=1;c<n-r;c+=2)
		printf(" ");
		for(c=1;c<=r;c++)
		printf("*");
		for(c=1;c<=n-r;c++)
		printf(" ");
		for(c=1;c<=r;c++)
		printf("*");
		printf("\n");
	}
	for(r=n;r>=1;r--)
	{
		for (c=r;c<n;c++)
		printf(" ");
		for(c=1;c<=(2*r)-1;c++)
		printf("*");
		
		printf("\n");
	}
	printf("Happy valentine day");
}