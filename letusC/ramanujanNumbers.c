/* Generates Ramanujan Numbers */
#include<stdio.h>
int main(){
    int i,j,k,l,n;
    
    printf("Tell the limit to generate Ramanujan numbers:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            for(k=1;k<=n;k++){
                for(l=1;l<=n;l++){
                    if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&k!=l){
                        if(i*i*i+j*j*j==k*k*k+l*l*l){
                            printf("%d %d %d %d\n",i,j,k,l);
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}