#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d;
    printf("Pls enter a, b, c, such that ax^2 + bx + c = 0\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    d = pow(b,2) - 4 * a * c;
    printf("d = %lf\n",d);
    
    if (d>=0)
    {
        double x1, x2;
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Two real roots are x1 = %.2lf and x2 = %.2lf\n",x1,x2);
    }
    else
    {
        double real, imaginary;
        real = -b / (2 * a);
        imaginary = sqrt(-d) / (2 * a);
        printf("Two complex roots are x1 = %.2lf + %.2lfi and x2 = %.2lf - %.2lfi\n",real,imaginary,real,imaginary);
    }
    
}