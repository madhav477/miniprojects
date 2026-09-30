#include<stdio.h>
int main()
{
    int  x,y,sum,difference,multi,division,remainder;
    printf("ENTER THE 2 NUMBERS:\n");
    scanf("%d%d", &x,&y);
    sum=x+y;
    difference=x-y;
    multi=x*y;
    division=x/y;
    remainder=x%y;
    printf("\nSUM=%d", sum);
    printf("\nDIFFRENCE=%d", difference);
    printf("\nMULTIPLICATION=%d", multi);
    printf("\nDIVISION=%d", division);
    printf("\nREMAINDER=%d", remainder);

    return 0;
}