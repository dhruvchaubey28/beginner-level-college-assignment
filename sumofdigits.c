#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%10;
        sum += rem;
        n = n/10; 
    }
    printf(" Sum is = %d",sum);
    return 0;

}