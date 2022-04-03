#include<iostream>
#include "tools.h"

int main(int argc, char** argv){
    sayHello();

    const int a=1, b=2;
    std::cout<< add(a,b)<<std::endl;

    // DisplayImages();
    wrong_types();

    return 0;
}
