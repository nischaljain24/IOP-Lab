#include<stdio.h>
int main()
{
    int Fahrenheit;
    float Centigrade;
    printf("Enter degrees in Fahrenheit= ");
    scanf("%d",&Fahrenheit);
    Centigrade=(Fahrenheit-32)*5/9.0;
    printf("The temprature is %f\n",Centigrade);

    return 0;
}