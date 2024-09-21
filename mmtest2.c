#include <stdio.h>
#include <string.h>  // For comparison with the standard memmove
#include "libft.h"   // Assuming ft_memmove is declared here

int main(void)
{
    char src1[50] = "This is a test string.";
    char dst1[50];  // Buffer to hold the copied data

    char src2[] = "1234567890";
    
    printf("---- Testing ft_memmove ----\n");

    // Test 1: Simple non-overlapping copy
    printf("Before ft_memmove (non-overlapping):\n");
    printf("Source: %s\n", src1);
    
    ft_memmove(dst1, src1, strlen(src1) + 1);  // Move entire string
    printf("Destination after ft_memmove: %s\n\n", dst1);
    
    // Test 2: Overlapping memory regions (src2 array)
    printf("Before ft_memmove (overlapping):\n");
    printf("Source before overlap: %s\n", src2);
    
    ft_memmove(src2 + 4, src2, 6);  // Move "123456" to overlap at src2 + 4
    printf("Source after overlap: %s\n\n", src2);
    
    // Test 3: Zero-length move
    printf("Before ft_memmove (0 length):\n");
    printf("Source: %s\n", src1);
    
    ft_memmove(dst1, src1, 0);  // Move 0 bytes
    printf("Destination after 0 length ft_memmove: %s\n\n", dst1);
    
    // Test 4: Handle NULL pointers (should return NULL)
    printf("Before ft_memmove (NULL pointers):\n");
    if (ft_memmove(NULL, NULL, 5) == NULL)
        printf("NULL pointer handling successful\n");
    
    printf("---- End of Testing ----\n");

    return 0;
}
