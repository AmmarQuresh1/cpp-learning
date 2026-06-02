#include "Vector.h"
#include <cmath>
#include <iostream>

double sqrt_sum(const Vector& v){
    double sum = 0;
    for (int i = 0; i != v.size(); ++i)
        sum += std::sqrt(v[i]);
    return sum;
}

int main(){
    int v_size;
    std::cin>>v_size;
    Vector v(v_size);
    for (int i=0; i!=v_size; ++i){
        std::cin>>v[i];
    }
    std::cout<<sqrt_sum(v);
}
