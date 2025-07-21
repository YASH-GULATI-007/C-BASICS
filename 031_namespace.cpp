#include<iostream>
using namespace std;

namespace First{
    void Fun(){
        cout<<"1"<<endl;
    }
};

namespace Second{
    void Fun(){
        cout<<"2"<<endl;
    }
};


int main(){
    First::Fun();
    Second::Fun();
}