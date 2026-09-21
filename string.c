#include <stdio.h>

int main()
{
    char str[100];
    char ch, symbol;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to replace: ");
    scanf(" %c", &ch);

    printf("Enter the special symbol: ");
    scanf(" %c", &symbol);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            str[i] = symbol;
        }
    }

    printf("Modified string: %s", str);

    return 0;
}