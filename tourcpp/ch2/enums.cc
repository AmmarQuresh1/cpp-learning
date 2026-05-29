#include <iostream>

enum class Color {red, blue, green};
enum class Traffic_light {green, yellow, red};

Traffic_light& operator++(Traffic_light& t){
    using enum Traffic_light;

    switch (t){
    case green: return t=yellow;
    case yellow: return t=red;
    case red: return t= green;
    default: return t;
    }
}

int main() {
    Color col = Color::red;
    Traffic_light light = Traffic_light::red;

    //Color x1 = red; //error
    //Color y2 = Traffic_light::red//error
    Color z3 = Color::red;
    auto x4 = Color::red;
    //int i = Color::red;//error
    //Color c = 2//error

    // both out of range but will still compile
    Color x = Color{5};
    Color y {6};

    int x_int = int(Color::red);

    auto signal = Traffic_light::red;
    Traffic_light next = ++signal;

    enum Color2 {red, green, blue};
    int col2 = green;

    std::cout<<"col2: "<<col2<<'\n';
    std::cout<<"signal: "<<int(signal)<<'\n';
    std::cout<<"next: "<<int(next)<<'\n';
    std::cout<<"x: "<<int(x)<<'\n';
}
