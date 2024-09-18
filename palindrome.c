#include<stdio.h>
int main()
{
    int i,n,rev = 0,rem;
    printf("Enter the Number: ");
    scanf("%d",&n);
    i = n;
    while(n>0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if (i == rev) 
    {
        printf("%d is a palindrome number ",i);
    }
    else
    {
        printf("%d is not a palindrome number ",i);
    }
    return 0;
}