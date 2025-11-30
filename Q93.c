#include <stdio.h>
int main() {
    char str[100];
    int freq[26]={0};
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]>='a' && str[i]<='z') {
            freq[str[i]-'a']++;
            if(freq[str[i]-'a']==2) {
                printf("First repeating: %c\n", str[i]);
                break;
            }
        }
    }
    return 0;
}