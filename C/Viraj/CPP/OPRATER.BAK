#include<iostream.h>
#include<conio.h>
class display
{      int num1,num2;
	public:
	void add(int n1,int n2)
	{
		num1=n1;
		num2=n2;
		cout<<"ADD IS :: "<<num1+num2<<endl;
	}
	void sub(int n1,int n2)
	{
		num1=n1;
		num2=n2;
		cout<<"SUB IS :: "<<num1-num2<<endl;
	}
	void mul(int n1,int n2)
	{
		num1=n1;
		num2=n2;
		cout<<"MUL IS :: "<<num1*num2<<endl;
	}
	void div(int n1,int n2)
	{
		num1=n1;
		num2=n2;
		cout<<"DIV IS :: "<<num1/num2<<endl;
	}
};
void main()
{
	int n1=50,n2=20,oprater;
	display obj;
	clrscr();
	cout<<"+ == 1\n- == 2\n* == 3\n/ == 4"<<endl;
	cout<<"ENTER OPRATER :: ";
	cin>>oprater;

	switch(oprater)
	{
		case 1:
		obj.add(n1,n2);
		break;

		case 2:
		obj.sub(n1,n2);
		break;

		case 3:
		obj.mul(n1,n2);
		break;

		case 4:
		obj.div(n1,n2);
		break;
	}
	getch();
}