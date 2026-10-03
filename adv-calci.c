#include<stdio.h>
int main()
{
    int num1,num2;
    printf("ENTER THE 1ST NUMBER----");
    scanf("%d", &num1);
    printf("ENTER THE 2ND NUMBER----");
    scanf("%d", &num2);
    char op;
    printf("ENTER THE OPERATOR(+,-,*,/,%)----");
    scanf(" %c", &op);
    switch(op)
    {
    case'+':
    printf("THE SUM OF 2NOS IS: %d", num1+num2) ;
    break;
    case'-':
    printf("THE DIFFRENCE OF 2 NOS IS: %d", num1-num2);
    break;
    case'*':
    printf("THE PRODUCT OF 2 NOS IS: %d", num1*num2);
    break;
    case'/':
    printf("THE QUOTIENT IS: %d", num1/num2);
    break;
    case'%':
    printf("THE REMAINDER IS: %d", num1%num2);
    break;

    default:
    printf("INVALID SYMBOL");
    }
    return 0;

}