#include <stdio.h>
#include <string.h>
int main()
{
    char A[50], B[50], temp;
    int i, j, n1, n2;
    puts("Input first string: ");
    gets(A);
    n1 = strlen(A);
    puts("Input second string: ");
    gets(B);
    n2 = strlen(B);

    for (i = 0; i < n1; i++)
    {
        for (j = i + 1; j < n1; j++)
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    for (i = 0; i < n2; i++)
    {
        for (j = i + 1; j < n2; j++)
        {
            if (B[i] > B[j])
            {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
    printf("\nSorted strings A = %s and B = %s\n", A, B);
    if (strcmp(A, B) == 0)
        puts("Stings are anagram");
    else
        puts("Strings are NOT anagrams");
    return 0;
}