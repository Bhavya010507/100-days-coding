#include<stdio.h>
int main()
{
    int year;
    printf("Enter an year:");
    scanf("%d",&year);
    if((year%400==0 )||( year%4==0 && year%100!=0))
    {printf("leap year",year);}
    else
    {
        printf("not a leap year",year);
    }
    return 0;
}