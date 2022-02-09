#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Use the textbook algorithm to convert a binary
 * number to a string
 * 
 * @param num A 32-bit unsigned integer
 * @return char* A dynamically allocated string storing
 *               "num" in binary
 */
char* getBinary(unsigned int num) {
    char* bits = new char[33];
    unsigned int x = num;
    unsigned int pow = 1;
    for (int i = 0; i < 31; i++) {
        pow *= 2;
    }
    for (int i = 0; i < 32; i++) {
        if (pow <= x) {
            bits[i] = '1';
            x -= pow;
        }
        else {
            bits[i] = '0';
        }
        pow /= 2;
    }
    bits[32] = '\0';
    return bits;
}

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Usage: ./num2binary <number>\n");
        return 1;
    }
    long num = atol(argv[1]);
    char* str = getBinary((unsigned int)num);
    printf("%s\n", str);
    delete[] str; // Be sure to delete dynamically allocated string!
    return 0;
}