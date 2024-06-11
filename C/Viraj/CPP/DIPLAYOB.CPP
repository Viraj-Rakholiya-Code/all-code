#include<iostream.h>
#include<conio.h>

class display
{
	 char name[20];
	 int age;

	 public:

	 void input()
	 {
		cout<<"\nEnter Your Name :: ";
		cin.ignore(1);
		cin.getline(name,20);
		cout<<"Enter Your Age :: ";
		cin>>age;
	 }
	 void show()
	 {
		cout<<"\nName :: "<<name;
		cout<<"\nAge :: "<<age;
		cout<<"\n";
	 }

};


void main()
{       display obj[20];
	clrscr();

	for(int i = 0; i<3; i++)
	{
		obj[i].input();
	}
	for(i=0;i<3;i++)
	{
		obj[i].show();
	}

	getch();
}