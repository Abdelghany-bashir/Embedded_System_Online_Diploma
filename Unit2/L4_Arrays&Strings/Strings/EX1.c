#include <stdio.h>
int main()
{
    char text[100],c;
    int i=0,f=0;
    printf("Enter a string: ");
    fflush(stdout);
    scanf("%s",text);
    printf("Enter a character to find frequency: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&c);
    while(text[i]!=0)
    {
        if(text[i]==c)
            f+=1;
     i++;
    }
    printf("frequency of %c = %d",c,f);
}