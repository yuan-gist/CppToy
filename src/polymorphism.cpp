#include<iostream>
using namespace std;

class Rect{
    public:
        Rect(int width, int height): width_{width}, height_(height){}
        virtual void Print() const{
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

int main(){
    // Rect(10, 20).Print();
    // const Square& sq_ref = Rect(10,10);
    const Rect& rec_ref = Square(10);
    // rec_ref.Print();
    return 0;
}