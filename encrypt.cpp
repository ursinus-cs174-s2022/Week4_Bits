#include <stdio.h>
#include "fileutils.h"
 
int main(int argc, char** argv) {
    int N, M;
    unsigned char* s = loadFile(argv[1], &N);
    unsigned char* t = loadFile(argv[2], &M);
    int j = 0;
    for (int i = 0; i < N; i++) {
        s[i] = s[i] ^ t[j];
        i++;
        j++;
        if (j >= M) {
            j = 0;
        }
    }
    writeFile(argv[3], s, N);
    return 0;
}