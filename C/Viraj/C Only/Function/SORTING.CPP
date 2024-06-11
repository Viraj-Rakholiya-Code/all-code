#include<stdio.h>
#include<conio.h>

void sort(int num[20])
{       for(int j = 0; j<5; j++)
	{
	  for(int k = j+1; k<5; k++){
	   if(num[j]>num[k])
	   {
	      int temp = num[j];
	      num[j] = num[k];
	      num[k] = temp;
	   }
	}
      }
	for(int k =0; k<5; k++)
	{
		printf("\n%d",num[k]);
	}
}


void main()
{       int num[20];
	clrscr();
	printf("Enter Five Number :: \n");
	for(int i =0; i<5; i++){
	printf("Array [%d] = ",i);
	scanf("%d",&num[i]);
	}
	sort(num);
	getch();
}