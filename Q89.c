#include <stdio.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]==' ') str[i]='-';
    }
    printf("%s", str);
    return 0;
}