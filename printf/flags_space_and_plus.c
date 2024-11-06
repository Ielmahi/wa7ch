#include <stdio.h>

int main(void)
{
    // Integers
    printf("Integer with space: % d\n", 42);    // " 42"
    printf("Integer with plus: %+d\n", 42);     // "+42"
    
    // Floats
    printf("Float with space: % f\n", 42.42);   // " 42.420000"
    printf("Float with plus: %+f\n", 42.42);    // "+42.420000"
    
    // Scientific
    printf("Scientific with space: % e\n", 42.42); // " 4.242000e+01"
    printf("Scientific with plus: %+e\n", 42.42);  // "+4.242000e+01"
    
    // These don't work with space/plus
    printf("String with space: % s\n", "hello");   // undefined
    printf("Hex with plus: %+x\n", 42);           // undefined
    printf("Unsigned with space: % u\n", 42);      // undefined
    printf("Pointer with plus: %+p\n", (void*)42); // undefined
    
    return 0;
}
