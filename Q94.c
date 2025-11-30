#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    int freq[26]={0};
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    for(int i=0; s1[i]!='\0'; i++)
        if(s1[i]>='a'&&s1[i]<='z') freq[s1[i]-'a']++;
    for(int i=0; s2[i]!='\0'; i++)
        if(s2[i]>='a'&&s2[i]<='z') freq[s2[i]-'a']--;
    int flag=1;
    for(int i=0;i<26;i++) if(freq[i]!=0) flag=0;
    if(flag) printf("Anagram\n"); else printf("Not Anagram\n");
    return 0;
}