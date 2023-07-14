#include<iostream.h>
#include<conio.h>

void main()
 {
	int a,i;
	clrscr();

	cout<<"enter the value of a :";
	cin>>a;

	cout<<"even number is :=>";

	 for(i=0;i<=a;i++)
	 {
	  if(i%2==0)
	  {
	   cout<<i<<"  ";
	  }
	 }

  getch();
}