#pragma once

template<typename T>
class Vector{
private:
    T* elem;
    int sz;
public:
    Vector(int s):elem{ new T[s] }, sz{s} {}
    T& operator[](int i) {return elem[i];}
    const T& operator[](int i) const {return elem[i];}
    int size() const {return sz;}
    Vector(const Vector& a): elem {new T[a.sz]}, sz{a.sz}{ 
        for (int i {}; i!=sz; ++i){
            elem[i] = a.elem[i];
        }
    } 
    Vector& operator=(const Vector& a) {
        T* p = new T[a.sz];
        for (int i {}; i!=a.sz; ++i){
            p[i] = a.elem[i];
        }
        delete[] elem;
        elem = p;
        sz = a.sz;
        return *this;
    }
    Vector(Vector&& a): elem {a.elem}, sz{a.sz} {
        a.elem = nullptr;
        a.sz = 0;
    } 
    Vector& operator=(Vector&& a) {
        delete[] elem;
        elem = a.elem;
        sz = a.sz;
        a.elem = nullptr;
        a.sz = 0;
        return *this;
    }
    T* begin() {return elem;}
    T* end() {return elem + sz;}
    const T* begin() const {return elem;}
    const T* end() const {return elem + sz;}
    ~Vector() {
        delete[] elem;
    };
};
// non member free functions can be defined outside the class here
