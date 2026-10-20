#ifndef POINT_H
#define POINT_H

#include <stdio.h>

typedef struct Point
{
    float x;
    float y;
} Point;

Point create_point(float, float);
Point set_point();
void move_point(Point*, float, float);
void print_point(Point);

#endif /*   POINT_H     */