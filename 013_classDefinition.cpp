#include<iostream>
using namespace std;

class Rect{
public:
    int l,b;

    int area(){
        return l*b;
    }

    int peri(){
        return 2*(l+b);
    }
};

int main(){
    Rect r;
    r.l = 5;
    r.b = 10;
    cout<<r.area()<<endl;

    Rect * p;
    p = &r;

    cout<<p->area()<<endl;


    Rect * q = new Rect();
    q->l = 20;
    q->b = 10;
    cout<<q->area();
    return 0;
}