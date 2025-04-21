#include<stdio.h>
int main()
{
    int r,c,i,j;
    float a[10][10],t[10][10];
    printf("Enter rows and colomn of matrix: ");
    fflush(stdout);
    scanf("%d %d",&r,&c);
    printf("Enter elements of matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("Enter elemnts a%d%d: ",i+1,j+1);
        fflush(stdout);
        scanf("%f",&a[i][j]);
        }
    }
    printf("Entered matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("%f \t",a[i][j]);
        }
        printf("\n");
    }
    printf("Transposed matrix:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            t[i][j]=a[j][i];
        printf("%f \t",t[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}