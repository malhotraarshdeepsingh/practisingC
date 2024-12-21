#include <stdio.h>
#include <string.h>

int main()
{
    char password[50];
    int length;
    int minchars = 0;
    int engAlphabet = 0;
    int digit = 0;

    printf("Enter the password: ");
    scanf("%s", password);

    length = strlen(password);
    if (length < 8)
    {
        printf("Password must be at least 8 characters long.\n");
        minchars = 1;
        return 1;
    }

    for (int i = 0; i < length; i++)
    {
        if (password[i] >= 'a' && password[i] <= 'z')
            engAlphabet = 1;
        else if (password[i] >= 'A' && password[i] <= 'Z')
            engAlphabet = 1;
        else if (password[i] >= '0' && password[i] <= '9')
            digit = 1;
    }

    if(digit == 1 && engAlphabet == 1)
        printf("Password is strong.\n");
    else
        printf("Password is weak.\n");
}