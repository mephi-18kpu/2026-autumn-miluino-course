#include <stdio.h>

int main(){
    int a, b;
    
    printf("a: ");
    scanf("%d", &a);

    b = a++; // 1 вариант: b = a; a = a + 1
    b = ++a; // 2 вариант: a = a + 1; b = a

    printf("a = %d; b = %d", a, b);

    return 0;
}