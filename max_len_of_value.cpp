#include "functions.h"
unsigned int max_len_of_value(int height, int width, unsigned int* Array[]){
    unsigned int max_len = 0;
    for(int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (max_len < Array[i][j]){
                unsigned int count = 0, value = Array[i][j];
                while(value != 0) {
                    value /= 10;
                    ++count;
                }
                max_len = count;
            }
        }
    }
    return max_len;
}