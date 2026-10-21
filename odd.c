#include<stdio.h>
int main()
{
    int i,n;
    printf("ENTER THE 1ST NUMBER:");
    scanf("%d", &i);
    printf("ENTER THE 2ND NO");
    scanf("%d", &n);
    for(i;i<=n;i++)
    {
        if (i%2==0){
            continue;

        }
        printf("%d\n", i);
    }
    return 0;
}