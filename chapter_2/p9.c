// Program 2.9 Size of a type
#include <stdio.h>

int main(void) {
    long x = 9430;

    printf("The size of variable is: %u\n", sizeof(x));
    printf("The size of type is: %u\n", sizeof(float));
    printf("The size of type is: %u\n", sizeof(long long));
    
    return 0;
}