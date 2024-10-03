/*
Find all the syntax and logical errors in the given C language program. No explanation needed but just list the errors concisely in your answer.
#include<studio.h>
int main() {
int sum;
int k,i;
for(int i=1, i<=10, ++i);
{
sum=sum+k;
k++;
}
printf("The value of sum is %f', sum);
return 0
}
*/

/*
Solution
1. #include<studio.h> should be #include<stdio.h>.
2. Semicolon after for(int i=1, i<=10, ++i); should be removed.
3. Commas in for(int i=1, i<=10, ++i) should be replaced with semicolons: for(int i=1; i<=10; ++i).
4. The format specifier %f in printf("The value of sum is %f', sum); should be %d for an integer.
5. The closing single quote in the printf statement should be a double quote: printf("The value of sum is %d", sum);.
6. The closing brace return 0 should be return 0; .
*/