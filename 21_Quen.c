/*
PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC
TASK (USING ARITHMETIC OPERATOR)AND THIS 
PERFORM USING SWITCH-CASE.
(CASE IN CHAR FORM).
*/
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