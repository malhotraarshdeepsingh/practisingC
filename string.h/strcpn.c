// The strspn() function returns the length of the initial substring of the string pointed to by str1 that is made up of only those character contained in the string pointed to by str2.

#include <stdio.h>
#include <string.h>

int main () { 
   int len = strspn("geek geek","geek"); 
   printf("Length of initial segment matching : %d\n", len );
   // Output-4
   return(0); 
}