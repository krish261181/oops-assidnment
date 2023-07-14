#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();
    int arr[5] = {11 ,12 ,14 ,15 ,16};

    cout << "Even numbers is :=>> ";
    for (int i = 0; i < 5; i++) {
	if (arr[i] % 2 == 0) {
	    cout << arr[i] << " ";
	}
    }

    getch();
}
