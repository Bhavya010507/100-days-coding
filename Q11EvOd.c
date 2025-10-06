#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even \n",n);
    }
    else 
   {
    printf("Odd \n",n);
   }
   return 0;
}
