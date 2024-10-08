// memmove() is used to copy a block of memory from a location to another.

#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str1[] = "Geeks"; // Array of size 100 
    char str2[] = "Quiz"; // Array of size 5 
  
    puts("str1 before memmove "); 
    puts(str1); 
  
    /* Copies contents of str2 to sr1 */
    memmove(str1, str2, sizeof(str2)); 
  
    puts("\nstr1 after memmove "); 
    puts(str1); 
  
    return 0; 
}