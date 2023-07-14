#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void fibo(int n) {
    int a = 0, b = 1, Term;
    cout << "Fibonacci series up to " << n << ":=>  ";

    while (a <= n) {
	cout << a << "  ";
	Term = a + b;
	a = b;
	b = Term;
    }
}

int main() {
    clrscr();
    int fibonacii;
    cout << "Enter the value of fibonacci : ";
    cin >> fibonacii;
    fibo(fibonacii);
    getch();
}
