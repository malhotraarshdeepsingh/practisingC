// Write a program in C to divide two numbers of integer data type and store the result in the variable of float data type.

#include<stdio.h>

int main(){
    int a = 10, b = 20;
    
    printf("%d/%d is %f\n", a, b, (float)a/b);
    
    return 0;
}