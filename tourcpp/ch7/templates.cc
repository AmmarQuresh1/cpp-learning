#include "Vector.hpp"
#include <iostream>

int main() {
    Vector<int> vi(5);
    Vector<char> vs(5);

    std::cout<<"Input five numbers:\n";
    for (int i{}; i!=vi.size(); ++i) {
        std::cin>>vi[i];
    }

    std::cout<<"Input five characters:\n";
    for (int i{}; i!=vs.size(); ++i) {
        std::cin>>vs[i];
    }

    for (auto x: vi) {
        std::cout<<x;
    }
    std::cout<<'\n';
    
    for (auto x: vs) {
        std::cout<<x;
    }
    std::cout<<'\n';
    
    return 0;
}
