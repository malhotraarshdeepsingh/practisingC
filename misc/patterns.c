#include<stdio.h>

int i, j;
char alphabet;

int main(){
    printf("Code 1 Output:-\n");
    printf("\n");
    /*
    *
    **
    ***
    ****
    *****
    */
   for(i=0; i<5; i++){
     for(j=0; j<=i; j++){
       printf("*");
     }
     printf("\n");
   }

    printf("\n");
    printf("Code 2 Output:-\n");
    printf("\n");
   /*
    *
    
    ***
    
    *****
    */
   for(i=0; i<5; i++){
     if(i%2==0){
        for(j=0; j<=i; j++){
            printf("*");
        }
     }
     printf("\n");
   }

   printf("\n");
   printf("Code 3 Output:-\n");
   printf("\n");
   /*
    ****    
    ***
    **
    *
    */
   for(i=1; i<=4; i++){
     for(j=i; j<=4; j++){
       printf("*");
     }
     printf("\n");
   }

   printf("\n");
   printf("Code 4 Output:-\n");
   printf("\n");
   /*
    1234    
    123
    12
    1
    */
   for(i=4; i>=1; i--){
     for(j=1; j<=i; j++){
       printf("%d",j);
     }
     printf("\n");
   }

   printf("\n");
   printf("Code 5 Output:-\n");
   printf("\n");
   /*
   Printing each and every alphabet
   */
  for(alphabet='A'; alphabet<='Z'; alphabet++){
    printf("%c\n",alphabet);
  }

  printf("\n");
  printf("Code 5 Output:-\n");
  printf("\n");
  /*
  1 1
  12 21
  123 321
  1234 4321
  */
  for(i=1; i<=4; i++){
    for(j=1; j<=i; j++){
      printf("%d",j);
    }
    printf(" ");
    for(j=i; j>=1; j--){
      printf("%d",j);
    }
    printf("\n");
  }

  printf("\n");
  printf("Code 6 Output:-\n");
  printf("\n");

  /*
  1
  2 4 
  3 6 9 
  4 8 12 16
  5 10 15 20 25
  */
  for(i=1; i<6; i++){
    for(j=i; j<=(i*i); j+=i){
      printf("%d ",j);
    }
    printf("\n");
  }
  

  printf("\n");
  return 0;
}