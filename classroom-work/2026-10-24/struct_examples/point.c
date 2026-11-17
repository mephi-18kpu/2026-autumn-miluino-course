#include "point.h"

Point create_point(float x_val, float y_val){
    Point point = {.x = x_val, .y = y_val};
    return point;
}

Point get_default_point(){
    Point point = {.x = 0.0, .y = 0.0};
    return point;
}

void print_point(Point point){
    printf("Point info:\n");
    printf("x = %f\n", point.x);
    printf("y = %f\n", point.y);
}

void move_point(Point* point_ptr, float dx, float dy){
    (*point_ptr).x += dx;
    point_ptr->y += dy;
}