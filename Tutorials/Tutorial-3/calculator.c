#include<stdio.h>
int main(){
    int a, b, c;
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter 1 for +, 2 for -, 3 for *, 4 for / and 5 for modulus: ");
    scanf("%d", &c);

    switch(c){
        case 1: 
            printf("result is: %d + %d = %d\n", a, b, a + b);
            break;
        case 2: 
            printf("result is: %d - %d = %d\n", a, b, a - b);
            break;
        case 3: 
            printf("result is: %d * %d = %d\n", a, b, a * b);
            break;
        case 4: 
            printf("result is: %d / %d = %d\n", a, b, a / b);
            break;
        case 5:
            printf("result of a mod b is: %d\n", a % b);
            break;
        default:
            printf("result is: %d + %d = %d\n", a, b, a + b);
            printf("result is: %d - %d = %d\n", a, b, a - b);
            printf("result is: %d * %d = %d\n", a, b, a * b);
            printf("result is: %d / %d = %d\n", a, b, a / b);
            printf("result of a mod b is: %d\n", a % b);
            break;
    }
    return 0;
}