#include <stdio.h>
#include <string.h>  // For comparison with standard strnstr
#include "libft.h"   // Assuming ft_strnstr is part of your libft library

int main(void)
{
    const char haystack1[] = "Hello world!";
    const char needle1[] = "world";
    const char needle2[] = "test";
    const char needle3[] = "";
    size_t len;
    char *result;

    printf("---- Testing ft_strnstr ----\n");

    // Test 1: Basic test, searching for "world" in "Hello world!"
    len = 12;
    printf("Test 1: Searching for \"%s\" in \"%s\" with len %zu\n", needle1, haystack1, len);
    result = ft_strnstr(haystack1, needle1, len);
    printf("ft_strnstr result: %s\n", result ? result : "NULL");

    // Test 2: Searching for "test" in "Hello world!" (should return NULL)
    len = 12;
    printf("Test 2: Searching for \"%s\" in \"%s\" with len %zu\n", needle2, haystack1, len);
    result = ft_strnstr(haystack1, needle2, len);
    printf("ft_strnstr result: %s\n", result ? result : "NULL");

    // Test 3: Searching for an empty string (needle is empty)
    len = 12;
    printf("Test 3: Searching for an empty string in \"%s\" with len %zu\n", haystack1, len);
    result = ft_strnstr(haystack1, needle3, len);
    printf("ft_strnstr result: %s\n", result ? result : "NULL");

    // Test 4: Searching for "world" with length shorter than the needle
    len = 5;
    printf("Test 4: Searching for \"%s\" in \"%s\" with len %zu\n", needle1, haystack1, len);
    result = ft_strnstr(haystack1, needle1, len);
    printf("ft_strnstr result: %s\n", result ? result : "NULL");

    // Test 5: Searching in an empty haystack
    const char haystack2[] = "";
    len = 5;
    printf("Test 5: Searching for \"%s\" in an empty haystack with len %zu\n", needle1, len);
    result = ft_strnstr(haystack2, needle1, len);
    printf("ft_strnstr result: %s\n", result ? result : "NULL");

    printf("---- End of Testing ----\n");

    return 0;
}
