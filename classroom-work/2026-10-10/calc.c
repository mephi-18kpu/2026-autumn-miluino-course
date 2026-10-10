#include <stdio.h>

int main(){
    float a, b, res;

    printf("Input a: ");
    scanf("%f", &a);

    printf("Input b: ");
    scanf("%f", &b);

    char op;
    printf("Input operation (+ - * /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        res = a + b;
        break;

    case '-':
        res = a - b;
        break;

    case '/':
        if (!b){
            printf("Input zero b!\n");
            return 1;
        }
        res = a / b;
        break;

    case '*':
        res = a * b;
        break;

    default:
        printf("Unknown operation %d\n", op);
        return 2;
    }


    // if (op == '+'){
    //     res = a + b;
    // }
    // else if (op == '-')
    // {
    //     res = a - b;
    // }
    // else if (op == '*')
    // {
    //     res = a * b;
    // }
    // else if (op == '/')
    // {
    //     if (!b){
    //         printf("Input zero b!\n");
    //         return 1;
    //     }
    //     res = a / b;
    // }
    // else{
    //     printf("Unknown operation %d\n", op);
    //     return 2;
    // }  

    printf("a %c b = %f", op, res);

    return 0;
}