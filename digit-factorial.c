#include<stdio.h>
int main()
{
    int i,n,f,x;
    printf("YOU CAN PRINT FACTORIAL UPTO 12 ");
    printf("\nENTER A NUMBER===");
    scanf("%d", &n);
    x=n;
    if (n==0)
    {
        printf("NUMBER OF DIGITS====1\n");
    }
    else 
    {
    for (i=0;n!=0;i++)
    {
        n=n/10;
    }
    printf("NUMBER OF DIGITS====%d\n", i);
    }

    if (x>0 && x<=12)
    {
    for (f=1;x>0;x--)
    {
        f=f*x;
    }
    printf("FACTORIAL====%d\n", f);
    }
    else if (x<0)
    {
        printf("FACTORIAL IS NOT DEFINED FOR NEGATIVE INTEGERS!\n");
    }
    else if (x==0)
    {
        printf("0!=1");
    }
    else if (x>12)
    {
        printf("\nFACTORIAL CANNOT BE DETERMINED DUE TO STORAGE SIZE OF INT");
    }

    
    return 0;
}