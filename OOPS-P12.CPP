#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n, num1 , temp, num2 = 0;
	clrscr();

	cout << "Enter a number : ";
	cin >> n;
	num1 = n;
	while (num1 != 0)
	{
		temp = num1 % 10;
		num2 += pow(temp, 3);
		num1 /= 10;
	}
	if (num2 == n) {
		cout << n << " is an Armstrong number" << endl;
	}
	else
	{
		cout << n << " is not an Armstrong number" << endl;
	}
 getch();
}