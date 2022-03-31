#include<iostream>
#include<string>

class Student{
    public:
        Student(std::string s, int n){
            name_ = s;
            age_  = n;
        }
        const int& bla_age() const{
            return age_;
        }
        const std::string& bla_name() const{
            return name_;
        }

    private:
        std::string name_;
        int age_;
};

int main(){
    Student zhangsanfeng("Zhang Sanfeng", 80);
    std::cout<<zhangsanfeng.bla_name()<<", age is "<<zhangsanfeng.bla_age()<<std::endl;
    return 0;
}