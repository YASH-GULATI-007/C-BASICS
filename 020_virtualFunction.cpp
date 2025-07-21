#include<iostream>
using namespace std;

class Base {
    public:
        virtual void fun(){
            cout<<"Base Class";
        }
};

class Derived : public Base {
    public:
        void fun(){
            cout<<"Derived Class";
        }
};
int main(){
    Base * p = new Derived();
    p->fun();
}
