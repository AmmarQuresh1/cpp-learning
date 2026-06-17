#pragma once
class Vector{
    double* elem;
    int sz;
public:
    Vector(int s);
    double& operator[](int i);
    const double& operator[](int i) const;
    int size() const;

    Vector(const Vector& a); // copy constructor
    Vector& operator=(const Vector& a); // copy assignment
    Vector(Vector&& a); // move constructor
    Vector& operator=(Vector&& a); // move assignment

    ~Vector();
};