#include <stdio.h>
int square(int x)
{
    return x*x;
}
int main(int n)
{
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Square = %d", square(n));
   return 0; 
}