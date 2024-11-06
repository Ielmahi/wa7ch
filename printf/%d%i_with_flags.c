#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("Basic Integer Tests:\n");
    fflush(stdout);
    
    // Test 1: Zero
    printf("Original (0): %d\n", 0);
    fflush(stdout);
    ft_printf("Yours (0): %d\n", 0);
    fflush(stdout);

    // Test 2: Positive number
    printf("Original: %d\n", 12345);
    fflush(stdout);
    ft_printf("Yours: %d\n", 12345);
    fflush(stdout);

    // Test 3: Negative number
    printf("Original: %d\n", -12345);
    fflush(stdout);
    ft_printf("Yours: %d\n", -12345);
    fflush(stdout);

    // Test 4: Plus flag
    printf("Original: %+d\n", 42);
    fflush(stdout);
    ft_printf("Yours: %+d\n", 42);
    fflush(stdout);

    // Test 5: Space flag
    printf("Original: % d\n", 42);
    fflush(stdout);
    ft_printf("Yours: % d\n", 42);
    fflush(stdout);

    // Test 6: INT_MIN
    printf("Original: %d\n", INT_MIN);
    fflush(stdout);
    ft_printf("Yours: %d\n", INT_MIN);
    fflush(stdout);

    return (0);
}
