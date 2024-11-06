int main(void)
{
    printf("Hexadecimal Tests:\n\n");
    fflush(stdout);
    
    // Test 1: Regular numbers
    printf("Original: %x\n", 255);        // ff
    ft_printf("Yours: %x\n", 255);
    printf("Original: %X\n", 255);        // FF
    ft_printf("Yours: %X\n", 255);
    
    // Test 2: Zero
    printf("Original: %#x\n", 0);         // 0
    ft_printf("Yours: %#x\n", 0);
    printf("Original: %#X\n", 0);         // 0
    ft_printf("Yours: %#X\n", 0);
    
    // Test 3: With # flag
    printf("Original: %#x\n", 255);       // 0xff
    ft_printf("Yours: %#x\n", 255);
    printf("Original: %#X\n", 255);       // 0XFF
    ft_printf("Yours: %#X\n", 255);
    
    // Test 4: Large number
    printf("Original: %#x\n", 0xABCDEF);  // 0xabcdef
    ft_printf("Yours: %#x\n", 0xABCDEF);
    
    return 0;
}
