#include <stdio.h>
int main()
 {
    int n, sum = 0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of first n natural numbers are:%d\n",sum);
    return 0;
}