#include <stdio.h>
int main() {
    char str[100], ch;
    int count=0;
    fgets(str, sizeof(str), stdin);
    printf("Enter character: ");
    scanf("%c", &ch);
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]==ch) count++;
    }
    printf("Frequency of %c = %d\n", ch, count);
    return 0;
}