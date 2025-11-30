#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    char *token=strtok(str," \n");
    char *last=NULL;
    while(token!=NULL){
        last=token;
        token=strtok(NULL," \n");
    }
    token=strtok(str," \n");
    while(token!=NULL){
        if(strcmp(token,last)==0) printf("%s", last);
        else printf("%c.", toupper(token[0]));
        token=strtok(NULL," \n");
    }
    return 0;
}