#include <iostream>

struct Vector{
    double* elem;
    int sz;
};

// read and sum
int main(){
    const int s = 5;
    Vector v;
    v.elem = new double[5]; 
    v.sz = s;

    for(int i=0; i!=s; ++i)
        std::cin>>v.elem[i];
    double sum = 0;
    for (int i=0; i!=s; ++i)
        sum+=v.elem[i];
    
    std::cout<<"sum is: "<<sum<<'\n';

    delete[] v.elem;
}