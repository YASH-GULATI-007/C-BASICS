#include<iostream>
using namespace std;
int sum(int a , int b , int c = 0){
    return a + b + c;
}
int main()
{
    cout<<sum(2,1)<<endl;
    cout<<sum(1,2,3);
}