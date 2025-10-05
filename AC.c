#include<stdio.h>
float CircleArea(float radius);//the float here receives the value passed from main
int main()
{
    float radius;//stores the user input
    printf("Enter the radius");
    scanf("%f",&radius);
    printf("The area is:%f",CircleArea(radius));
    return 0;
}
float CircleArea(float radius)
{
    return 3.14*radius*radius;
}