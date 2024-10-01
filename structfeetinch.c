#include<stdio.h>
    struct addition
    {
        int feet;
        float inch;
    }l1,l2,result;

    int main()
    {
            /*you can also write "l1,l2,result;" here for local declaration but also remove it from global*/    
        printf("Enter the first distance \n");
        printf("Enter feet: ");
        scanf("%d",&l1.feet);
        printf("Enter inch: ");
        scanf("%f",&l1.inch);

        printf("Enter the second distance \n");
        printf("Enter feet: ");
        scanf("%d",&l2.feet);
        printf("Enter inch: ");
        scanf("%f",&l2.inch);

        result.feet = l1.feet + l2.feet;
        result.inch = l1.inch + l2.inch;
        while(result.inch>=12.0)
        {
            result.feet += 1;
            result.inch -= 12.0;
        }

        printf("%d feet and %.1f inch", result.feet,result.inch );
        return 0;
    }
    