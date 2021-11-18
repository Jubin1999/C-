#include<stdio.h>
#include<conio.h>
int main()
{
	int yr;
	printf("\n Enter a year:");
	scanf("%d",&yr);
	if(yr%4==0)
	{
		if(yr%100==0)
		{
			if(yr%400==0)
			    printf("\n %d is a lead year",yr);
			else
			    printf("\n %d is not a leap year",yr);    
		}
		else
		    printf("\n %d is a leap year",yr);
	}
	else
	    printf("\n %d is not a leap year",yr);
	getch();
	return 0;    
}