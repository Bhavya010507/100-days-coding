#include<stdio.h>
void display(char name[50] , int rn , float marks);
int main()
{ char name[50];
    int rn;
    float marks;
printf("Enter name\n");
scanf("%s", &name);
printf("Enter roll number\n");
scanf("%d", &rn);
printf("Enter marks\n");
scanf("%f", &marks);
display(name,rn,marks);
return 0;
}
void display(char name[50] , int rn , float marks)
{
printf("Stduents Information");
printf("Name:%s\n",name);
printf("Roll Number:%d \n",rn);
printf("Marks:%f \n",marks);
}


