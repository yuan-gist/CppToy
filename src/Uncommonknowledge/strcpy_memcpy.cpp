#include<iostream>
#include<cstring>

int main(){

    char a[5] = {'s', 'a', '\0', 'c', 'h'}; // '\0' string's terminating null character 
    char b[5];
    char c[5];

    std::strcpy(b, a);
    std::memcpy(c, a, 5);
    
    for(const auto& item: b){
        std::cout << item;
    }
    
    std::cout<<std::endl;
    
    for(const auto& item: c){
        std::cout << item;
    }

    return 0;
}