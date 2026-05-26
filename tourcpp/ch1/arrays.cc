#include <iostream>

void print(){
    int v[10] = {0, 1, 2, 3, 4, 5};

    for (auto i=0; i!=10; ++i){
        std::cout<<v[i]<<'\n';
    }
}

int main(){
    print();
}
