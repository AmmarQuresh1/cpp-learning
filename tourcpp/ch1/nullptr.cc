#include <iostream>

int count_x(const char* p, char x){
    if (p==nullptr)
        return 0;
    int count = 0;
    while(*p){
        if(*p==x)
            ++count;
        ++p;
    }
        
    return count;
}

int main(){
    const char* p = "acc";
    char x = 'c';
    std::cout<<count_x(p, x)<<"\n";
}