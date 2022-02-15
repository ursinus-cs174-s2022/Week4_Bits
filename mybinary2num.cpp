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
unsigned int getNum(char* binary) {
    // Move string forward until it reaches the end
    int idx = 0;
    while(binary[idx] != '\0') {
        idx++;
    }
    idx--;
    // Rewind the string and add on powers of 2, starting at 1
    // TODO: Fill this in
    /**
        Allowed: Binary AND (&), Binary OR (|), Binary XOR (^), 
        Left Binary Shift (<<), and Unsigned Right Binary Shift (>>)
        NOT Allowed: +, -, /, *, %
    */
    unsigned int pow = 1;
    unsigned int ret = 0;
    for (int i = idx; i >= 0; i--) {
        if (binary[i] == '1') {
            ret = ret | pow;
        }
        pow = pow << 1;
    }
    return ret;
}

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Usage: ./binary2num <binary string>\n");
        return 1;
    }
    unsigned int num = getNum(argv[1]);
    printf("%u\n", num);
    return 0;
}