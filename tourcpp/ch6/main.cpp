#include <iostream>
#include <utility> // includes std::move
#include "Vector.h"

int main() {
    std::cout << "1. Creating v1\n";
    Vector v1(3);
    v1[0] = 10.5;
    v1[1] = 20.5;
    v1[2] = 30.5;

    std::cout << "\n2. Copying v1 to v2\n";
    Vector v2 = v1; // Copy Constructor

    std::cout << "\n3. Moving v1 to v3\n";
    Vector v3 = std::move(v1); // Move Constructor

    std::cout << "\n4. Testing assignment\n";
    Vector v4(5);
    v4 = v2; // Copy Assignment

    std::cout << "\n5. Testing destructors\n";
    return 0;
}