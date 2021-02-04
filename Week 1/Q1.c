#include<stdio.h>
void main()
{
    float x,y;
    char o;
    printf("Enter the expression (eg.:a+b) :-\n");
    scanf("%f %c %f", &x,&o,&y);
    switch (o)
    {
    case '+':
        printf("= %f", x+y);
        break;
    case '-':
        printf("= %f", x-y);
        break;
    case '*':
        printf("= %f", x*y);
        break;
    case '/':
        printf("= %f", x/y);
        break;
    
    default:
        printf("INVALID");
        break;
    }
}