#include<iostream>
#include<string.h>
using namespace std;

class demo{
    private:
        size_t length;
        char* data;
    public:
        demo(const char *str){
            length=strlen(str);
            data=new char[length+1];
            strcpy(data,str);
        }
        ~demo(){
            delete[] data;
        }
        demo& operator=(const demo &other){
            if(this==&other){
                return *this;
            }
            delete[] data;
            length=other.length;
            data=new char[length+1];
            strcpy(data,other.data);
            return *this;
        }

        void display(){
            cout<<data<<endl;
        }
};


int main(){
    demo d1("hello");
    demo d2("world");
    d1.display();
    d2.display();
    d1=d2;
    d1.display();
    d2.display();
    //d1.display();
    return 0;
}