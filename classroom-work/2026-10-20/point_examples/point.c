#include "point.h"


Point create_point(float x, float y){
    Point point = {.x = x, .y = y};
    return point;
}

Point set_point(){
    Point point;

    printf("Input point:\n");
    scanf("%f", &(point.x));    
    scanf("%f", &(point.y)); 

    return point;
}

void move_point(Point* point, float dx, float dy){
    (*point).x += dx;
    point->y += dy;
}


void print_point(struct Point point){
    printf("Point info:\n");
    printf("point.x = %f\n", point.x);
    printf("point.y = %f\n", point.y);
}