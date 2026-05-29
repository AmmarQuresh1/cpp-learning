#include <iostream>

bool accept()
{
    std::cout << "Do you want to proceed (y or n)?\n";
    char answer = 0;
    std::cin >> answer;

    if (answer=='y')
        return true;
    return false;
}

int main(){
    std::cout << accept() << '\n';
}