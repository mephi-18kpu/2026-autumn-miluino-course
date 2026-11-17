#include "point.h"

int main(){
    float x_val, y_val;
    
    printf("Input x_val: ");
    scanf("%f", &x_val);
    
    printf("Input y_val: ");
    scanf("%f", &y_val);

    Point point = create_point(x_val, y_val);    

    print_point(point);

    float dx, dy;
    printf("Input dx: ");
    scanf("%f", &dx);
    printf("Input dy: ");
    scanf("%f", &dy);

    move_point(&point, dx, dy);

    printf("Moved point:\n");
    print_point(point);

    return 0;
}
