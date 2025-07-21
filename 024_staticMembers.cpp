#include<iostream>
using namespace std;

class Test{
    private:
        int a , b;
        static int x;
    public:
        
        Test(){
            a = 10;
            b = 10;
            x++;
        }
        static int getX(){
            return x;
        }
};

int Test::x = 0;

int main(){
    Test t1;
    cout<<t1.getX()<<endl;
}