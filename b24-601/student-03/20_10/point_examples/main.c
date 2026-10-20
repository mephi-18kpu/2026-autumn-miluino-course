#include <stdio.h>

struct Point {
    float x;
    float y;
};

void print_point(struct Point);

int main() {
    struct Point point = {765.225, 522.567};
    

    print_point(point); 
    
    return 0;
}

void print_point(struct Point point) {
    printf("point.x = %f\n", point.x);
    printf("point.y = %f\n", point.y);
}

// файл выведет 765.225, 522.567
