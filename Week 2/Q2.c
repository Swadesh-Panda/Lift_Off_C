#include<stdio.h>
void main()
{
    int i,j,n,sum;
    printf("Enter no. of digits in the number : ");
    scanf("%d",&n);
    int pos[n];

    for(i=1;i<=n;i++)
    {
       printf("\nEnter the digit at position no.%d = ", i);
       scanf("%d",&pos[i]); 
    }
    for(j=1;j<=n;j++)
    {
       if(pos[j]%2==0)
       {
           sum=sum+pos[j];
       }else if(j%2==0)
       {
           sum=sum+pos[j];
       }
    }
    printf("Sum of the even numbers and the numbers at even position = %d",sum);
}