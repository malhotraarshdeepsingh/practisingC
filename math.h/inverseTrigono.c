#include <stdio.h>
#include <math.h>

int main() {
    double x = sqrt(2) / 2;
    printf("asin(0.707) = %f radians\n", asin(x));
    printf("acos(0.707) = %f radians\n", acos(x));
    printf("atan(1) = %f radians\n", atan(1.0));  

    // Computes the arc tangent of y/x, taking into account the signs of both arguments
    double b = 1.0, a = 1.0;
    printf("atan2(1, 1) = %f radians\n", atan2(b, a));

    return 0;
}