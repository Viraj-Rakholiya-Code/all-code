#include<iostream.h>
#include<conio.h>
#define ture 1
void main()
{       cart obj;
	int value;
	clrscr();
	while(ture)
	{

		cout<<"Add Product          :: 1"<<endl;
		cout<<"View Product         :: 2"<<endl;
		cout<<"Remove Product       :: 3"<<endl;
		cout<<"Bill Of All Product  :: 4"<<endl;
		cout<<"Exite                :: 5"<<endl;
		cin>>value;
		switch(value)
		{
			case 1:
			addProduct();
		}
	}
	getch();
}