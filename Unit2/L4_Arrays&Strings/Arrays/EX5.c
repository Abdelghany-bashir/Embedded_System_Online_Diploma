#include<stdio.h>
int main()
{


    int n,i,x,a[100];
    printf("Enter the number of elements: ");
    fflush(stdout);
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the elements to be searched: \n");
    fflush(stdout);
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
    if (a[i]==x)
    {
        printf("Element found at location %d",i);
        break;   
    }
    }
    if(a[i]!=x)
    printf("not found");
return 0;
}