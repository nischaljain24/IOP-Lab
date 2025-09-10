#include<stdio.h>
int main()
{
    float cm;
    int math,phy,chem,em;

    /*
    cm,math,phy,chem are Cutoff marks,mathematics marks,
    physics marks, chemistry marks respectively.
    */

    printf("Marks in Mathematics is ");
    scanf("%d", &math);
    printf("Marks in Physics is ");
    scanf("%d", &phy);
    printf("Marks in Chemistry is ");
    scanf("%d", &chem);
    printf("Marks in Entrance exam is ");
    scanf("%d", &em);
    cm=(math+phy+chem)/2.0 + em;
    printf("The cut off marks is %f", cm);

    return 0;
}