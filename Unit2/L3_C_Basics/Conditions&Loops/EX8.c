#include <stdio.h>
int main()
{
	char c;float a,b;
	printf("Enter operator either + or - or / or *: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a ,&b);
	switch(c)
	{
	case '+':
		printf("%f %c %f = %f", a ,c ,b, a+b);
		break;
	case '-':
		printf("%f %c %f = %f", a ,c ,b, a-b);
		break;
	case '/':
		printf("%f %c %f = %f", a ,c ,b, a/b);
		break;
	case '*':
		printf("%f %c %f = %f", a ,c ,b, a*b);
		break;

	}

    return 0;
}
