#include <iostream.h>
#include <conio.h>
#include <stdio.h>

int main() {
    clrscr();
    const int n=5 ;
    int arr[n] = {1, 2, 3, 4, 5};

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
	cout << arr[i] << "  ";
    }

    cout << endl;

    cout << "Reversed Array: ";
    for ( i = n - 1; i >= 0; i--) {
	cout << arr[i] << "  ";
    }

    cout << endl;

    getch();
}
