#include<iostream>

int main(){
    // overflow
    int ar[] = {1, 2, 3};
    for(int i=0; i<6; i++){
        std::cout << i << " " << ar[i] << " " << &ar[i] << std::endl; 
    }

    // deference an uninitiallized pointer
     int* p1;
    std::cout<< *p1 <<std::endl;   

    // segmentation fault
    int* p2 = nullptr;
    std::cout<< *p2 <<std::endl;

}