#include <stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<4;i++){
        for(j=1;j<4;j++){
            for(k=1;k<4;k++){
                printf("%d %d %d\n",i,j,k);
            }
        }
    }
}