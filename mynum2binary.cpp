#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Convert a number to a binary string, using only bitwise
 *        operators
 * 
 * @param num A 32-bit unsigned integer
 * @return char* A dynamically allocated string storing
 *               "num" in binary
 */
char* getBinary(unsigned int num) {
    char* bits = new char[33];
    // TODO: Fill this in, only using bitwise operators
    /**
        Allowed: Binary AND (&), Binary OR (|), Binary XOR (^), 
        Left Binary Shift (<<), and Unsigned Right Binary Shift (>>>)
        NOT Allowed: +, -, /, *, %
    */
    bits[32] = '\0';
    return bits;
}

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Usage: ./mynum2binary <number>\n");
        return 1;
    }
    long num = atol(argv[1]);
    char* str = getBinary((unsigned int)num);
    printf("%s\n", str);
    delete[] str; // Be sure to delete dynamically allocated string!
    return 0;
}