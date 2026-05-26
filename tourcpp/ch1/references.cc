#include <iostream>

void square(int &x){
    x *= x;
}

int main(){
    int n = 3;
    square(n);
    std::cout<<n<<"\n";
}
