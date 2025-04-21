#include <stdio.h>
int main()
{
    int i,a,f=1;
    printf ("enter an integer:");
    fflush (stdout);
    scanf("%d", &a);
    if(a<0)
        printf("Error!!Factorial of negative number doesn't exist");
    else if (a==0)
        printf("Factorial = 1");
    else
    {
        for(i=a;i>0;i--)
            {
                f=f*i;
            }
            printf("Factorial = %d",f);
    }

    return 0;
}
