#include <stdio.h>
int main()
{
	int i,j;float matrix1[2][2],matrix2[2][2];
	printf("enter the elements of the 1st matrix \r\n	");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&matrix1[i][j]);
		}
	}
	printf("Enter the elements of the 2nd matrix \r\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&matrix2[i][j]);
		}
	}
	printf("sum of matrix: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			matrix1[i][j]+=matrix2[i][j];
			printf("%f \t",matrix1[i][j]);

		}
		printf("\n");
	}
	return 0;
}
