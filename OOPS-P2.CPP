#include <iostream.h>
#include<conio.h>

void main()
    {
    int a,b;
    clrscr();

    cout << "Enter the first digit: ";
    cin >> a;

    cout << "Enter the second digit: ";
    cin >> b;

    int c = a * b;

     cout << "The product of " << a << " and " << b << " is: " << c;

    getch();
}