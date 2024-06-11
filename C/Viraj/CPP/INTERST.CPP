#include <iostream.h>
#include<conio.h>

float principal;
float rate;
float time;
float interest;

int main() {
clrscr();
    cout << "Enter principal amount: ";
    cin >> ::principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> ::rate;
    cout << "Enter time period (in years): ";
    cin >> ::time;

    ::interest = (::principal * ::rate * ::time) / 100;

    cout << "Simple Interest is: " << ::interest << endl;
getch();
    return 0;
}


