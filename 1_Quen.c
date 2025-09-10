#include<stdio.h>
int main()
//Principal is Amount
//Rate in percentage
{
    int principal,rate,time;
    printf("Amount of interest is ");
    scanf("%d", &principal);
    printf("Rate of interest is ");
    scanf("%d", &rate);
    printf("Time of interest is ");
    scanf("%d", &time);
    printf("The simple interest is %f\n", principal*rate*time/100.0);

    return 0;
}
//Formula of S.I. is p*r*t/100
