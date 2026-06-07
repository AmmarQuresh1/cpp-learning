#include <iostream>
#include "Vector_container.h"
#include "uVector_container.h"

void print_all(Container& c) {
    for (int i = 0; i < c.size(); ++i) {
        std::cout<<c[i];
    }
}


int main() {
    Vector_container vc(5);
    uVector_container uvc(3);

    for (int i = 0; i < vc.size(); ++i) {
        vc[i] = i;
    }

    for (int i=0; i<uvc.size(); ++i){
        uvc[i] = 2*i;
    }

    print_all(vc);
    print_all(uvc);

    return 0;
}
