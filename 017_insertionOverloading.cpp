#include<iostream>
using namespace std;

class Complex{
    int real , img;
public:
    Complex(int real = 0 , int img = 0){
        this->real = real;
        this->img = img;
    }

    Complex operator+(Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    friend ostream& operator<<(ostream& , Complex& c1);
};

// Since there are two parameters passed it is defined outside the class
ostream& operator<<(ostream& o, Complex& c1){
    o<<c1.real<<" "<<c1.img<<"i"<<endl;
    return o;
}

int main(){
    Complex c1(3 ,4);
    Complex c2(5 ,6);

    Complex c3;
    c3 = c1 + c2;
    
    // cout is output stream at which the "o" variable refrence
    // c3 is the passed object
    cout<<c3;
}