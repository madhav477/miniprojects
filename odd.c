#include<stdio.h>
int main()
{
    int i,n;
    printf("ENTER THE 1ST NUMBER:");
    scanf("%d", &i);
    printf("ENTER THE 2ND NO:");
    scanf("%d", &n);
    for(i;i<=n;i++)
    {
        if (i%2==0){       // if(i%2!=0)    IF WE REPLACE EXISTING CONDITION WITH THIS ONE THEN WE WILL GET THE SERIES OF ONLY EVEN NUMBERS.
            continue;

        }
        printf("%d\n", i);
    }
    return 0;
}
