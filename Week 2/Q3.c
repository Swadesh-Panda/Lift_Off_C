#include <stdio.h>
#include <string.h>
 
void main()
{
    char w[100];
    int space=0,i;
 
    printf("Type the sentence(max 100 words including spaces):-\n");
    scanf("%[^\n]s",w);

    for (i = 0;w[i] != '\0';i++)
    {
        if (w[i] == ' ' && w[i+1] != ' ')
            space++;    
    }
    printf("Number of words = %d",space+1);
}