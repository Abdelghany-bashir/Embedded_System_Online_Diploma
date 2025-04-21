#include<stdio.h>
#include<string.h>

int i=0,j;
char reversed[50];
void reverse(char text[]);
int main()
{
    char text[50],revesed[50];
    printf("Enter a sentence: ");
    fflush(stdin);fflush(stdout);
    gets(text);
    reverse(text);
    printf("%s",reversed);
    
    return 0;
}

void reverse(char text[])
{
    
    if(text[i]!='\0')
    {
    j=strlen(text)-i-1;
    reversed[i]=text[j];
    i++;
    reverse(text);
    }
    reversed[i]='\0';
}
