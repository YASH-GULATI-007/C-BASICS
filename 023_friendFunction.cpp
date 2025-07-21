#include<iostream>
using namespace std;
class your;
class My{
    int a = 20;
    friend your;
    friend void fun();
};

class your{
    public:
        My m;
        void fun(){
            cout<<m.a<<endl;
        }
};

void fun(){
    My p;
    cout<<p.a;
}

int main(){
    your * ptr = new your();
    ptr->fun();
    fun();
}