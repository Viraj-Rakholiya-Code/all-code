#include<stdio.h>
#include<conio.h>

int check(int num)
{
	int value=0;

	if(num%2==0)
	{
	    value = 1;
	}
	return value;
}

void main()
{       int num;
	clrscr();

	printf("Enter Number : ");
	scanf("%d",&num);


	if(check(num)==1)
	{
		printf("Odd Number");
	}else{
		printf("Even Number");
	}

	getch();
}