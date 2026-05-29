#include <iostream>

int main(){
    int x = 2;
    int y = 3;
    int& r = x;
    int& r2 = y;
    r = r2;

    std::cout<<"x: "<<x<<"\ny: "<<y<<"\nr: "<<r<<"\nr2: "<<r2<<'\n';

    r2 = 5;

    std::cout<<"x: "<<x<<"\ny: "<<y<<"\nr: "<<r<<"\nr2: "<<r2<<'\n';
}