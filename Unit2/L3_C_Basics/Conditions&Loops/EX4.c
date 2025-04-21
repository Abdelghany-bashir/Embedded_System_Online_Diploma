#include <stdio.h>
int main()
{
    float a;
    printf ("enter a number:");
    fflush (stdout);
    scanf("%f", &a);
    if(a>0)
        printf("%f is positive",a);
    else if (a<0)
        printf("%f is negative",a);
    else
        printf ("You entered zero");


    return 0;
}
