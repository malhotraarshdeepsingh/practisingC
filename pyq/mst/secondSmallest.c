// Complete the following C program to find the second smallest number in the array. No need to re-write the whole program, just write the missing piece. 
/*
#include<stdio.h>
int main(){
    int n,i,AH[] = {14, 34, 9, 1, -5, 2, 8, 11, 15, 31}, x;
    // fill in the code here
    printf("\n%d",x); // print the second smallest (x) value
    return 0;
} 
*/

#include<stdio.h>
int main(){
    int n=10, i, AH[] = {14, 34, 9, 1, -5, 2, 8, 11, 15, 31}, x;
    int smallest = AH[0], secondSmallest=0;

    for(i = 1; i < n; i++) {
        if (AH[i] < smallest) {
            secondSmallest = smallest;
            smallest = AH[i];
        } else if (AH[i] < secondSmallest && AH[i] != smallest) {
            secondSmallest = AH[i];
        }
    }

    x = secondSmallest;

    printf("\n%d",x); // print the second smallest (x) value
    return 0; 
}