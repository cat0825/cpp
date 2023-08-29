#include<iostream>
#include<string>
using namespace std;

int fun1(int a,int b);
void print1(const string s);
void fun2(int &x,int &y);
int fun1(int a,int b){
    return a+b;
}

void print1(const string s){
    cout<<s<<endl;
}

void fun2(int &x,int &y){
    x=1;
    y=2;
}

// 函数重载
void print(int value){
    cout<<value<<endl;
}

void print(string value){
    cout<<value<<endl;
}

//函数的默认参数
void greet(const string &name="world"){
    cout<<"hello "<<name<<endl;
}

//函数模版

template<typename T>
T max1(T a, T b){
    return a>b?a:b;
}


//函数指针
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}



















int main(){
    // int a=1,b=2;
    // int x=0,y=0;
    // fun2(x,y);
    // cout<<x<<y<<endl;
    // cout<<fun1(a,b)<<endl;
    // print1("hello world");
    //greet("jack");
    // int intMax = max1(5, 10);
    // double doubleMax = max1(3.14, 2.71);
    // cout<<intMax<<endl;
    // cout<<doubleMax<<endl;
    // int(* funcPtr)(int ,int ); //声明函数指针
    // funcPtr = add; // 指向 add 函数
    // std::cout << "Addition result: " << funcPtr(5, 3) << std::endl;

    // funcPtr = subtract; // 指向 subtract 函数
    // std::cout << "Subtraction result: " << funcPtr(10, 4) << std::endl;

    return 0;
}