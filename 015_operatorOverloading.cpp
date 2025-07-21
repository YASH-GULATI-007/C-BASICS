#include<iostream>
using namespace std;

class Complex{
    int real , img;
public:
    Complex(int real = 0, int img = 0):
        real(real),
        img(img)
    {
        cout<<"Value Assigned"<<endl;
    }

    Complex operator+(Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    void display(){
        cout<<real << " + "<<img<<"i"<<endl;
    }
};

int main(){
    Complex c1(3 ,4);
    Complex c2(5 ,6);

    Complex c3;
    c3 = c1 + c2;
    c3.display();
}