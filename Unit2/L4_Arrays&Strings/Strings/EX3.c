#include <stdio.h>
#include <string.h>
int main()
{
    char text[100],reversed[100];
    int i=0;
    int len;

    printf("Enter a string: ");
    fflush(stdin);fflush(stdout);
    scanf("%s",text); 
    len=strlen(text);
    while(text[i]!=0)
    {
    reversed[i]=text[len-1-i];
    i++;
    }
    reversed[i]=0;
return 0;
}