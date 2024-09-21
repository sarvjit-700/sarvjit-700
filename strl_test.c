#include <stdio.h>
#include <string.h>  // For strlcpy
#include "libft.h"

int main(void)
{
    char src[] = "This is abtest string.";
    char dst1[50];  // Destination buffer is large enough
    char dst2[10];  // Destination buffer is smaller than src
    size_t copied;

    printf("---- Testing strlcpy ----\n");

    // Test 1: Destination buffer is large enough to hold the source string
    copied = ft_strlcpy(dst1, src, sizeof(dst1));
    printf("Test 1: Destination large enough\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst1);
    printf("Number of characters copied (including null terminator): %zu\n\n", copied);

    // Test 2: Destination buffer is smaller than the source string
    copied = ft_strlcpy(dst2, src, sizeof(dst2));
    printf("Test 2: Destination smaller than source\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst2);  // Should show truncated string
    printf("Number of characters that would have been copied (excluding null terminator): %zu\n\n", copied);

    // Test 3: Empty source string
    char empty_src[] = "";
    char dst3[10];
    copied = ft_strlcpy(dst3, empty_src, sizeof(dst3));
    printf("Test 3: Empty source string\n");
    printf("Source: '%s'\n", empty_src);
    printf("Destination: '%s'\n", dst3);
    printf("Number of characters copied (including null terminator): %zu\n\n", copied);

    // Test 4: Destination buffer size of 0
    char dst4[10];
    copied = ft_strlcpy(dst4, src, 0);  // Destination size is 0
    printf("Test 4: Destination buffer size of 0\n");
    printf("Source: %s\n", src);
    printf("Destination is not changed (buffer size is 0)\n");
    printf("Number of characters that would have been copied: %zu\n\n", copied);

    printf("---- End of Testing ----\n");

    return 0;
}
