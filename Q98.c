#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    char *token=strtok(str," \n");
    while(token!=NULL){
        printf("%c", toupper(token[0]));
        token=strtok(NULL," \n");
    }
    return 0;
}