/*
#include <stdio.h>
int main() {
    int i,n1;
    printf("Enter many times to loop? ");
    scanf("%d,&n");
    for ( i=0 , i<n , i++ )
    printf("\n dropping bars in rap...");
    return 0 
}
*/
/*
#include <stdio.h>
int main() {
    int i, n;   // Change variable name to n
    printf("Enter how many times to loop? ");
    scanf("%d", &n);   // Earlier:- scanf("%d,&n");
        
    for (i = 0; i < n; i++)  // replaced commas with semicolons
        printf("\n dropping bars in rap...");

    return 0;  // Added semicolon here
}
*/

/*
#include <stdio.h>
int main() {
    int num = 400;
    int *ptr = &num;
    printf("Value of num: %d\n", *ptr);
    *ptr = 100;
    printf("Updated num: %d\n", num);
    return 0;
}
*/
/*
// No changes required
#include <stdio.h>
int main() {
    int num = 400;
    int *ptr = &num;
    printf("Value of num: %d\n", *ptr); 

    *ptr = 100;
    printf("Updated num: %d\n", num);
    
    return 0;
}
*/