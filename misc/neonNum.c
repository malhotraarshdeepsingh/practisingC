#include <stdio.h> 
  
int isNeonNumber(int num) { 
    int square = num * num, n = square, digit, sum = 0; 
  
    // To calculate the sum of digits 
    while (n != 0) { 
        digit = n % 10; 
        sum = sum + digit; 
        n = n / 10; 
    } 
  
    if (sum == num) 
        return 1; 
    else
        return 0; 
} 
  
// Driver Code 
int main() 
{ 
    int num;  
    printf("Enter a number: ");
    scanf("%d", &num);
    int ans = isNeonNumber(num); 
    if (ans == 1) 
        printf("true"); 
    else
        printf("false"); 

    return 0; 
}