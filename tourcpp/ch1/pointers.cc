#include <iostream>

int main(){
    char v[4]={'a', 'b', 'c', 'd'};
    char *p;

    p = &v[3];
    char x = *p;

    std::cout<<"&v[3] is "<< static_cast<void*>(p) <<'\n';
    std::cout<<"x is "<<x<<'\n';
}
