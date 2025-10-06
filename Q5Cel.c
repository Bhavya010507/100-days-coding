#include<stdio.h>
int main()
{
float celsius , fahrenheit;
printf("Enter the temperature in Celsius: ");
scanf("%f",&celsius);
fahrenheit = (celsius * 1.8) + 32;
printf("The temperature in fahrenheit is %f\n", fahrenheit);
return 0;
}
