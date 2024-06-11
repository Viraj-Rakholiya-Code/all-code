#include<stdio.h>
#include<conio.h>

void check(int num)
{
	if(num%2==0)
	{
		printf("Odd Number");
	}else
	{
		printf("Even Number");
	}
}


void main()
{       int num;
	clrscr();

	printf("Enter a Number :: ");
	scanf("%d",&num);
	check(num);
	getch();
}