#include <stdio.h>
    int m=0;
int reverse(int r)
{
    if (r==0)
    {
       return m;
    }else
    {
        m=r%10+m*10;
        return reverse(r/10);
    }      
}
int main(int n)
{
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n==reverse(n))
    {
        printf("%d is a palindrome",n);
    }else
    {
        printf("%d is not a palindrome",n);
    }
    return 0;  
}