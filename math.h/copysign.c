// copysign(): Returns x with the sign of y

#include <stdio.h>
#include <math.h>

int main() {
    printf("copysign(3.0, -2.0) = %f\n", copysign(3.0, -2.0));  // -3.0
    return 0;
}