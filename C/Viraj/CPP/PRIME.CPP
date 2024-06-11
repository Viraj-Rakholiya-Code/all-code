#include<iostream.h>
#include<conio.h>

class display
{
	int num;
	int count;
	public:
	display()
	{       count=0;
		cout<<"Enter A Number :: ";
		cin>>num;
		for(int i =0; i<num/2; i++)
		{
			if(num%2==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<"Prime";
		}else{
			cout<<"Not";
		}

	}
	void show()
	{

		cout<<"Hello";
	}
};

void main()
{
	clrscr();
	display obj;
	getch();
}