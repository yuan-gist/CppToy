/*
    a code where class destructor cannot be accssed due to private
*/ 
class dog{
    public:
        dog()=default;
    private:
        ~dog()=default;
};

int main(){
    dog doggy;
    return 0;
}

