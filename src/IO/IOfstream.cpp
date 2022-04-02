// 2.34 One 0.21
// 2 2.004 two 0.23
// 3 -2.34 string 0.22

#include<iostream>
#include<fstream>
#include<string>
// using namespace std;

int main(){
    int i=0;
    double a=0, b=0;
    std::string s="", tmp="";
    std::string line="";

    std::ifstream f_in("file.txt", std::ios_base::in);

    // while(f_in>>i>>a>>s>>b){
    //     std::cerr << i << " " << a << " " << s << " " << b <<std::endl;
    // }

    while(std::getline(f_in, line)){
        std::cout<<"Read: "<<line<<std::endl;
        std::string::size_type loc = line.find("Hello world ...", 0);
        // if(loc!=std::string::npos){
        //     tmp = line.substr(line.find("=",0)+1, std::string::npos);
        // }
    }

    // std::cout<<tmp<<std::endl;

    // std::ofstream f_out("file_out.txt", std::ios_base::out);
    // if(!f_out.is_open()) {return EXIT_FAILURE;}
    // double aa = 1.12;
    // f_out<<"Just string"<<std::endl;
    // f_out<<std::setprecision(20)<<aa<<std::endl;

    

    return 0;
}