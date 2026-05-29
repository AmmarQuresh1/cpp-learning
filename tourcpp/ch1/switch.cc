#include <iostream>

bool accept2(){
    std::cout<<"Do you want to proceed (y or n)?\n";
    char answer = 0;
    std::cin>>answer;

    switch (answer){
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            std::cout<<"I'll take that for a no.\n";
            return false;
    }
}

int main(){
    std::cout<<accept2()<<"\n";
}