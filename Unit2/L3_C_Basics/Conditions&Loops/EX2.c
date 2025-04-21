#include <stdio.h>
int main()
{
    char x;
    printf("Enter an alphabet: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&x);
    switch(x)
    {
    case'a':
    case'A':
    case'i':
    case'I':
    case'e':
    case'E':
    case'o':
    case'O':
    case'u':
    case'U':
    printf("%c is a vowel",x);
    break;
    default:
    printf("%c is a constant",x);
    break;
    }
    return 0;
}
