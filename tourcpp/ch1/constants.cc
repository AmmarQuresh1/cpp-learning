#include <iostream>

constexpr double nth(double x, int n){
    double res = 1;
    int i = 0;
    while (i<n){
        res *= x;
        ++i;
    }
    return res;
}

int main(){
    constexpr double exponent = nth(3,3);
    std::cout<<"result is: "<<exponent<<"\n";
}
