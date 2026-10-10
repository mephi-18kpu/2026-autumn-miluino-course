#include <stdio.h>
#include <stdint.h>


void binary_print(uint8_t num);
uint8_t set_bit(uint8_t num, uint8_t index);
uint8_t reset_bit(uint8_t num, uint8_t index);


int main(){
    uint8_t a = 101;
    binary_print(a);
    binary_print(set_bit(a, 1));

    return 0;
}

void binary_print(uint8_t num){
    for (int8_t i = sizeof(uint8_t) * 8 - 1; i >= 0; i--){
        int res = (num >> i) & 1u;
        if (res){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
}

uint8_t set_bit(uint8_t num, uint8_t index){
    if (index > sizeof(uint8_t) * 8 - 1){
        printf("Too big index!");
        return 0;
    }

    uint8_t mask = 1u << index;
    return num | mask;
}

uint8_t reset_bit(uint8_t num, uint8_t index){
    if (index > sizeof(uint8_t) * 8 - 1){
        printf("Too big index!");
        return 0;
    }

    uint8_t mask = 1u << index;
    return num & (~mask);
}



