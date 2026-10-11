#include<stdio.h>
int main()
{
    int i,n;
    printf("FIRST NUMBER---I & LAST NUMBER---N\n");
    printf("ENTER THE VALUE OF N--");
    scanf("%d", &n);
    printf("ENTER THE VALUE OF I--");
    scanf("%d", &i);
    while(i<=n)               //EQUIVALENT for(i;i<=n;i++)
    {                         //If i>n, the loop will not execute.
        printf("%d\n", i);
        i++;
    }
    return 0;


}
