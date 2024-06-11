#include<iostream.h>
#include<conio.h>
#include<math.h>

void binary()
{
	int num,i=0;
	int arr[50];

	cout<<"------------------------------------------------------"<<endl;
	cout<<"Enter A Decimal Number :: ";
	cin>>num;
	while(num>0)
	{
		arr[i]=num%2;
		num=num/2;
		i++;
	}

	for(int j=i-1; j>=0; j--)
	{
		cout<<""<<arr[j];
	}


}
void decimal()
{       int num;
	int i=0;
	int dec=0;
	cout<<"------------------------------------------------------"<<endl;
	cout<<"Enter A Binary Number :: ";
	cin>>num;
	while(num!=0)
	{
		int digit = num%10;
		dec += digit*pow(2,i);
		num/=10;
		i++;

	}
	cout<<""<<dec;
}
void main()
{
	clrscr();
	cout<<"Binary To Decimal  :: 1"<<endl;
	cout<<"Decimal To Binary  :: 2"<<endl;
	cout<<"Exit               :: 3"<<endl;
	int val;

	cin>>val;

	switch(val)
	{
		case 1:
		binary();
		break;

		case 2:
		decimal();
		break;

		case 3:
		break;


	}

	getch();
}