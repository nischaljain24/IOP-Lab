//Program to work like a simple calculator using switch-case.
#include<stdio.h>
int main()
{
    char operator;
    float n1, n2, res;
    printf("Enter an operator from +, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter number1: ");
    scanf("%f", &n1);
    printf("Enter number2: ");
    scanf("%f", &n2);
    printf("\n");

    switch(operator)
    {
        case '+':
            res=n1 + n2;
            printf("%f + %f = %f", n1, n2, res);
            break;
            
        case '-':
            res=n1 - n2;
            printf("%f - %f = %f", n1, n2, res);
            break;

        case '*':
            res=n1 * n2;
            printf("%f * %f = %f", n1, n2, res);
            break;
            
        case '/':
            res=n1 / n2;
            printf("%f / %f = %f", n1, n2, res);
            break;
    }
    printf("\n");
}