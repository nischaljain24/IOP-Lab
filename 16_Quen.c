//Print greater of three numbbers a,b,c without && operator;

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("A is ");
    scanf("%d",&a);
    printf("B is ");
    scanf("%d",&b);
    printf("C is ");
    scanf("%d",&c);

    if (a==b)
    {
        if (a==c)
        {
            printf("All are equal");
        }
        else if (a>c)
        {
            printf("A=B and are greater than C");
        }

        else
        {
            printf("C is greatest");
        }
    }

    else if (b==c)
    {
        if (a>c)
        {
            printf("A is greatest");
        }

        else
        {
            printf("B=C and are greater than A");
        }
    }

    else if (a==c)
    {
        if (a>b)
        {
            printf("A=C and are greater than B");
        }

        else
        {
            printf("B is greatest");
        }
    }

    else if (a>b)
    {
        if(a>c)
        {
            printf("A is greatest");
        }
        else
        {
            printf("C is greatest");
        }
    }
    
    else
    {
        if (b>c)
        {
            printf("B is greatest");
        }
        else
        {
            printf("C is greatest");
        }
        
    }
    printf("\n");
    return 0;
}