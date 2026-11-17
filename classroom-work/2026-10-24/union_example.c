#include <stdio.h>
#include <stdint.h>

typedef union NumberRepresentation
{
    int64_t int_val;
    uint64_t uint_val;
    float float_val;
} NumberRepresentation;


void print_num_repr(NumberRepresentation num_repr){
    printf("NumberRepresentation info:\n");
    printf("int_val   = %d\n", num_repr.int_val);
    printf("uint_val  = %u\n", num_repr.uint_val);
    printf("float_val = %f\n", num_repr.float_val);
}

int main(){

    NumberRepresentation num_repr;
    printf("Input float_val: ");
    scanf("%f", &num_repr.float_val);

    print_num_repr(num_repr);
    return 0;
}