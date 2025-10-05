#include<stdio.h>
void display(char name[50],int id,char D[50],float sal);
int main()
{
    char name[50];
    int id;
    char D[50];
    float sal;
    printf("Enter name\n");
    scanf("%s",&name);
    printf("Enter id\n");
     scanf("%d",&id);
    printf("Enter Department\n");
     scanf("%s",&D);
    printf("Enter Salary\n");
     scanf("%f",&sal);
     display(name,id,D,sal);
     return 0;
}
void display(char name[50],int id,char D[50],float sal)
{
    printf("EMPLOYEE'S DETAILS\n");
    printf("NAME : %s\n",name);
    printf("ID : %d\n",id);
    printf("DEPARTMENT : %s\n",D);
    printf("SALARY : %f\n",sal);
}
