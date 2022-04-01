#include<iostream>
using namespace std;

class Printable{   // interface
    public:
        virtual void Print() const=0; // pure virtual function
};

class Rect: public Printable{
    public:
        Rect(int width, int height): width_{width}, height_(height){}
        void Print() const override{
            cout << "Rectangle: width = " << width_ << ", height = " << height_<<endl;
        }
    protected:
        int width_=0;
        int height_=0;
};

class Square: public Rect{
    public:
        explicit Square(int size): Rect(size, size){}
        void Print() const override{
            cout << "Square: size = " << width_ << ", size = " << height_<<endl;
        }
};

void Print(const Printable& var){
    var.Print();
}

int main(){
    // Rect(10, 20).Print();
    Print(Rect(10,20));
    // const Rect& rec_ref = Square(10);
    // rec_ref.Print();
    return 0;
}