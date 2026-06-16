#include <iostream>

class X {
public:
    X() { std::cout << "constructor\n"; }
    X(const X&){ std::cout<<"copy\n"; }
    X(X&&){ std::cout<<"move\n"; }
    ~X()=default;
};

X make(int) {
    return X{};
}

X make_named(int) {
    X local;
    return local;
}

int main() {
    std::cout<<"A \n";
    X a = make(42);

    std::cout<<"B \n";
    X b = make_named(42);
}
