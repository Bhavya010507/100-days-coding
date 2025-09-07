#include<stdio.h>
int main()
{
    int a,b,rem,quo;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
rem=a%b;
quo=a/b;
printf("The remainder is : %d",rem);
printf("The quotient is : %d",quo);
return 0;
}

