#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<vector>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

struct data
{
    int  a;
    int  b;
    int  c;
    char x[12]; // character array;
};


int main(){
    /* 
    write binary
    */
    ofstream fout("data.bin", std::ios_base::binary);
    if(!fout) {return EXIT_FAILURE;}

    data data_;
    data_.a = 0x11111111;
    data_.b = 0x22222222;
    data_.c = 0x33333333;
    strcpy(data_.x, "0123456789x"); // should be shorther than 12, as there is one byte for the "trailing null"

    fout.write(reinterpret_cast<char*>(&data_), sizeof(data_));

    std::vector<float> vec = {0, 1, 2, 3, 4, 5};
    cout<<vec.front()<<endl;
    // for(const auto& item: vec){
    //     cout<<item<<endl;
    // }
    fout.write(reinterpret_cast<char*>(&vec.front()), vec.size() * sizeof(vec.front()));
    fout.close();

    /* 
    read binary
    */
    ifstream fin("data.bin", std::ios_base::binary);
    if(!fin) {return EXIT_FAILURE;}

    data data_2;
    std::vector<float> vec_2(vec.size(), 0);

    fin.read(reinterpret_cast<char*>(&data_2), sizeof(data_2));
    cout<<data_2.a<<endl;
    cout<<data_2.b<<endl;
    cout<<data_2.c<<endl;
    cout<<data_2.x<<endl;

    fin.read(reinterpret_cast<char*>(&vec_2.front()), vec_2.size() * sizeof(vec_2.front()));
    for(const auto& item: vec_2){
        cout<<item<<endl;
    }

    fin.close();

    return 0;
}