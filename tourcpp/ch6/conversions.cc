#define EXPLICIT_CONVERSIONS
#include <iostream>

#ifdef EXPLICIT_CONVERSIONS
class Vector{
    double* elem;
    int sz;
public:
    explicit Vector(int s) : elem {new double[s]}, sz{s} {}
    double& operator[](int s) {return elem[s];}
    int size() {return sz;}
};

#endif

#ifndef EXPLICIT_CONVERSIONS
class Vector{
    double* elem;
    int sz;
public:
    Vector(int s) : elem {new double[s]}, sz{s} {}
    double& operator[](int s) {return elem[s];}
    int size() {return sz;}
};
#endif

int main() {
    #ifdef EXPLICIT_CONVERSIONS
    Vector v1 {7}; // braces initialisation over parenthesis prevents narrowing i.e. 3.14 -> 3. 
    #endif
    #ifndef EXPLICIT_CONVERSIONS
    Vector v1 = 7; // works without explicit conversions
    #endif
    for (int i = 0; i != v1.size(); ++i){
        std::cout<<v1[i]<<'\n';
    }
}