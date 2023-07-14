#include<iostream.h>
#include<conio.h>
void main()
{
    int n,factorial=1;
    clrscr();
    cout<<"Enter the number of the factorial :  ";
    cin>>n;

    if(n<0)
    {
      cout<<"\n  Error: Factoraial is not defined for negative numbers. ";
    }

    for(int i=1;i<=n;i++)
    {
	factorial*=i;
    }
    cout<<"Factoraial of "<<n <<" number is : "<<factorial ;

getch();

}