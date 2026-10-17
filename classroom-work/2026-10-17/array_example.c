#include <stdio.h>

#define SIZE  8

int main(){
    int array[SIZE];
    int b = 9;

    // for (int i = 0; i < SIZE; i++){
    //     printf("array[%d] = ", i);
    //     scanf("%d", array + i);
    // }

    for (int i = 0; i < SIZE; i++){
        printf("%d\t", *(array + i));
    }

    printf("\narray = %p\n", array);
    printf("&b    = %p\n", &b);
    
    printf("*(array - 1) = %d", *(array - 1));
    *(array - 1) = 67;
    
    printf("\nb = %d\n", b);

    return 0;
}