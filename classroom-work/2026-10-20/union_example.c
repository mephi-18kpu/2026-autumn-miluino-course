#include <stdio.h>
#include <stdint.h>

typedef union NumberRepresentation {
    uint64_t unsigned_value;
    int64_t signed_value;
    float float_value;
} NumberRepresentation;

void print_num_repr(NumberRepresentation num_repr){
    printf("NumberRepresentation values:\n");
    printf(".unsigned_value = %u\n", num_repr.unsigned_value);
    printf(".signed_value = %d\n", num_repr.signed_value);
    printf(".float_value = %f\n", num_repr.float_value);
}

int main(){

    NumberRepresentation num_repr;

    printf("Input signed_value: ");
    scanf("%f", &num_repr.float_value);

    print_num_repr(num_repr);

    return 0;
}