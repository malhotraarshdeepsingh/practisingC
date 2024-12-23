#include <stdio.h>
 
int main()
{
    char old_name[] = "geeks.txt"; 
    char new_name[] = "geeksforgeeks.txt";
    int value;
 
    value = rename(old_name, new_name);
 
    if (!value) {
        printf("%s", "File name changed successfully");
    }
    else {
        perror("Error");
    }
    
    return 0;
}