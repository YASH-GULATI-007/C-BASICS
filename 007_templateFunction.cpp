#include<iostream>
using namespace std;

template <class X>
X Max(X a , X b){
    if(a> b) return a;
    return b;
}

int main()
{
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5f,17.3f);
}