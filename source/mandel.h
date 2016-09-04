//
// Created by lichevsky on 04.09.16.
//

#ifndef INC_3DS_MESS_MANDEL_H
#define INC_3DS_MESS_MANDEL_H
#include <complex>
#include <cstdlib>
#include <map>
#include <vector>
#include <cstdio>
#include "histogram_acc.h"

using namespace std;


struct fieldDef{
    size_t nRE;
    size_t nIM;
    double RE_from;
    double RE_to;
    double IM_from;
    double IM_to;
};

vector<vector<size_t>> getField(fieldDef, size_t, double);
vector<string> preparePallet(bool);
size_t quantify(size_t input, size_t min, size_t max, size_t pallet_size);
map<size_t ,size_t> buildPalletMappings(histogram_acc h, size_t pallet_size);
histogram_acc histogram(vector<vector<size_t>> input);
#endif //INC_3DS_MESS_MANDEL_H