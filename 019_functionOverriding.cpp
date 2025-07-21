#include<iostream>
using namespace std;

class Parent{
    public :
    void Display(){
        cout<<"Display Parent";
    }
};

class Child :public Parent{
    public :
    void Display(){
        cout<<"Display Child";
    }
};

int main(){
    Child c;
    c.Parent::Display();
}