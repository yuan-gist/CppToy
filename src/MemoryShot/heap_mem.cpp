#include<iostream>

int main(){
    int NN=2;
    int* ptr=nullptr;
    ptr = new int[NN];
    ptr[0] = 0; ptr[1] = 1;
    std::cout<<ptr[0]<<std::endl;

    delete[] ptr;
    std::cout<<ptr[0]<<std::endl; // invalid

    return 0;
}
