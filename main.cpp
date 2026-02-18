#include "include/CNDA/vectorutils.h"
#include "include/CNDA/ndarray.h"
#include "include/CNDA/array_utilities.h"
#include <ios>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <math.h>

int main(){
    CNDA::Ndarray<double> a{{2, 2}, {1, 2, 3, 4}};
    CNDA::Ndarray<double> b{{2, 2}, {4, 6, 8, 10}};
    std::cout << CNDA::Ndarray<double>::element_wise(a, b, std::minus<double>());

    return 0;

}