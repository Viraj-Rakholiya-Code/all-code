#include<iostream.h>
#include<conio.h>

class display
{
	int num;
	int reminder;
	int result;
	int temp;
	public:

	display()
	{       int result =0 ;
		cout<<"Enter A  Number :: ";
		cin>>num;
		temp = num;
		while(num!=0)
		{
			reminder = num%10;
			result = reminder+ 10 * result;
			num/=10;
		}
		if(temp==result)
		{
			cout<<"Plandrom";
		}else{
			cout<<"Not";
		}

	}
};

void main()
{
	clrscr();
	display obj;

	getch();
}