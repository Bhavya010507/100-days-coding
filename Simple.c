#include <stdio.h>
#include <math.h> 
int main()
{
    float P , R , T , SI , CI ; //P=principal,R=rate,T=time,SI=Simple Interest,CI=Compound Interest
    printf("Enter the principal amount: ");
    scanf("%f", &P);
    printf("Enter the rate: ");
    scanf("%f", &R);
    printf("Enter the time: ");
    scanf("%f", &T);
    SI=(P*R*T)/100;
    CI=P* (pow((1 + R / 100), T) - 1);
     printf("Simple Interest: %.2f\n", SI);
    printf("Compound Interest: %.2f\n", CI);
return 0;
}