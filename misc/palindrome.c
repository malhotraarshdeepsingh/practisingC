#include<stdio.h>

int main() {
    int num, orgNum, reversedNum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    orgNum = num;

    // Reverse the number
    while (orgNum != 0) {
        int digit = orgNum % 10;            
        reversedNum = reversedNum * 10 + digit;  
        orgNum /= 10;                       
    }

    // Check if the number is a palindrome
    if (num == reversedNum) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}