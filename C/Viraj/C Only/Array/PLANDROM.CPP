#include<stdio.h>
#include<conio.h>
void main()
{       int result=0,reminder,plandrom[2000],count=0;
	clrscr();
	for(int num=1; num<2000; num++)
	{
	 int temp = num;
		while(num!=0)
		{
			reminder= num%10;
			result = result * 10 + reminder;
			num/=10;
		}
		if(temp==result)
		{
			plandrom[count] = num;
			count++;
		}
	}
	for(int i =0; i<count; i++)
	{
		printf("%d ,",plandrom[i]);

	}
	getch();
}