
#include <iostream.h>
#include <conio.h>

void main()
{
    int arr[5] = {101,103, 104,103, 105};
    int a = 0;
    clrscr();

    for (int i = 0; i < 5; i++) {
	if (arr[i] == 103) {
	    a++;
	}
    }

    cout << "Frequency of 103  : " << a;
    getch();

   }