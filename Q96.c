#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100], temp[200];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    s1[strcspn(s1,"\n")]=0; s2[strcspn(s2,"\n")]=0;
    strcpy(temp,s1);
    strcat(temp,s1);
    if(strstr(temp,s2)) printf("Rotation\n");
    else printf("Not Rotation\n");
    return 0;
}