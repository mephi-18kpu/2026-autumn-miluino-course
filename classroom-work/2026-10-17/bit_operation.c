#include <stdio.h>
#include <stdint.h>


void binary_print(uint8_t num);
uint8_t set_bit(uint8_t* num, uint8_t index);
uint8_t reset_bit(uint8_t* num, uint8_t index);


int main(){
    uint8_t a = 101;    // 0110 0101
    binary_print(a);

    uint8_t res = reset_bit(&a, 10);
    if (!res){
        binary_print(a);
    }
    else{
        printf("Error in set_bit! Error code: %hhu\n", res);
    }

    binary_print(a);
    return 0;
}

uint8_t set_bit(uint8_t* num_ptr, uint8_t index){
    if (index > sizeof(uint8_t) * 8 - 1){
        printf("Too big index!");
        return 1;
    }

    uint8_t mask = 1u << index;
    *num_ptr |= mask;   // *num_ptr = (*num_ptr) | mask;

    return 0;
}

uint8_t reset_bit(uint8_t* num, uint8_t index){
    if (index > sizeof(uint8_t) * 8 - 1){
        printf("Too big index!");
        return 1;
    }

    uint8_t mask = 1u << index;
    *num &= (~mask);

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