// A country has coins of denomination 3, 5 and 10, respectively. Define a recursive function canchange(k) that returns 1 if it is not possible to pay a value of k using these coins. Otherwise, it returns the minimum number of coins needed to make the payment.
// For example, canchange(7) will return 1. On the other hand, canchange(14) will return 4 because 14 can be paid as 3+3+3+5, and there is no other way to pay with fewer coins. Finally, 15 can be changed as 3+3+3+3+3, 5+5+5, 5+10, so canchange(15) will return 2.

#include <stdio.h>
#include <limits.h>

int canchange(int k) {
    if (k == 0) return 0;

    if (k < 0) return INT_MAX;

    int use3 = canchange(k - 3);
    int use5 = canchange(k - 5);
    int use10 = canchange(k - 10);

    int minCoins = INT_MAX;
    if (use3 != INT_MAX) minCoins = use3 + 1;
    if (use5 != INT_MAX) minCoins = (minCoins < use5 + 1) ? minCoins : use5 + 1;
    if (use10 != INT_MAX) minCoins = (minCoins < use10 + 1) ? minCoins : use10 + 1;

    return (minCoins == INT_MAX) ? INT_MAX : minCoins;
}

int main() {
    int k;
    printf("Enter the amount to check: ");
    scanf("%d", &k);

    int result = canchange(k);

    if (result == INT_MAX) {
        printf("1 (It is not possible to pay %d using these coins)\n", k);
    } else {
        printf("%d (Minimum number of coins needed to pay %d)\n", result, k);
    }

    return 0;
}
