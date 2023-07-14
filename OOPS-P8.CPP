#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
	clrscr();
	int a,b,c,i;

	cout<<"enter the value of a :=";
	cin>>a;

	cout<<"enter the value of b :=";
	cin>>b;

	cout<<"enter the value of c :=";
	cin>>c;

	if(a > b && a > c)
	{
	 cout<<"the gretar than number is :=>>"<<a;
	}
	  else if(b > a && b > c)
	  {
	   cout<<"the gretar than number is :=>>"<<b;
	  }
	    else if(c > a && c > b)
	    {
	     cout <<"the gretar than number is :=>>"<<c;
	    }
	     else
	      {
	      cout<<"all number are same....";
	      }

  getch();
}
