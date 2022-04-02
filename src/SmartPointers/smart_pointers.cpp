#include<iostream>
#include<memory>

class A{
    public:
        int a_;
        A(int a): a_(a){}
    private:
};

int main(){
    /*
        unique pointers
    */
    auto uPtr_a = std::unique_ptr<A>(new A(10)); // c++11
    // auto ptr_a = std::make_unique<A>();        // c++14
    std::cout<<"a: "<<uPtr_a->a_<<std::endl;
    
    auto uPtr_b = std::move(uPtr_a);
    std::cout<<"a: "<<uPtr_b->a_<<std::endl;

    // ptr_a becomes nullptr; ptr_a->a: segmentation fault
    // std::cout<<"a: "<<ptr_a<<std::endl;

    /*
        shared pointers
    */
   auto sPtr_a = std::make_shared<A>(10);
   std::cout<<sPtr_a.use_count()<<std::endl;
   {
       auto sPtr_b = sPtr_a;
       std::cout<<"a: "<<sPtr_a.use_count()<<std::endl;
       std::cout<<"b: "<<sPtr_b.use_count()<<std::endl;
   }

    std::cout<<"Back to main scope\n";
    std::cout<<sPtr_a.use_count()<<std::endl;

    return 0;
}