#include<iostream.h>
#include<conio.h>
class temp
{
	float celsiusVal,displayF;
	float FahrenheitVal,displayC;
	public:
	void fah(){
	    cout<<"Enter Celsius :: ";
	    cin>>celsiusVal;
	    displayF =  celsiusVal*(9/5)+32;
	    cout<<"\nFahrenheit :: "<<displayF;
	}
	void cel()
	{
		    cout<<"Enter Fahrenheit :: ";
	    cin>>FahrenheitVal;
	    displayC =  (FahrenheitVal-32)*5/9;
	    cout<<"\nCelsius :: "<<displayC;
	}

};
void main()
{       char value;
	temp obj;
	clrscr();
	cout<<"Celsius To Fahrenheit :: PRESS F"<<endl;
	cout<<"Fahrenheit to Celsius :: PRESS C"<<endl;
	cin>>value;

	if(value=='F'|| value=='f')
	{
		obj.fah();
	}
	else if(value=='C' || value=='c')
	{
	    obj.cel();
	}
	getch();
}