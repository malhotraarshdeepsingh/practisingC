// isnan(), isfinite(), isinf(): These functions check if x is NaN (not a number), finite, or infinite.

#include <stdio.h>
#include <math.h>

int main() {
    double x = 0.0 / 0.0;  
    printf("isnan(x) = %d\n", isnan(x));  
    
    x = 1.0 / 0.0;  
    printf("isinf(x) = %d\n", isinf(x));  
    
    x = 5.0;
    printf("isfinite(x) = %d\n", isfinite(x)); 
    
    return 0;
}