#include <stdio.h>

int main(){
    int a, b;
    float res;

    printf("Input a: ");
    scanf("%d", &a);
    
    printf("Input b: ");
    scanf("%d", &b);

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
            printf("b can not be zero");
            return 1;
        }
        res = a / b;
        break;
    
    case '*':
        res = a * b;
        break;
    
    default:
        printf("Unknown operation %c!\n", op);
        return 2;
    }

    if (op == '+'){
        res = a + b;
    }
    else if (op == '-')
    {
        res = a - b;
    }
    
    else if (op == '/')
    {
        if (!b){
            printf("b can not be zero");
            return 1;
        }
        res = a / b;
    }
    else if (op == '*')
    {
        res = a * b;
    }  

    else{
        printf("Unknown operation %c!\n", op);
        return 2;
    }

    printf("a %c b = %f", op, res);

    return 0;
}