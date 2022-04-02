#include<iostream>
#include<vector>
#include<memory>

struct abstractShape
{
    virtual void Print() const=0;
    virtual ~abstractShape() = default;
};

struct Square: public abstractShape
{
    void Print() const override{
        std::cout<<"Square\n";
    }
};

struct Triangle: public abstractShape
{
    void Print() const override{
        std::cout<<"Triangle\n";
    }
};

int main(){
    std::vector<std::unique_ptr<abstractShape>> shapes;

    /*
    push_back expects an std::unique_ptr, when passing raw pointer like new Square, 
    which is considered as copy-initialization, the raw pointer needs to be converted to std::unique_ptr implicitly. 
    
    The implicit conversion fails because std::unique_ptr's conversion constructor from raw pointer is marked as explicit.
    emplace_back works because it forwards arguments to the constructor of std::unique_ptr and 
    construct element in direct-initialization form, which considers explicit conversion constructors.
    */

    // shapes.push_back(std::make_unique<Square>()); // or
    shapes.emplace_back(std::move(new Square)); // or
    // shapes.emplace_back(new Square);

    auto triango = std::unique_ptr<Triangle>(new Triangle);
    shapes.emplace_back(std::move(triango));

    for(const auto& item: shapes){
        item->Print();
    }

    return 0;
}
