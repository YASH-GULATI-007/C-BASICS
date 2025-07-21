#include<iostream>
using namespace std;

int x = 10;
void display(){
    cout<<"Global :"<<x<<endl;
}
int main(){
    int x = 20;
    {
        int x = 30;
        cout<<"Inner Most :"<<x<<endl;
    }
    cout<<"Inner :"<<x<<endl;
    display();
}