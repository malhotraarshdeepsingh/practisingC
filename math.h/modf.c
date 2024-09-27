// modf(double x, double *intpart): Breaks x into its fractional and integer parts

#include <stdio.h>
#include <math.h>

int main() {
    double x = 5.7, intpart, fracpart;
    fracpart = modf(x, &intpart);
    printf("Integer part: %f, Fractional part: %f\n", intpart, fracpart);
    return 0;
}