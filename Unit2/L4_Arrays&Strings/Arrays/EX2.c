#include <stdio.h>
int main()
{
	int i,n;
	float sum=0.0;
	float num[100];

	enter_right_number:
	printf("Enter the numbers of data: ");
	fflush(stdout);
	scanf("%d",&n);
	if(n>0&&n<=100)
	{
	for(i=0;i<n;i++)
	{
		printf("%d Enter number: ",i+1);
		scanf("%f",&num[i]);
		sum+=num[i];
	}
	printf("average = %f",sum/n);
	}
	else
	{
	printf("Enter a number between 0 and 100 \n");
	goto enter_right_number;
	}
	return 0;
}
