#include <stdio.h>   // For printf
#include "libft.h"   // Include your custom library

int main(void)
{
    const char *string = "bonjour";
    char ch;
    char *result;

    printf("---- Testing ft_strrchr ----\n");

    // Test 1: Find the last occurrence of a character that exists ('o')
    ch = 'b';
    printf("Test 1: Finding last occurrence of '%c' in \"%s\"\n", ch, string);
    result = ft_strrchr(string, (int)ch);  // Casting ch to int
    if (result != NULL)
        printf("Last occurrence of '%c' found at position: %ld\n\n", ch, result - string);
    else
        printf("Character '%c' not found\n\n", ch);

    printf("---- End of Testing ----\n");

    return 0;
}