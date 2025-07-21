#include<iostream>
using namespace std;

class Rect{
public:
    int l = 10,b = 20;
    Rect(int x , int y){
        l = x;
        b = y;
    }
    Rect (Rect &t){
        l = t.l;
        b = t.b;
    }

    Rect ():Rect(1,1){}

    int area (){
        return l * b;
    }
    int peri();
};

int Rect::peri(){
    return 2*(l + b);
}

int main(){
    Rect r(2, 5);
    Rect t(r);
    cout<<t.area()<<endl;
    cout<<t.peri()<<endl;
}