#include <stdio.h>
int main()
{
char text[100];
int i=0,len =0;


    printf("Enter a string: ");
    fflush(stdin);fflush(stdout);
    scanf("%s",text); //if your string contain text use gets(text); instead
    while(text[i]!=0)
    {
        len+=1;
        i++;
    }
    printf("length of string: %d",len);
}