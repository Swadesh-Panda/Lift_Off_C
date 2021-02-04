#include<stdio.h>
void main()
{
    float p,m,c,b,com,per;
    printf("Enter your marks(from 100):-\nPhysics=");
    scanf("%f", &p);
    printf("Maths=");
    scanf("%f", &m);
    printf("Chemistry=");
    scanf("%f", &c);
    printf("Biology=");
    scanf("%f", &b);
    printf("Computer=");
    scanf("%f", &com);
    per= (p+m+c+b+com)*100/500;   
    printf("\nTotal marks obtained=%f\n\nPercentage=%f\n\n", p+m+c+b+com, per);
    if (per>=90)
    {
        printf("Grade : A");       
    }else if (per>=80)
    {
        printf("Grade : B"); 
    }else if (per>=70)
    {
        printf("Grade : C");
    }else if (per>=60)
    {
        printf("Grade : D");
    }else if (per>=40)
    {
        printf("Grade : E");
    }else
    {
        printf("Grade : F");
    }
    
}