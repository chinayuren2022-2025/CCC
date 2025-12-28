#include <stdio.h>
void encrypt(char *s){
    while(*s != '\0'){
        if(*s >= 'a' && *s < 'z'){
            *s += 1;
        }
        else if(*s == 'z'){
            *s = 'a';
        }
        s ++;
    }
}
int main(void){
    char s[100], ch;
    int i = 0;
    while((ch = getchar()) != EOF && i < 99){
        s[i] = ch;
        i ++;
    }
    s[i] = '\0';
    encrypt(s);
    printf("%s", s);
}
        
