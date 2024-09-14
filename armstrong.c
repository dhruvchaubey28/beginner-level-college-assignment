#include<stdio.h>  
int main()    
{
    int i,n,rem,sum;
    sum = 0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    i = n;
    while (n>0)
    {
        rem = n%10;
        sum += rem*rem*rem;
        n = n/10;
    }
    if(i == sum)
    {
        printf("%d is armstrong number",i);
    }
    else
    {
        printf("%d is not an armstrong number",i);
    }
    return 0;
    

}