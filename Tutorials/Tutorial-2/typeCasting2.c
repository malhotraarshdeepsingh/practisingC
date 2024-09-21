#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s = "3.145";
    char *s_int = "123";
    char *s_long = "98765";
    
    // Converting string to float using atof()
    double floatVal = atof(s);
    printf("String to float (atof): %f\n", floatVal);

    // Converting string to int using atoi()
    int intVal = atoi(s_int);
    printf("String to int (atoi): %d\n", intVal);

    // Converting string to long int using atol()
    long int longVal = atol(s_long);
    printf("String to long int (atol): %ld\n", longVal);

    // Converting int to string using itoa()
    int number = 567;
    char intToStr[10]; // initializing string
    itoa(number, intToStr, 10);  // Base 10 conversion
    printf("Int to string (itoa): %s\n", intToStr);

    // Converting long int to string using ltoa()
    long int longNum = 1234567890;
    char longToStr[20]; // initializing string
    ltoa(longNum, longToStr, 10);  // Base 10 conversion
    printf("Long int to string (ltoa): %s\n", longToStr);

    return 0;
}