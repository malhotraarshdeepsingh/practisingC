/*
A credit card is usally a 16-digit number. A valid Credit Card number would satisfy a rule explined below with the help of a dummy Credit Card number- 4567 1234 5678 9129. Start with the help of a rightmost digit and multiply every other digit by 2.
Then subtract 9 from numbers that are larger than 10. Thus we get:
Add them all up to get 38
Add all the other digits to get 42.
Sum of 38 and 42 is 80 which is a multiple of 10, the credit card number is valid. 
Write a program that receives a Credit Card number and checks using the above rule whether the Credit Card number is valid.
*/
#include<stdio.h>
#include<string.h>
int main(){
    int len, i, sum, digit, multiple;
    char str[20];
    
    printf("Enter the Credit Card Number:");
    scanf("%s",str);
    
    len = strlen(str);
    sum=0;
    for(i=15; i>=0; i--){
        digit = str[i] - '0';
        if(i%2==0){
            multiple = digit * 2;
            if(multiple>9) multiple -= 9;
            sum += multiple;
        }else{
            sum += digit;
        }
    }

    if(sum%10==0) printf("Valid");
    else printf("Invalid");

    return 0;
}