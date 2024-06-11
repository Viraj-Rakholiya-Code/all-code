#include<stdio.h>
#include<conio.h>

int prime(int num)
{       int count = 0;
	for(int i =2; i<num/2; i++)
	{
		if(num%i==0)
		{
		      count++;
		      break;
		}
	}
	return count;
}

void main()
{       int num;
	clrscr();

	printf("Enter Number :: ");
	scanf("%d",&num);

       if(prime(num)==0)
       {
		printf("Prime Number");
       }else
       {
		printf("Not Prime Number");
       }
	getch();
}