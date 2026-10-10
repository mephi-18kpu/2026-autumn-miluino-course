#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    
    b = ++a;    // 1 вариант - b = a + 1, a = a + 1
    b = a++;    // 2 вариант - b = a, a = a + 1
    printf("a = %d; b = %d\n", a, b);

    return 0;
}