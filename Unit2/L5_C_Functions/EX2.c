#include<stdio.h>

int calcFactorial(int n);
int f=1;

int main()
{
    int num;
    printf("Enter a positive number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&num);
    printf(" factorial of %d = %d",num,calcFactorial(num));
    return 0;
}

int calcFactorial(int n)
{
   
    if (n>0)
    {
        f*=n--;
        calcFactorial(n);
    }
    return f;


}
