#include<iostream.h>
#include<conio.h>

class a{

	public:

	int a;

	void inputA()
	{
		cout<<"A :: ";
		cin>>a;
	}
	void display1()
	{
		cout<<"A == "<<a<<endl;

	}
};
class b:public a
{
	public:
	int b;
	void inputB()
	{
		cout<<"B :: ";
		cin>>b;
	}
	void display()
	{
		cout<<"B == "<<b<<endl;
	}
};
class c:public a{
	public:
	int c;
	void inputC()
	{
		cout<<"C :: ";
		cin>>c;
	}
	void display()
	{
		cout<<"C == "<<c<<endl;
	}
};
class d:public a{

	public:
	int d;
		void inputD()
	{
		cout<<"D :: ";
		cin>>d;
	}
	void display()
	{
		cout<<"D == "<<d<<endl;
	}
};

void main()
{
	clrscr();
	b o1;
	c o2;
	d o3;

	o1.inputA();
	o1.inputB();
	o2.inputC();
	o3.inputD();
	o1.display1();
	o1.display();
	o2.display();
	o3.display();

	getch();
}