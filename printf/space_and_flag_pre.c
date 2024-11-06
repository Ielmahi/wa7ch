#include <stdio.h>

int main(void)
{
    // Test 1: Space flag alone
    ft_printf("Space flag:     % d\n", 42);    // Output: " 42"
    ft_printf("Space flag:     % d\n", -42);   // Output: "-42"
    
    // Test 2: Plus flag alone
    ft_printf("Plus flag:      %+d\n", 42);    // Output: "+42"
    ft_printf("Plus flag:      %+d\n", -42);   // Output: "-42"
    
    // Test 3: Both flags (plus takes precedence)
    ft_printf("Both flags:     %+ d\n", 42);   // Output: "+42"
    ft_printf("Both flags:     % +d\n", 42);   // Output: "+42"

    // Test 4: With width
    ft_printf("With width:     %+ 5d\n", 42);  // Output: "  +42"
    ft_printf("With width:     % +5d\n", -42); // Output: "  -42"
    
    return (0);
}

int main(void)
{
    printf("Space only:  % d\n", 42);    // " 42"
    printf("Plus only:   %+d\n", 42);    // "+42"
    printf("Both flags:  % +d\n", 42);   // "+42" (space is ignored)
    printf("Both flags:  %+ d\n", 42);   // "+42" (space is ignored)
    return (0);
}
