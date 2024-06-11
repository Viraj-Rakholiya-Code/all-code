#include<stdio.h>
#include<conio.h>
void main()
{       char name[20];
	int len =0;
	clrscr();
	printf("Enter Name :: ");
	gets(name);
	while(name[len]!='\0')
	{
		len++;
	}

	for(int i=0; i<len; i++)
	{
		printf("%c",name[i]);
	}
	getch();
}