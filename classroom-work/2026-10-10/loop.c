#include <stdio.h>

#define NUM_STEPS   8

int main(){
    int a = 0;
    for (int i = 0; ; i++){
        a = i;
        printf("Iteration #%d\n", a);
    }

    return 0;
}