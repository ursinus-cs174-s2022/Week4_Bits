/**
 * @brief A simple file to demonstrate how command line arguments
 * work in C++
 */
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    printf("argc = %i\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%i] = %s\n", i, argv[i]);
    }
    return 0;
}