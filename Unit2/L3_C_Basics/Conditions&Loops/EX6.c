#include <stdio.h>
int main()
{
    unsigned int x,i,sum=0;
    printf("Enter an Integer: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        sum+=i;
    }
    printf("%d = ",sum);
    return 0;
}
