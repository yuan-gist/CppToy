#include<iostream>
#include<cstring>

class myString{
    public:
        myString(){
            // content = nullptr; 
            // destructor needs something to delete[]. If content isn't set to something,
            // you'll get a big ka-BOOM! when the myString is destroyed (cc stack overflow)
            content = new char[1];
            content[0] = '\0';
            length = 0;
        }

        myString(const char* source){
            // DANGER: strlen will fail horribly if passed an unterminated string. At a
            // loss at the moment for a good, safe solution. Look into strnlen, but
            // even it can't help you here. (cc stack overflow)
            length = strlen(source);
            // Need one extra character to fit the NULL (0, '\0')
            content = new char[length+1];
            strcpy(content, source);
        }

        // copy constructor
        myString(const myString& source){
            length = source.length;
            content = new char[length+1];
            strcpy(content, source.content);
        }

        // assignment
        myString& operator=(const myString& source){
            if(this==&source){
                return *this;
            }

            delete[] content; content=nullptr;
            length = source.length;
            content = new char[length+1];
            strcpy(content, source.content);

            return *this;
        }

        void PrintContent(){
            // for(auto i=0; i<length; i++){
            //     std::cout<<content[i];
            // }
            std::cout<<content<<std::endl;
        }

        void PrintLength(){
            std::cout<<length<<std::endl;
        }

        ~myString(){
            delete[] content;
            content = nullptr;
        }

    private:
        char* content;
        int length;
};

int main(){
    myString myStr0;
    myString myStr1("Hello ...");
    myString myStr2;
    myStr2 = myStr1;
    myStr2.PrintContent();
    myStr2.PrintLength();

    return 0;
}