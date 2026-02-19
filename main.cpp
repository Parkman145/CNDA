#include "include/CNDA/vectorutils.h"
#include "include/CNDA/ndarray.h"
#include "include/CNDA/array_utilities.h"
#include <ios>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <math.h>

int main(){
    CNDA::Ndarray<double> a{{2, 2}};
    std::cout << a;
    a.write_data({1, 2, 3, 4, 5});
    std::cout << a;
    a.write_data({6, 7, 8, 9});
    std::cout << a;
    return 0;

}