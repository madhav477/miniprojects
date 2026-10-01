#include<stdio.h>
int main()
{
    float percent;
    printf("ENTER YOUR PERCENTAGE OF MARKS=");
    scanf("%f", &percent);
    if(percent>=75)
    {
        printf("GRADE====A");

    }
    else if(percent>=60 && percent<75)
    {
        printf(" GRADE====B");

    }
    else if(percent>=45 && percent<=59)
    {
        printf("GRADE====C");

    }
    else 
    printf("GRADE====D");
    return 0;


}