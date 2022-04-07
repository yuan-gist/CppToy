#include<iostream>
#include<vector>

class Mute{
    
    public:
        int getItem(int index) const{
            N++;
            return vec[index];

        }

    private:
        std::vector<int> vec;
        mutable int N;

};

int main(){
    Mute m;
    return 0;
}