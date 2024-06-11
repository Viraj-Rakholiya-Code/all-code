#include<iostream.h>
#include<conio.h>

class student
{
	int s1,s2,s3,s4,s5;
	int sum;
	int count;
	int percentge;
 public:
	  void subject()
	{
		cout<<"Enter Subject1 Marks :: ";
		cin>>s1;

		cout<<"Enter Subject2 Marks :: ";
		cin>>s2;

		cout<<"Enter Subject3 Marks :: ";
		cin>>s3;

		cout<<"Enter Subject4 Marks :: ";
		cin>>s4;

		cout<<"Enter Subject5 Marks :: ";
		cin>>s5;
	}
	void total()
	{
		sum= s1+s2+s3+s4+s5;
		cout<<"Total is :: "<<sum<<endl;
	}

	void pass()
	{


		if(s1<35 || s2<35 || s3<35 || s4<35 || s5<35)
		{
			if(s1<35){count++;};
			if(s2<35){count++;};
			if(s3<35){count++;};
			if(s4<35){count++;};
			if(s5<35){count++;};
		}else{cout<<"You Are Pass!"<<endl;}

		if(count==1)
		{
			cout<<"You Are Fail in One Subject"<<endl;
		}
		else if(count==2)
		{
			cout<<"You Are Fail in Two Subject"<<endl;
		}
		else if(count==3)
		{
			cout<<"You Are Fail in Three Subject"<<endl;
		}
		else if(count==4)
		{
			cout<<"You Are Fail in Four Subject"<<endl;
		}
		else if(count==5)
		{
			cout<<"You Are Fail in Five Subject"<<endl;
		}

	}
	void grad()
	{
		if(count==0)
		{
			cout<<"A+"<<endl;
		}
		else if(count==1)
		{
			cout<<"B+"<<endl;
		}
		else if(count==2)
		{
			cout<<"C+"<<endl;
		}
		else if(count==3)
		{
			cout<<"D+"<<endl;
		}
		else if(count==4 || count==5)
		{
			cout<<"F"<<endl;
		}
	}
	void per()
	{
		percentge= sum/5;
		cout<<"Your Perceantage is "<<percentge<<"%"<<endl;
	}
};

int main()
{

       student  obj;
       clrscr();

       obj.subject();
       cout<<"************************************************"<<endl;
       obj.total();
       obj.pass();
       obj.grad();
       obj.per();
       getch();
       return 0;

}