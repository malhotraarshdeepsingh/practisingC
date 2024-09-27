// fmod(): Returns the remainder of x / y

#include <stdio.h>
#include <math.h>

int main() {
    double x = 5.3, y = 2.0;
    printf("fmod(5.3, 2.0) = %f\n", fmod(x, y));  // 5.3 mod 2 = 1.3
    return 0;
}