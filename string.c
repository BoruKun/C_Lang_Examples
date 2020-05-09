#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void) // int main(int argc, string argv[])
{
    string s;
    printf("Before: ");
    scanf("%[^\n]", s); // Format speficier to include spaces

    printf("After: ");
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // convert to uppercase
            printf("%c", (int) s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
        
    }
    printf("\n");
    return 0;
}