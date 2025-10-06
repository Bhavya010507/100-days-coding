#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {printf("Vowel",ch);}
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    printf("Consonant",ch);}
    else{
        printf("Not an alphabet",ch);
    }
return 0;
}
