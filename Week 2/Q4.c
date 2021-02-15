#include<stdio.h>
void main()
{
    int i,n,l,s;
    printf("Enter the no. of numbers : ");
    scanf("%d",&n);
    int pos[n];
    printf("\nEnter the numbers:-\n");

    for (i = 1; i <=n; i++)
    {
        scanf("%d",&pos[i]);
    }
    l=s=pos[1];
    for (i = 1; i <=n; i++)
    {
        if (pos[i]>l)
        {
            l=pos[i];
        }
        if (pos[i]<s)
        {
            s=pos[i];
        }
    }
    printf("%d is the largest\n%d is the smallest",l,s);
}