#include<stdio.h>
#include<conio.h>

void main()
{       int matrix[20][20],row[20];
	clrscr();
	for(int i=0; i<3; i++)
	{
		for(int j = 0; j<3; j++)
		{
		   printf("Array [%d][%d] :: ",i,j);
		   scanf("%d",&matrix[i][j]);
		   row[i] += matrix[i][j];
		}
	}
	for(int x=0; x<3; x++)
	{
		for(int y=0; y<3; y++)
		{
			printf("\t%d",matrix[x][y]);
		}
		printf("\n");
	}

	for(int c=0; c<3; c++)
	{
		printf("Sum is :- %d \n",row[c]);
	}
	getch();
}