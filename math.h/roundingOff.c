// ceil(x) rounds up to the nearest integer.
// floor(x) rounds down to the nearest integer.
// round(x) rounds to the nearest integer.
// fabs(x) returns the absolute value of x.

#include <stdio.h>
#include <math.h>

int main() {
    double x = 3.6;
    printf("ceil(3.6) = %f\n", ceil(x));   // 4
    printf("floor(3.6) = %f\n", floor(x)); // 3
    printf("round(3.6) = %f\n", round(x)); // 4
    printf("fabs(-10.5) = %f\n", fabs(-10.5));  // 10.5
    return 0;
}