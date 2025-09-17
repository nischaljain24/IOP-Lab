//Read Character and print whether it is small case or not
#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z'){
        printf("It is a small case letter");
    }
    
    return 0;
}