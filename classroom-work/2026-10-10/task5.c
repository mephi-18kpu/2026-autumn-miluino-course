#include <stdio.h>

#define STEPS   8

int main(){
    int a;
    scanf("%d", &a);
    
    for (int i = 0; ; i++){
        a = i;
        if (a == 0){
            continue;
        }

        printf("Index = %d\n", a++);
        
        if (a == 8){
            break;
        }
    }

    return 0;
}