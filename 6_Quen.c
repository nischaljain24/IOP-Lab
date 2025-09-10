#include<stdio.h>

int main()
{
    int a=5,b=10;
    printf("A is %d, B is %d\n",a,b);
    a=a+b;  //Now A carries a+b
    b=a-b;  //Now B carries a-b = (a+b)-b = a
    a=a-b;  //Now a carries a-b = (a+b)-a = b
    //Now it is swapped, we just have to print

    printf("A is %d, B is %d\n",a,b);

    return 0;
}
