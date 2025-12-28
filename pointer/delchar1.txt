#include <stdio.h>
void delchar(char *s, char del){
    char *dest = *s;    //copy the first pointer of original array
    while(*s != '\0'){
        if(*s != del){
            *dest = *s;
        }
        s ++;
    }
}
int main(voidO){
    //input
    char s[100], del, ch;
    int i = 0;
    while((ch = getchar()) != ' ' && i < 99){
        s[i] = ch;
        i ++;
    }
    s[i] = '\0';
    scanf("%c", &del);

    delchar(s, del);

    printf("%s");
}
