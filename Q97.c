#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    char *token=strtok(str," \n");
    while(token!=NULL){
        for(int i=strlen(token)-1;i>=0;i--) printf("%c",token[i]);
        printf(" ");
        token=strtok(NULL," \n");
    }
    return 0;
}