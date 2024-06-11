#include<stdio.h>
#include<conio.h>

int plandrom(int num)
{

	int reminder,result=0;
	while(num!=0)
	{
	   reminder = num%10;
	   result = result * 10 + reminder;
	   num/=10;
	}

	return result;
}

void main()
{
	int num;
	clrscr();

	printf("Enter Number :: ");
	scanf("%d",&num);

	int temp = num;

	if(plandrom(num)==temp)
	{
		printf("Plandrom");
	}else
	{
		printf("Not Plandrom");
	}
	getch();
}