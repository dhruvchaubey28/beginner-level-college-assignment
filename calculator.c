#include<stdio.h>
#include<stdlib.h>

float Sum(float a, float b ){
    return (a + b);
}
float Diff(float a, float b){
    return (a - b); 
}
float Prod(float a, float b){
    return (a*b);
}
float Quot(float a, float b){
    return (a/b);
}

int main(){ 
    float a,b;
    printf("Enter two numbers a and b :  ");
    scanf("%f %f", &a, &b);
    
    int operation;
    int manyop = 1;
    while(manyop)
    {
        printf("Enter which Operation you want to perform :\n 1.Sum of a and b\n 2.Difference of a and b\n 3.Product of a and b\n 4.Quotient of a and b\n Operation :  ");
        scanf("%d", &operation);
        switch (operation)
        {
        case 1: printf("Sum of a and b : %.2f\n", Sum(a,b));
            break;
        case 2: printf("Difference of a and b : %.2f\n", Diff(a,b));
            break;
        case 3: printf("Product of a and b : %.2f\n", Prod(a,b));
            break;
        case 4: printf("Quotient of a and b : %.2f\n", Quot(a,b));
            break;
        default: printf("You chose a wrong operator! ");
        break;
        }   
        char continueResponse;
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &continueResponse); // Note the space before %c to skip any leading whitespace

        if (continueResponse == 'n' || continueResponse == 'N') {
            manyop = 0; // Exit the loop

    }
    }
return 0;

}