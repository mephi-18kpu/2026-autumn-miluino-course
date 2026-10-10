#include <stdio.h>

int main(){
    int a, b;

    printf("Input a: ");
    scanf("%d", &a);
    
    printf("Input b: ");
    scanf("%d", &b);

    printf("Perimeter: %d\n", 2 * (a + b));
    printf("Area %d\n", a * b);

    return 0;
}