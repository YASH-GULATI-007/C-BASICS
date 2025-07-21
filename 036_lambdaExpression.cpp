#include<iostream>
using namespace std;

template<typename T>
void fun(T f){
    f();
}

int main(){
    int a=[](int x , int y)->int{
        return x + y;
    }(10,30);
    cout<<a<<endl;

    cout<<([](int x , int y)->int{
        return x + y;
    }(10,31))<<endl;

    auto f = [a](){
        cout<<a<<endl;
    };

    fun(f);
    a++;
    fun(f);// the function replaces a with 40
}
