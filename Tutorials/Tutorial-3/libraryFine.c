// A library charges a fine for every book returned late. For the first 5 days the fine is 50 paisa, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30 days your membership will be canceled. WAP to accept no. of days the member is late to return the book and display the fine or appropriate message

#include <stdio.h>

int main() {
    int lateDays;
    float fine = 0.0;

    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &lateDays);

    if (lateDays <= 0) {
        printf("No fine, the book was returned on time.\n");
    } 
    else if (lateDays <= 5) {
        fine = lateDays * 0.50; // 50 paisa per day for first 5 days
        printf("The fine is %f rupees.\n", fine);
    } 
    else if (lateDays >= 6 && lateDays<=30) {
        fine = 5 * 0.50 + (lateDays - 5) * 1.0; // First 5 days fine + 1 rupee per day for next 5 days
        printf("The fine is %f rupees.\n", fine);
    }
    else {
        printf("Your membership has been canceled for returning the book after 30 days.\n");
    }

    return 0;
}
