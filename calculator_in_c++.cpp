#include"bits/stdc++.h"

using namespace std;

int main()
{
    int choice, num1, num2;
    while(1)
    {
        cout<<"\t\t.....MENU....."<<endl;
        cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
			case 1:
				    int add;
				    cout<<"Enter two numbers:";
				    cin>>num1>>num2;
				    add = num1+num2;
				    cout<<"Addition: "<<num1<<" + "<<num2<<" = "<<add<<endl;
				    break;
			case 2:
			        int sub;
					cout<<"Enter two numbers:";
					cin>>num1>>num2;
					sub = num1-num2;
					cout<<"Subtraction: "<<num1<<" - "<<num2<<" = "<<sub<<endl;
					break;
			case 3:
			        int mult;
					cout<<"Enter two numbers:";
					cin>>num1>>num2;
					mult = num1*num2;
					cout<<"Multiplication: "<<num1<<" * "<<num2<<" = "<<mult<<endl;
					break;
			case 4:
			        float div,a,b;
					cout<<"Enter two numbers:";
					cin>>a>>b;
					div = a/b;
					cout<<"Division : "<<a<<" / "<<b<<" = "<<div<<endl;
					break;
			case 5:
			        exit(0);
			default :
			        cout<<"Wrong Input!!!";
					break;									    
		}  
    }
     return 0;
}