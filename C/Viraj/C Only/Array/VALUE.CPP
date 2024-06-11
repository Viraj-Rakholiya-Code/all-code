#include<stdio.h>
#include<conio.h>
void main()
{
	int mat[20][20],value[]={1,4,5,7,8,9},sum=0;
	clrscr();

	for(int i =0; i<3; i++)
	{
		for(int j = 0; j<3; j++)
		{
			printf("Array [%d][%d] :: ",i,j);
			scanf("%d",&mat[i][j]);

			for(int k = 0; k<6; k++)
			{
				if(mat[i][j]==value[k])
				{
				     sum+=mat[i][j];
				}
			}
		}
	}
	for(int x=0; x<3; x++)
	{
		for(int y=0; y<3; y++)
		{
			printf("\t%d",mat[x][y]);
		}
		printf("\n");
	}

	printf("\nSum is :: %d",sum);
	getch();
}