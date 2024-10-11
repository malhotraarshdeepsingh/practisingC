// Write a program in C language to find if the year is a leap year or not. Below are the rules for a year to qualify for a leap year.
// (a) If the year is divisible by 4 then it is a leap year. For example, year 2024 is a leap year.
// BUT
// (b) If the year is divisible by 100 then it should also be divisible by 400. For example year 2000 is a leap year but year 2100 is not 

#include<stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 100 == 0) {
        if(year % 400 == 0) {
            printf("%d is a leap year.\n", year);
        } else {
            printf("%d is not a leap year.\n", year);
        }
    } else if(year % 4 == 0){
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}