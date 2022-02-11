#ifndef FILE_UTILS_H
#define FILE_UTILS_H


/**
 * @brief Load in a file as a binary file
 * 
 * @param filename Path to filename you want to load
 * @param N Pointer to number of bytes in file
 * @return unsigned char* Array of bytes loaded from the file
 */
unsigned char* loadFile(char* filename, int* N);


/**
 * @brief Write a character array to a file
 * 
 * @param filename Path to file to which to write array
 * @param s Character array
 * @param N Number of bytes in the array
 */
void writeFile(char* filename, unsigned char* s, int N);

#endif
