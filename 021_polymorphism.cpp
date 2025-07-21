#include<iostream>
using namespace std;

class Car{
    public :
    virtual void start() = 0;
    virtual void stop() = 0;
};

class Innova:public Car{
    public:
    void start(){
        cout<<"Innova Start"<<endl;
    }

    void stop(){
        cout<<"Innova Stop"<<endl;
    }
};
class Swift:public Car{
    public:
    void start(){
        cout<<"Swift Start"<<endl;
    }

    void stop(){
        cout<<"Swift Stop"<<endl;
    }
};

int main(){
    Car *c = new Innova();
    c->start();
    c = new Swift();
    c->start();
}