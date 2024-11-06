#include <stdio.h>  // for original printf comparison
#include "ft_printf.h"

int main(void)
{
    // Test 1: Using a pointer initialized to 0
    void *ptr1 = (void *)0;
    printf("Original printf: ");
    printf("%p\n", ptr1);
    printf("Your ft_printf: ");
    ft_printf("%p\n", ptr1);

    // Test 2: Using a null pointer constant
    void *ptr2 = NULL;
    printf("Original printf: ");
    printf("%p\n", ptr2);
    printf("Your ft_printf: ");
    ft_printf("%p\n", ptr2);

    // Test 3: Using direct zero cast
    printf("Original printf: ");
    printf("%p\n", (void *)0);
    printf("Your ft_printf: ");
    ft_printf("%p\n", (void *)0);

    return (0);
}
