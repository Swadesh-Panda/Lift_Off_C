#include<stdio.h>
void main()
{
	int n,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);

	while(n>0)
	{
        sum=sum+n%10;
        n=n/10;
    }
	printf("Sum of the digits = %d",sum);
}