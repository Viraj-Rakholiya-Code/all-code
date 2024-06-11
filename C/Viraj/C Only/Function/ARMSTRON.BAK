#include<stdio.h>
#include<conio.h>

void armstorng(int n)
{
	int reminder,result=0;
	int temp = n;
	while(n!=0)
	{
		reminder = n%10;
		result+=reminder*reminder*reminder;
		n/=10;
	}
	if(temp==result)
	{
		printf("Arstrong");
	}else{
		printf("Not");
	}
}

void main()
{       int num;
	clrscr();
	printf("Enter Any Number :: ");
	scanf("%d",&num);
	armstorng(num);
	getch();
}