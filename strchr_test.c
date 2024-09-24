#include <stdio.h>   // For printf
#include "libft.h"   // Include your custom library

int main(void)
{
    const char *string = "Hello, world!";
    char ch;
    char *result;

    printf("---- Testing ft_strchr ----\n");

    // Test 1: Find a character that exists ('o')
    ch = 'o';
    printf("Test 1: Finding '%c' in \"%s\"\n", ch, string);
    result = ft_strchr(string, (int)ch);  // Casting ch to int as per prototype
    if (result != NULL)
        printf("Character '%c' found at position: %ld\n\n", ch, result - string);
    else
        printf("Character '%c' not found\n\n", ch);

    // Test 2: Find a character that doesn't exist ('x')
    ch = 'x';
    printf("Test 2: Finding '%c' in \"%s\"\n", ch, string);
    result = ft_strchr(string, (int)ch);  // Casting ch to int
    if (result != NULL)
        printf("Character '%c' found at position: %ld\n\n", ch, result - string);
    else
        printf("Character '%c' not found\n\n", ch);

    // Test 3: Find the null terminator ('\0')
    ch = '\0';
    printf("Test 3: Finding '\\0' in \"%s\"\n", string);
    result = ft_strchr(string, (int)ch);  // Casting '\0' to int
    if (result != NULL)
        printf("Null terminator found at position: %ld\n\n", result - string);
    else
        printf("Null terminator not found\n\n");

    // Test 4: Find a character in an empty string
    const char *empty_string = "";
    ch = 'H';
    printf("Test 4: Finding '%c' in an empty string\n", ch);
    result = ft_strchr(empty_string, (int)ch);  // Casting ch to int
    if (result != NULL)
        printf("Character '%c' found at position: %ld\n\n", ch, result - empty_string);
    else
        printf("Character '%c' not found in the empty string\n\n", ch);

    printf("---- End of Testing ----\n");

    return 0;
}
