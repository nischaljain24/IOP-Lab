#include<stdio.h>
int main()
{
    int number,rem;   //rem is Remainder
    printf("Give the Number ");
    scanf("%d", &number);

    rem=number%2;

    if (rem==1){
        printf("The number is odd\n");
    }
    else{
        printf("The number is even\n");
    }

    return 0;
}