/*
Input:
elePhAnt
Output:
Elephant
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;
    scanf("%s", &str);
    
    if(str[0]>='a' && str[0]<='z') str[0]-=32;
    printf("%c", str[0]);

    for(i=1; i<strlen(str); i++){
        if(str[i]>='A' && str[i]<='Z') {
            str[i]+=32;
            printf("%c", str[i]);
        } else printf("%c", str[i]);
    }

    return 0;
}