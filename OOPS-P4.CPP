#include <iostream.h>
#include<conio.h>

void main() {
      clrscr();
    int digit1, digit2;
    char operation;

    cout << "Enter the first digit: ";
    cin >> digit1;

    cout << "Enter the second digit: ";
    cin >> digit2;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    double result;

    switch(operation) {
	case '+':
	    result = digit1 + digit2;
	    break;
	case '-':
	    result = digit1 - digit2;
	    break;
	case '*':
	    result = digit1 * digit2;
	    break;
	case '/':
	    result = digit1 / digit2;
	    break;
	default:
	    cout << "Invalid operation entered!";

    }

    cout << "Result: " << result;

    getch();
}