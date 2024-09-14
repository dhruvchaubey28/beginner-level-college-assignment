#include<stdio.h>  
int main()    
{
     //Initializing n for user's original input, i for coping the original input number, rem for storing remainder and sum for storing sum;
    int n,i,rem,sum;
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
    if(i == sum) // comparing if original number is equal to the new number after looping
    {
        printf("%d is armstrong number",i);
    }
    else
    {
        printf("%d is not an armstrong number",i);
    }
    return 0;
    

}
