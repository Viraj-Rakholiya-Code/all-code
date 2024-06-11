#include<stdio.h>
#include<conio.h>

void prime(int num)
{       int count=0;
	for(int i=2; i<num/2; i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("Prime Number");
	}else
	{
		printf("Not Prime Number");
	}
}

void main()
{       int num;
	clrscr();
	printf("Enter a Number :: ");
	scanf("%d",&num);
	prime(num);
	getch();
}