//Variable swap using another variable

#include<stdio.h>
int main()
{
    int var1,var2,var3;
    var1=5;
    var2=6;

    printf("Variable 1 is %d", var1);
    printf("\nVariable 2 is %d", var2);

    var3=var1;
    var1=var2;
    var2=var3;

    printf("\nVariable 1 is now %d",var1);
    printf("\nVariable 2 is now %d",var2);

    return 0;
}