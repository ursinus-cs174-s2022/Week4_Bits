#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Load in a file as a binary file
 * 
 * @param filename Path to filename you want to load
 * @param N Pointer to number of bytes in file
 * @return unsigned char* Array of bytes loaded from the file
 */
unsigned char* loadFile(char* filename, int* N) {
    ifstream bin_file(filename, ios::binary);
    unsigned char* res;
    if (bin_file.good()) {
        /*Read Binary data using streambuffer iterators.*/
        vector<unsigned char> v_buf((istreambuf_iterator<char>(bin_file)), (istreambuf_iterator<char>()));
        *N = (int)v_buf.size();
        res = new unsigned char[*N];
        for (int i = 0; i < *N; i++) {
            res[i] = v_buf[i];
        }
        bin_file.close();
    }
    else {
        throw exception();
    }
    return res;
}


/**
 * @brief Write a character array to a file
 * 
 * @param filename Path to file to which to write array
 * @param s Character array
 * @param N Number of bytes in the array
 */
void writeFile(char* filename, unsigned char* s, int N) {
    ofstream fout(filename,std::fstream::trunc|std::fstream::binary);
    for (int i = 0; i < N; i++) {
        fout << s[i];
    }
    fout.close();
}
