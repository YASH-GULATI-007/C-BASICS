#include<iostream>
using namespace std;

class Outer{
    public:
        int a = 10;
        static int b;
        void fun(){
            i.show();
        }
        class Inner{
            public:
                int a = 20;
                void show(){
                    cout<<b<<endl;
                }

                void display(){
                    cout<<"WOW"<<endl;
                }
        };
        Inner i;
};

int Outer::b = 20;

int main(){
    Outer obj;
    obj.fun();

    Outer::Inner a;
    a.show();
}