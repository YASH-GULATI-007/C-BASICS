#include<iostream>
using namespace std;

class Complex{
    int real , img;
public:
    Complex(int real = 0 , int img = 0){
        this->real = real;
        this->img = img;
    }

    friend Complex operator+ (Complex c1 , Complex c2);

    void display(){
        cout<<real << " + "<<img<<"i"<<endl;
    }
};

Complex operator+ (Complex a , Complex b){
    Complex t;
    t.real = a.real + b.real;
    t.img = a.img + b.img;
    return t;
}

int main(){
    Complex c1(3 ,4);
    Complex c2(5 ,6);

    Complex c3;
    c3 = c1 + c2;
    c3.display();
}