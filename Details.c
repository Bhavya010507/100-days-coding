#include<stdio.h>
int main()
{
    char pn[50],m[50],cat[50];
    int pid , quantity;
    float price;
    printf("Enter Product Name");
    scanf("%s",&pn);
    printf("Enter Product ID");
    scanf("%d",&pid);
    printf("Enter Quantity");
    scanf("%d",&quantity);
    printf("Enter Price");
    scanf("%f",&price);
     printf("Enter Manufacturer");
    scanf("%s",&m);
     printf("Enter Category");
    scanf("%s",&cat);
    printf("\n---Product Details---\n");
    printf("Product Name : %s\n",pn);
    printf("Product ID: %d\n",pid);
    printf("Quantity: %d\n",quantity);
    printf("Price: %f\n",price);
    printf("Manufacturer: %s\n",m);
    printf("Category: %s\n",cat);
    return 0;
}