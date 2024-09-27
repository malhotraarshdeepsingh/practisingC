#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main() {
    double x = M_PI / 4;  // 45 degrees in radians
    printf("sin(45°) = %f\n", sin(x));
    printf("cos(45°) = %f\n", cos(x));
    printf("tan(45°) = %f\n", tan(x));
    return 0;
}