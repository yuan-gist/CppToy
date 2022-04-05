#include<iostream>

volatile int a = 0;

int main(){

    while (a>1)
    {
        std::cout<<"Hello ...\n";
    }
    
    return 0;
}