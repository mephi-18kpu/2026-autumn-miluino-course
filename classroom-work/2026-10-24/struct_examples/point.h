#ifndef POINT_H
#define POINT_H

#include <stdio.h>

typedef struct Point
{
    float x;
    float y;
} Point;

Point create_point(float, float);
Point get_default_point();
void print_point(Point);
void move_point(Point*, float, float);

#endif /*   POINT_H    */