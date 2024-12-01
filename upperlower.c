#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an Alphabet: ");
    scanf("%c",&ch);
    if(ch >='A' && ch <= 'Z' )
    {
        printf(" %c is an Uppercase letter ",ch);
    }
    else if( ch >= 'a' && ch <= 'z')
    {
        printf("%c is a LowerCase letter ",ch);
    }
    else 
    {
        printf("%c is not an Alphabet",ch);
    }
    return 0;

}