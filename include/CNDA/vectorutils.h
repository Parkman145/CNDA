#ifndef VECTOR_UTILS
#define VECTOR_UTILS

#include <vector>
namespace vector_utils {
    template <typename T>
    T product(std::vector<T> vec) {
        if (vec.size() == 0) {
            return 0;
        }
        
        T prod = vec[0];

        for (int i = 1; i < vec.size(); i++) {
            prod *= vec[i];
        }

        return prod;
    }
    bool compatible_shape(std::vector<int> a, std::vector<int> b);
}

inline bool vector_utils::compatible_shape(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()){
        return false;
    }

    for (int i = 0; i < a .size(); i++){
        if (a[i] == -1 || b[i] == -1) continue;

        if (a[i] != b[i]) return false;
    }

    return true;
}

#endif