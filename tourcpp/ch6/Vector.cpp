#include "Vector.h"
#include <iostream>

// Rule of five - construct, destruct, copy construct & assign, move construct & assign
Vector::Vector(int s):elem{ new double[s] }, sz{s} {}
double& Vector::operator[](int i) {return elem[i];}
const double& Vector::operator[](int i) const{return elem[i];}
int Vector::size() const { return sz; }
Vector::Vector(const Vector& a): elem {new double[a.sz]}, sz{a.sz} {
    for (int i = 0; i != sz; ++i) {
        elem[i] = a.elem[i];
    }
}
Vector& Vector::operator=(const Vector& a) {
    std::cout<<"Copy assignment called";
    double* p = new double[a.sz];
    for (int i = 0; i != a.sz; ++i) {
        p[i] = a.elem[i];
    }
    delete[] elem;
    elem = p;
    sz = a.sz;
    return *this; // this is a pointer, dereferencing it gives type of Vector
    // exists for expression evaluation e.g. a = b = c
}
Vector::Vector(Vector&& a): elem {a.elem}, sz{a.sz} {
    a.elem = nullptr;
    a.sz = 0;
}
Vector& Vector::operator=(Vector&& a) {
    std::cout<<"Move assignment called";
    delete[] elem;
    elem = a.elem;
    sz = a.sz;
    a.elem = nullptr;
    a.sz = 0;
    return *this;
}
Vector::~Vector() {
    std::cout<<"Destructor called\n";
    delete[] elem;
}
