#include<stdio.h>
int main()
{
    int i,j,n,a[100],num,location;
    printf("Enter no of elements: ");
    fflush(stdout);
    scanf ("%d",&n);

    for(i=0;i<n;i++)
    {
        a[i]=i+1;
        printf("%d " ,a[i]);
    }

    printf("\nEnter the element to be inserted: ");
    fflush(stdout);
    scanf("%d",&num);
    printf("Enter the location:");
    fflush(stdout);
    scanf("%d",&location);
    a[location]=num;

    for(i=0;i<n;i++)
    {
        printf("%d " ,a[i]);
    }
    return 0;
}