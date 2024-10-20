/*
            1
        2       3
    4       5       6
7       8       9      10
*/
#include<stdio.h>
int main(){
    int i, j, k, l, sp=20;

    for ( i=1, k=1; i<5; i++ ) {
        for ( l=1; l<=sp; l++ ) printf(" ");
        sp-=2;
        for( j=1; j<=i; j++, k++ ) printf("%d  ", k);
        printf("\n");
    }

    return 0;
}