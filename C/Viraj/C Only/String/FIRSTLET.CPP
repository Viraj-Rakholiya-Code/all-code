#include<stdio.h>
#include<conio.h>
void main()
{       char name[20];
	int len =0;
	clrscr();
	printf("Enter Your Name :: ");
	gets(name);

	while(name[len]!='\0')
	{
		len++;
	}

	for(int i =0; i<len; i++)
	{
		if(name[0]>='a' && name[0]<='z')
		{
			name[0] = name[0]-32;
		}
	}

	printf("%s",name);
	getch();
}