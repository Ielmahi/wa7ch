#include <stdio.h>

int main(void)
{
    printf("Unsigned Integer Tests:\n");
    fflush(stdout);
    
    // Test 1: Zero
    printf("Original (0): %u\n", 0);
    fflush(stdout);
    ft_printf("Yours (0): %u\n", 0);
    fflush(stdout);

    // Test 2: Regular number
    printf("Original: %u\n", 12345);
    fflush(stdout);
    ft_printf("Yours: %u\n", 12345);
    fflush(stdout);

    // Test 3: Maximum unsigned int
    printf("Original: %u\n", UINT_MAX);
    fflush(stdout);
    ft_printf("Yours: %u\n", UINT_MAX);
    fflush(stdout);

    // Test 4: Negative number (will wrap around)
    printf("Original: %u\n", -1);
    fflush(stdout);
    ft_printf("Yours: %u\n", -1);
    fflush(stdout);

    return (0);
}
