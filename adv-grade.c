#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total,grade;
    float percentage;
    printf("ENTER YOUR MARKS OF 5 SUBJECTS:");
    scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    percentage=total/5;
    if(percentage>=75)
    {
        printf("GRADE----A");
    }

    else if(percentage>=60 && percentage<75)
    {
        printf("GRADE----B/n");
    }

    else if(percentage<=59 && percentage>=45)
    {
        printf("GRADE----C");

    }
    else if(percentage<=44 && percentage>=33)
    {
        printf("GRADE----D");
    }
    else
    {
        printf("GRADE----F");
        //F=FAIL!!!
    }
    printf("\nTOTAL MARKS=%d\n", total);
    printf("PERCENTAGE=%.2f", percentage);
    return 0;
}