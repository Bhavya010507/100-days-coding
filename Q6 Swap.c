#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Enter num1:");
    scanf("%d",&num1);
     printf("Enter num2:");
    scanf("%d",&num2);
    printf("Before swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);
    return 0;
}
