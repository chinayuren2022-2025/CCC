#include <stdio.h>

int main() {
    int num;
    printf("Please enter a number: "); 
    // 这里没有 \n，用来测试缓冲区是否正常
    
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}