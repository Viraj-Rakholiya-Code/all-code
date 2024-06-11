#include<iostream.h>
#include<conio.h>

class a{
public:
	int a;
	void inputA(){
		cout<<"Enter A :: ";
		cin>>a;
	}
};
class b{

	public:
	int b;
	void inputB()
	{
		cout<<"Enter B :: ";
		cin>>b;
	}

};

class c:public b,public a{

	public:

	int c;

	void inputC()
	{
		cout<<"Enter C :: ";
		cin>>c;
	}

	void display()
	{
		cout<<"A == "<<a<<endl;
		cout<<"B == "<<b<<endl;
		cout<<"C == "<<c<<endl;
	}
};

void main()
{
	clrscr();

	c obj;

	obj.inputA();
	obj.inputB();
	obj.inputC();
	obj.display();

	getch();
}