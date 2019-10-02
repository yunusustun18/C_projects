#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define PI 3.14

double circle_area(double radius) {
    return 2 * PI * radius;
}

double calc_hypotenuse(double side1, double side2) {
    return sqrt((pow(side1, 2)) + (pow(side2, 2)));
}

double calc_radius_of_largest_circle(double side1, double side2) {
    if (side1 < side2) {
        return side1 / 2;
    } else {
        return side2 / 2;
    }
}

double calc_radius_of_smallest_circle(double side1, double side2) {
    return calc_hypotenuse(side1, side2) / 2;
}

double calc_area_of_smallest_circle(double side1, double side2) {
    return circle_area(calc_radius_of_smallest_circle(side1, side2));
}

double calc_area_of_largest_circle(double side1, double side2) {
    return circle_area(calc_radius_of_largest_circle(side1, side2));
}

double calc_area_of_square(int side) {
    return pow(side, 2);
}

double calc_area_of_smallest_square(int side1, int side2) {
    if (side1 < side2) {
        return calc_area_of_square(side1);
    } else {
        return calc_area_of_square(side2);
    }
}

double calc_area_of_largest_square(int side1, int side2) {
    if (side1 > side2) {
        return calc_area_of_square(side1);
    } else {
        return calc_area_of_square(side2);
    }
}

void display_results(double largest_circle, double smallest_circle, double largest_square, double smallest_square) {
    printf("\nthe area of the largest circle that fits inside a rectangle : %f", largest_circle);
    printf("\nthe area of the smallest circle that fits inside a rectangle : %f", smallest_circle);
    printf("\nthe area of the largest square that fits inside a rectangle : %f", largest_square);
    printf("\nthe area of the smallest square that fits inside a rectangle : %f", smallest_square);
}

int main() {
    display_results(calc_area_of_largest_circle(3, 4), calc_area_of_smallest_circle(3, 4),
                    calc_area_of_largest_square(3, 4), calc_area_of_smallest_square(3, 4));
}