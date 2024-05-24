#include "functions.h"
void angle_output(int height, int width, unsigned int **Array, int height_start){
    unsigned int max_len = max_len_of_value(height, width, Array);
    for(int i = height_start; i < height; ++i){
        for(int j = 0; j < width; ++j){
            if (Array[i][j] != 0)
                cout << setw(int(max_len)) << left << Array[i][j] << " ";
        }
        if(i % 2 != 0)
            cout << setw(int(max_len)) << left << Array[i][width - 1] << " ";

        for(int j = width-2; j >= 0; --j){
            if (Array[i][j] != 0)
                cout << setw(int(max_len)) << left << Array[i][j] << " ";
        }
        cout <<"\n";
    }
}