#include<iostream>

int main(){
    int NN=2;
    int* ptr1 = new int[NN];
    int* ptr2 = ptr1;

    ptr1[0] = 1;

    std::cout<<"1: "<<ptr1<<" 2: "<<ptr2<<std::endl;
    std::cout<<"ptr2[0] "<<ptr2[0]<<std::endl;
    
    delete[] ptr1;
    std::cout<<"1: "<<ptr1<<" 2: "<<ptr2<<std::endl;
    std::cout<<"ptr2[0] "<<ptr2[0]<<std::endl;

    return 0;
}