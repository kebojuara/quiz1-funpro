#include <stdio.h>

int main(){
    float base;
    float base1;
    float base2;
    float height;
    float side_length;
    float radius;
    float pi=3.14;

    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter base1: ");
    scanf("%f", &base1);
    printf("Enter base2: ");
    scanf("%f", &base2);
    printf("Enter height: ");
    scanf("%f", &height);
    printf("Enter side length: ");
    scanf("%f", &side_length);
    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area of a Rectangle: %f\n", base*height);
    printf("Area of a Square: %f\n", side_length*side_length);
    printf("Area of Triangle: %f\n", 0.5*(base*height));
    printf("Area of Parallelogram: %f\n", base*height);
    printf("Area of Trapezoid: %f\n", 0.5*(base1+ base2)*height);
    printf("Area of Circle: %f\n", pi*(radius*radius));

    return 0;
}
