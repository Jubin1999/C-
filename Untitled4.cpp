#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int choice, num1,num2;
	while(1)
	{
		printf("\t\t....MENU....");
		printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. EXit");
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				    int add;
				    printf("\n Enter two numbers:");
				    scanf("%d%d",&num1,&num2);
				    add = num1+num2;
				    printf("\nAddition: %d+%d = %d\n",num1,num2,add);
				    break;
			case 2:
			        int sub;
					printf("\n Enter two numbers:");
					scanf("%d%d",&num1,&num2);
					sub=num1-num2;
					printf("\nSubtraction: %d-%d = %d\n",num1,num2,sub);
					break;
			case 3:
			        int mult;
					printf("\n Enter two numbers:");
					scanf("%d%d",&num1,&num2);
					mult=num1*num2;
					printf("\nMultiplication : %d*%d = %d\n",num1,num2,mult);
					break;
			case 4:
			        float div,a,b;
					printf("\n Enter two numbers:");
					scanf("%f%f",&a,&b);
					div = a/b;
					printf("\nDivision : %5.2f/%5.2f = %5.2f\n",a,b,div);
					break;
			case 5:
			        exit(0);
			default :
			        printf("\n Wrong Input!!!\n");
					break;									    
		}
	}
	getch();
	return 0;
}
