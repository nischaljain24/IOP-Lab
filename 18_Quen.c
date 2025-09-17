//PROGRAM TO READ THREE NOS. AND PRINT MAX 
//USING CONDITIONAL (? :) OPERATOR.

#include<stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter the 1st number: ");
    scanf("%d",&num1);

    printf("Enter the 2nd number: ");
    scanf("%d",&num2);

    printf("Enter the 3rd number: ");
    scanf("%d",&num3);

    num1>num2?(num1>num3 ? printf("A--%d",num1):printf("C--%d",num3))
             :(num2>num3 ? printf("B--%d",num2):printf("C--%d",num3));
    
    return 0;
}