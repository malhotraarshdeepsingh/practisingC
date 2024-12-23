#include <stdio.h>

int main()
{
    int n = 5;

    /*
    A
    A B
    A   C
    A     D
    A B C D E
    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == n)
                printf("%c ", 65 + j - 1);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;

    /*
            *           
          *   *         
        *       *       
      *           *     
    * * * * * * * * *   

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf("  ");

        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1 || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    */


    /*
            *           
          *   *         
        *       *       
      *           *    
    *               *   
      *           *     
        *       *       
          *   *         
            *           

    for (int i = 0; i < 2 * n - 1; i++) {
        int l;
        if (i < n) l = 2 * (n - i) - 1;
        else l = 2 * (i - n + 1) + 1;

        for (int j = 0; j < l; j++)
            printf(" ");
        
        for (int k = 0; k < 2 * n - l; k++) {
            if (k == 0 || k == 2 * n - l - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    */

    /*
    * * * * * * * * *   
      *           *     
        *       *       
          *   *         
            *           
          *   *         
        *       *       
      *           *     
    * * * * * * * * *   

    for (int i = 0; i < 2 * n - 1; i++) {
        int l;
        if (i < n) l = 2 * i + 1;
        else  l = 2 * (2 * n - i) - 3;

        for (int j = 0; j < l; j++)
            printf(" ");

        for (int k = 0; k < 2 * n - l; k++) {
            if (k == 0 || k == 2 * n - l - 1 || i == 0
                || i == 2 * n - 2)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }       
    */

   /*

               A
             A B C
           A B C D E
         A B C D E F G
       A B C D E F G H I
         A B C D E F G
           A B C D E
             A B C
               A

   for (int i = 0; i < 2 * n - 1; i++) {
        int comp;
        if (i < n) comp = 2 * (n - i) - 1;
        else comp = 2 * (i - n + 1) + 1;

        for (int j = 0; j < comp; j++)
            printf(" ");

        for (int k = 0; k < 2 * n - comp; k++) {
            printf("%c ", k + 'A');
        }
        printf("\n");
    }
   */

  /*
  // Pascal's Triangle
  
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");

        int val = 1;
        for (int k = 0; k <= i; k++) {
            printf("%d ", val);
          
            val = val * (i - k) / (k + 1);  
        }
        printf("\n");
    }
  */

  /*
  // Floyd's Triangle
    int n = 5;
    char c = 'A';

    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= i; j++) {
        printf("%c ", c++);
      }
      printf("\n");
    }
    return 0;
  */

  /*
  // Reverse Floyd's Triangle
    
    int n = 4;  
    char c = n * (n + 1) / 2 + 'A';

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("%c ", c--);
        printf("\n");
    }
  */

  /*
    A B C D E
    A     D
    A   C
    A B
    A
  
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (j == 0 || j == n - i - 1 || i == 0)
                printf("%c ", j + 'A');
            else
                printf("  ");
        }
        printf("\n");
  }
  */

  /*
      A B C D E F G H I
        A           G
          A       E
            A   C
             A
             
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * i + 1; j++)
            printf(" ");
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            if (k == 0 || k == 2 * (n - i) - 2 || i == 0)
                printf("%c ", k + 'A');
            else
                printf("  ");
        }
        printf("\n");
    }
  */
}