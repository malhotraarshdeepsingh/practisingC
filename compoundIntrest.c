#include<stdio.h>
#include<math.h>
int main(){
    float amt, p, n, r, t, x, y;
    printf("Enter the principle, number of times compound intrest is to be calculated, rate of intrest and time: ");
    scanf("%f %f %f %f", &p, &n, &r, &t);

    x = 1 + (r / 100 * n );
    y = pow(x, n * t );

    amt= p * y;
    printf("The compound interest is: %f", amt - p);
    return 0;
}
