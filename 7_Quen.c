#include<stdio.h>
int main()
{
    int base,height;
    float area;
    printf("The base of triangle is ");
    scanf("%d", &base);
    printf("The height of triangle is ");
    scanf("%d", &height);

    area=base*height/2.0;
    printf("Area= %f",area);

    return 0;
}