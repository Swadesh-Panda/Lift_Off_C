#include<stdio.h>
int main()
{
    float c;
    printf("Enter the temperature in Celsius : ");
    scanf("%f", &c);
    printf("Temperature in Fahrenheit = %f", (c*9)/5+32);
    return 0;
}