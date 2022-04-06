#include<iostream>
#include<cmath>
#include<string>
#include<memory>

int StrToInt(const char* str){
    int num = 0;
    int n = 0;
    bool isNegative = false;
    
    const char* ptrStr = str;

    std::cout<<"pointer version ..."<<std::endl;
    
    if(ptrStr==nullptr){
        return -1;
    }
    
    if(*ptrStr=='-'){
        isNegative = true;
    }
    
    while(*ptrStr++ != '\0'){
        n++;
    }
    ptrStr = str;
    
    char tmp = '0';
    for(auto i=0; i<n; i++){
        auto tmp = *ptrStr++;

        if(tmp<'0' || tmp > '9'){
            continue;
        }
        if(num!=0 || tmp !='0'){
            tmp -= 0x30;
            num += tmp * int(pow(10,n-1 - i));
        }
    }

    if(isNegative){
        num = 0 - num;
    }
    
    return num;

}

int StrToInt(const std::string& str){
    int num = 0;
    int n = 0;
    bool isNegative = false;

    std::cout<<"string version ..."<<std::endl;
    
    if(str.empty()){
        return -1;
    }
    
    if(str.at(0)=='-'){
        isNegative = true;
    }

    for(auto i=0; i<str.size();i++){
        auto tmp = str.at(i);

        if(tmp<'0' || tmp > '9'){
            continue;
        }

        if(num!=0 || tmp !='0'){
            tmp -= 0x30;
            num += tmp * int(pow(10, str.size()-1 - i));
        }

    }

    if(isNegative){
        num = 0 - num;
    }
    
    return num;

}


int main(){
    const char str[] = "-005486321";
    // const char* str  = "-005486321";
    // std::string str = "-005486321";
    std::cout<<StrToInt(str)<<std::endl;

    return 0;
}