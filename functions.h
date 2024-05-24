#ifndef KURSOVAYA_FUNCTIONS_H
#define KURSOVAYA_FUNCTIONS_H

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
using std::cout;
using std::cin;
using std::setw;
using std::left;
unsigned int max_len_of_value(int height, int width, unsigned int* Array[]);
void angle_output(int height, int width, unsigned int **Array, int height_start);
void output(int height, int width, unsigned int **Array, int height_start);
void fractal(int height, int width,unsigned int* Array[], int height_start);

#endif
