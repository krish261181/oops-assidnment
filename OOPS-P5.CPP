#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int i,a=0,b=1,fibo,n;

	cout<<"enter the number of  fibonacci serise :";
	cin>>n;

	cout<<"fibonacci serise is :";

	for(i=0;i<=n;i++)
	{
	 if(i<=1)
	  a=i;
	  else
	  {
	  a=b;
	  b=fibo;
	  fibo=a+b;
	  }
	   cout<<fibo<<"  ";
	}

  getch();

}