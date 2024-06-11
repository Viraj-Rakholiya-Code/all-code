#include<stdio.h>
#include<conio.h>
void main()
{       char name[20];
	int len =0;
	clrscr();

	printf("Enter Your Name In Uppercase :: ");
	gets(name);

	while(name[len]!='\0')
	{
		len++;
	}

	for(int i =0; i<len; i++)
	{
		if( name[i]<='a' && name[i]>='z')
		{
			name[i] = name[i] - 32;
		}
	}
	printf("%s",name);
	getch();

}