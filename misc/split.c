#include <stdio.h>
#include <string.h>

void split(char *s, char *d) {
    char *ss = strtok(s, d);  
    while (ss != NULL) {
        printf("%s\n", ss);

        ss = strtok(NULL, d);  
    }
}
int main() {
    char s[] = "Hello,World,!"; 
    char *d = ",";  

    split(s, d);
  
    return 0;
}