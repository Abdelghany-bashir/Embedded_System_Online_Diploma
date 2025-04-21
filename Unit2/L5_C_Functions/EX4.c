#include <stdio.h>

int c=1;

int getpower(int a, int b);

int main()
{
    int base,power;
    printf("Enter base number: ");
    fflush(stdout);
    scanf("%d",&base);
    printf("Enter power number (positve enteger): ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&power);
    printf("%d ^ %d = %d",base, power, getpower(base,power));
    return 0;
}
int getpower(int a, int b)
{
    if(b>0)
    {
    c = c*a;
    getpower(a,b-1);
    }
    return c;
}
