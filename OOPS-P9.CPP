#include<iostream.h>
#include<conio.h>
#include<stdio.h>


int max(int a, int b, int c) {
    int maxNum = a;
    if (b > maxNum)
	maxNum = b;
    if (c > maxNum)
	maxNum = c;
    return maxNum;
}

int main() {
    clrscr();
    int x , y , z;
    cout << "Enter the number of x : ";
    cin >> x ;

    cout << "Enter the number of y : ";
    cin >> y ;

    cout << "Enter the number of z : ";
    cin >> z ;

    int result = max( x , y , z );
    cout << "The greatest number is: " << result << endl;

    getch();

}
