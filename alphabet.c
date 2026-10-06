#include<stdio.h>
int main()
{
    char op;
    printf("ENTER YOUR INITIAL LETTER:");
    scanf(" %c", &op);
    /*a-97   122-z              IF YOU WANT TO PRINT ALL LOWER CASE ALPHABETS ENTER ANY CHARACTER BETWEEN a-z
      A-65   90-Z             IF YOU WANT TO PRINT ALL  UPPER CASE ALPHABETS ENTER ANY CHARACTER BETWEEN A-Z */
      if (op>=65 && op<=90)
      {
        for(op=65;op>=65 && op<=90;op++)                      
        {
        printf("%c\n", op);
        }
      }
      else if (op>=97 && op<=122)
      {
        for(op=97;op>=97 && op<=122;op++)
        {
            printf("%c\n", op);
        }

      }
      else
      {
        printf("PLEASE_ENTER A VALID CHARACTER:\n");
}
      return 0;
}