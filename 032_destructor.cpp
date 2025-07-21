#include<iostream>
using namespace std;

class Rect{
public:
    virtual ~Rect(){
        cout<<"Rect Deleted"<<endl;
    }
};

class Cuboid : public Rect{
public:
    ~Cuboid(){
        cout<<"Cuboid Deleted"<<endl;
    }
};

int main(){
    Cuboid * c = new Cuboid(); 
    // Without virtual destructor the order of deletionb is child then parent
    delete c;

    Rect *r = new Cuboid();
    // Without virtual destructor the parent class id destroted
    // With virtual both are deleted in child -> parent order
    delete r;
}
