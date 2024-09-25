#include<stdio.h>

int fib(int n);

int main(){
    int n, first=0, second=1, next;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("Fibonacci Series: \n");
    
    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            next = first;
        } else if (i == 1) {
            next = second;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("fib of %d is: %d\n", i, next);
    }

    return 0;
}