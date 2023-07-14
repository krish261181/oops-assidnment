#include<iostream.h>
#include<conio.h>
void main()
{
	int n,num1,temp,num2=0;
	clrscr();
	cout<<"Enter the number :";
	cin>>n;
	num1 = n;
	while(n!=0)
	{
		temp=n%10;
		num2=num2*10+temp;
		n /=10;
	}
	if(num1==num2)
	{
		cout<<num1 <<" a Palindrome number";
	}
	else
	{
		cout<<num1 <<" not a Palindrome number";
	}
getch();
}