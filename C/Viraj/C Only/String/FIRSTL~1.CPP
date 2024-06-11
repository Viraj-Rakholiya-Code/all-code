#include<stdio.h>
#include<conio.h>
void main()
{
	 int i;
	 char a[100];
	  clrscr();

	 printf("\nEnter Name:");
	 gets(a);

	 if(a[0]>='a' && a[0]<='z')
	 {
		  a[0]= a[0] - 32;
	 }


	  for(i = 1; a[i]!='\0'; i++)
	  {
		 if(a[i-1]==32);
	  }

	  if(a[i]>='a' && a[i]<='z')
	  {
		 a[i] = a[i]-32;
	  }

	  printf("%s",a);

	  getch();

  }
