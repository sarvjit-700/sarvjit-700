#include <stdio.h>   // For printf

int main(void)
{
    const char buffer[] = "This is a test buffer";
    char ch;
    void *result;

    printf("---- Testing ft_memchr ----\n");

    // Test 1: Find the first occurrence of a character that exists ('t')
    ch = 't';
    printf("Test 1: Finding first occurrence of '%c' in \"%s\"\n", ch, buffer);
    result = ft_memchr(buffer, ch, sizeof(buffer));  // Search entire buffer
    if (result != NULL)
        printf("First occurrence of '%c' found at position: %ld\n\n", ch, (char *)result - buffer);
    else
        printf("Character '%c' not found\n\n", ch);

    // Test 2: Find the first occurrence of a character that doesn’t exist ('x')
    ch = 'x';
    printf("Test 2: Finding first occurrence of '%c' in \"%s\"\n", ch, buffer);
    result = ft_memchr(buffer, ch, sizeof(buffer));
    if (result != NULL)
        printf("First occurrence of '%c' found at position: %ld\n\n", ch, (char *)result - buffer);
    else
        printf("Character '%c' not found\n\n", ch);

    // Test 3: Find the null terminator ('\0')
    ch = '\0';
    printf("Test 3: Finding '\\0' in \"%s\"\n", buffer);
    result = ft_memchr(buffer, ch, sizeof(buffer));
    if (result != NULL)
        printf("Null terminator found at position: %ld\n\n", (char *)result - buffer);
    else
        printf("Null terminator not found\n\n");

    // Test 4: Find the first occurrence of a character in an empty string
    const char empty_buffer[] = "";
    ch = 'T';
    printf("Test 4: Finding first occurrence of '%c' in an empty buffer\n", ch);
    result = ft_memchr(empty_buffer, ch, sizeof(empty_buffer));
    if (result != NULL)
        printf("First occurrence of '%c' found at position: %ld\n\n", ch, (char *)result - empty_buffer);
    else
        printf("Character '%c' not found in the empty buffer\n\n");

    // Test 5: Find the first occurrence of a character that appears multiple times ('s')
    ch = 's';
    printf("Test 5: Finding first occurrence of '%c' in \"%s\"\n", ch, buffer);
    result = ft_memchr(buffer, ch, sizeof(buffer));
    if (result != NULL)
        printf("First occurrence of '%c' found at position: %ld\n\n", ch, (char *)result - buffer);
    else
        printf("Character '%c' not found\n\n");

    printf("---- End of Testing ----\n");

    return 0;
}
