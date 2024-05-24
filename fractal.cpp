#include "functions.h"
void fractal(int height, int width,unsigned int* Array[], int height_start){
    unsigned int max_len = 4;
    for(int i = height_start; i < height; ++i){
        for (unsigned int k = (height-i) * (max_len/2); k > 0; --k) {
            cout<<' ';
        }
        for(int j = 0; j < width; ++j){
            if (Array[i][j] != 0){
                if (Array[i][j] % 2 == 0)
                    cout << setw(int(max_len)) << left << 0;
                else
                    cout << setw(int(max_len)) << left << 1;
            }
        }
        if(i % 2 != 0)
            if (Array[i][width - 1] != 0){
                if (Array[i][width - 1] % 2 == 0)
                    cout << setw(int(max_len)) << left << 0;
                else
                    cout << setw(int(max_len)) << left << 1;
            }

        for(int j = width-2; j >= 0; --j){
            if (Array[i][j] != 0)
                if (Array[i][j] != 0){
                    if (Array[i][j] % 2 == 0)
                        cout << setw(int(max_len)) << left << 0;
                    else
                        cout << setw(int(max_len)) << left << 1;
                }
        }
        cout <<"\n";
    }
}