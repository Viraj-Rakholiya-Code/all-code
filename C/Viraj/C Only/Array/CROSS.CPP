#include<stdio.h>
#include<conio.h>
void main()
{
	int matrix[20][20],c1=0,c2=0;
	clrscr();

	for(int i = 0; i<3; i++)
	{
		for(int j = 0; j<3; j++)
		{
			printf("Array [%d][%d] :: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
		c1+=matrix[i][i];
		c2+=matrix[i][2-i];
	}

	for(int j = 0; j<3; j++)
	{
		for(int k = 0; k<3; k++)
		{
			printf("\t %d",matrix[j][k]);
		}
		printf("\n");
	}

	printf("\nSum :: %d",c1);
	printf("\nSum :: %d",c2);
	printf("\nTotal Sum :: %d",c1+c2);
	getch();
}