
#ifndef ARRAY_MATH_H
#define ARRAY_MATH_H

#include "ndarray.h"
#include <math.h>

#define CNDA_UNARY_MATH_OP(func_name, op) \
template <typename T> \
Ndarray<T> func_name(Ndarray<T> arr){ \
    return arr.element_wise([](T val) { \
        return op(val); \
    }); \
} 


namespace CNDA {

    // Trigonometric Functions
    CNDA_UNARY_MATH_OP(sin, std::sin)
    CNDA_UNARY_MATH_OP(cos, std::cos)
    CNDA_UNARY_MATH_OP(tan, std::tan)

    // Inverse Trigonometric Functions
    CNDA_UNARY_MATH_OP(asin, std::asin)
    CNDA_UNARY_MATH_OP(acos, std::acos)
    CNDA_UNARY_MATH_OP(atan, std::atan)

    // Roots & Powers
    CNDA_UNARY_MATH_OP(sqrt, std::sqrt)
    CNDA_UNARY_MATH_OP(cbrt, std::cbrt) 
    CNDA_UNARY_MATH_OP(exp, std::exp)

    // Logarithmic Functions
    CNDA_UNARY_MATH_OP(log, std::log)
    CNDA_UNARY_MATH_OP(log10, std::log10)

    // Absolute Value & Rounding
    CNDA_UNARY_MATH_OP(abs, std::abs)
    CNDA_UNARY_MATH_OP(floor, std::floor)
    CNDA_UNARY_MATH_OP(ceil, std::ceil)
    CNDA_UNARY_MATH_OP(round, std::round)

}

#endif