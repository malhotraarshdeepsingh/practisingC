#include <stdio.h>

int main() 
{ 
    char str[] = "Hello World"; 
    int i = 0; 
  
    FILE* temp = tempfile(); 
    if (temp == NULL) 
    { 
        puts("Unable to create temp file"); 
        return 0; 
    } 
  
    puts("Temporary file is created\n"); 
    while (str[i] != '\0') 
    { 
        fputc(str[i], temp); 
        i++; 
    } 

    rewind(temp); 
  
    while (!feof(temp)) 
        putchar(fgetc(temp)); 
} 