#include <iostream.h>
#include<conio.h>

class Example {
public:
    static int staticVariable;


    Example() {
	staticVariable++;
    }


    void count() {
	cout << "Static Variable: " << staticVariable << endl;
    }
};


int Example::staticVariable = 0;

int main() {
    Example obj1;
    clrscr();
    obj1.count();

    Example obj2;
    obj2.count();

    Example obj3;
    obj3.count();


    obj1.count();
    obj2.count();
    getch();
    return 0;
}
