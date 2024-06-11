#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[20][20],m2[20][20],m3[20][20];
	clrscr();
	for(int i =0; i<3; i++)
	{
		for(int j = 0; j<3; j++)
		{
			printf("1 Array [%d][%d] :: ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}

	printf("\nMatrix 2 ::\n");
	for(int x =0; x<3; x++)
	{
		for(int y = 0; y<3; y++)
		{
			printf("2 Array [%d][%d] :: ",x,y);
			scanf("%d",&m2[x][y]);
		}
	}

	printf("\n1 Matrix :: \t\n");
	for(int c=0; c<3; c++)
	{
		for(int n=0; n<3; n++)
		{
			printf("\t%d",m1[c][n]);
		}
		printf("\n");
	}

	printf("\n\n2 Matrix :: \t\n");
	for(int a=0; a<3; a++)
	{
		for(int b=0; b<3; b++)
		{
			printf("\t%d",m2[a][b]);
		}
		printf("\n");
	}

	for(int v=0; v<3; v++)
	{
		for(int r=0; r<3; r++)
		{
			m3[v][r] = m1[v][r]+m2[v][r];
		}
	}
	printf("\nM1 + M2 ::\n");
	for(int m=0; m<3; m++)
	{
		for(int l=0; l<3; l++)
		{
			printf("\t%d",m3[m][l]);
		}
		printf("\n");
	}
	getch();
}