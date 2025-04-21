#include <stdio.h>
int check_prime(int a);
int main()
{
    int n1,n2,i;
    printf("Enter two numbers intervals:");
    fflush(stdout);fflush(stdin);
    scanf(" %d %d",&n1,&n2);
    printf("prime numbers between %d and %d are :",n1,n2);
    
    for(i=n1+1;i<=n2;i++)
    {
        if(check_prime(i))
        printf("%d ",i);
    

    }



    return 0;
}

int check_prime(int a)
{
    int j,b=0;
    for(j=2;j*j<=a;j++)
    {
        if(a%j==0)
        {
            b=0;
        break;
        }
        else
        {
        b=1;
        }

    }
    return b;
}