#include <stdio.h>
int count=1;
int lcm(int a,int b)
{
    if (count%a==0 && count%b==0)
    {
        return count;
    }else
    {
        count++;
        lcm(a,b);
    }
}
int hcf(int a,int b,int f)
{
    if (a%f==0 && b%f==0)
    {
        return f;
    }else if (f==1)
    {
        return 1;
    }else
    {
        return hcf(a,b,--f);
    }    
}
int main(int x, int y)
{
    printf("Enter the 2 numbers: ");
    scanf("%d%d",&x,&y);
    printf("LCM = %d\n",lcm(x,y));
    if (x>=y)
    {
        printf("HCF = %d", hcf(x,y,y));
    }else
    {
        printf("HCF = %d", hcf(x,y,x));
    }
    return 0;
}