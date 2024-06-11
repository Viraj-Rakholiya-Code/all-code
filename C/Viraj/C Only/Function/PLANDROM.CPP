#include<stdio.h>
#include<conio.h>

void plandrom(int n)
{       int temp = n;
	int reminder,result=0;

	while(n!=0){
	 reminder = n%10;
	 result = result * 10 + reminder;
	 n/=10;
	}

	if(temp==result)
	{
		printf("Plandrom");
	}else
	{
		printf("Not");
	}

}

void main()
{       int num;
	clrscr();
	printf("Enter a Number :: ");
	scanf("%d",&num);
	plandrom(num);
	getch();
}