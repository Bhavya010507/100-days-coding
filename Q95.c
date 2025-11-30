#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50], longest[50]="";
    int max=0;
    fgets(str, sizeof(str), stdin);
    char *token=strtok(str," \n");
    while(token!=NULL){
        if(strlen(token)>max){
            max=strlen(token);
            strcpy(longest,token);
        }
        token=strtok(NULL," \n");
    }
    printf("Longest word: %s\n", longest);
    return 0;
}