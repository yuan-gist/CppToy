#include<iostream>
#include<vector>

struct AbstractShape{
    virtual void Print() const=0;
};

struct Square: public AbstractShape{
    void Print() const override{
        std::cout << "Square .." << std::endl;
    }
};

struct Triangle: public AbstractShape{
    void Print() const override{
        std::cout << "Triangle .." << std::endl;
    }
};

int main(){
    std::vector<AbstractShape*> shapes;
    Square sq;
    Triangle tri;
    shapes.push_back(&sq);
    shapes.push_back(&tri);

    for(const auto* shape: shapes){
        shape->Print();
    }

    return 0;
}


