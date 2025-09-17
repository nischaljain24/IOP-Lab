//PROGRAM TO READ TWO NOS. AND CALCULATE POWER  
//WITHOUT USING HEADER FILE(<MATH.H>).

#include<stdio.h>

int main()
{
    int base,exponent,res=1;
    printf("The base of the result is ");
    scanf("%d",&base);
    printf("The exponent of the result is ");
    scanf("%d",&exponent);

    for (int i=1; i <=exponent; i++)
    {
        res=res*base;
    }
    printf("%d\n",res);
    
    return 0;
}