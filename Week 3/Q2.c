#include<stdio.h>
int fact(int x)
{
    int f=1;
    while(x>0)
    {
        f= f*x;
        x--;
    }
    return f;
}
int main(int n)
{
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("%d!= %d", n, fact(n));
    return 0;
}