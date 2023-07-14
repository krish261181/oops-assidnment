#include<iostream.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();

	cout<<"Enter a  your  year : ";
	cin>>year;

       if((year%4==0&&year%100!=0)||(year%400==0))
	{
		cout<<year<<" Year is a leap year";
	}
	else
	{
		cout<<year<<" Year is not a leap year";
	}
getch();
}