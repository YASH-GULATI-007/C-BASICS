#include<iostream>
using namespace std;
class Rectangle{
private:
    int l , b;
public:
    Rectangle(int l = 0 , int b = 0){
        this->l = l;
        this->b = b;
    }
    int getL(){
        return l;
    }

    int getB(){
        return b;
    }
};
class Cuboid:public Rectangle{
private:
    int h;
public:
    Cuboid(int l, int b , int h):Rectangle(l,b){
        this->h = h;
    }
    int volume(){
        return h * getL() * getB();
    }
};
int main(){
    Cuboid c(4,5,2);
    cout<<c.volume();
}