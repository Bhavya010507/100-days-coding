#include <stdio.h>
int main() {
    char date[20];
    fgets(date, sizeof(date), stdin);
    char dd[3], mm[3], yyyy[5];
    sscanf(date,"%2s/%2s/%4s",dd,mm,yyyy);
    char *months[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("%s-%s-%s\n", dd, months[atoi(mm)-1], yyyy);
    return 0;
}