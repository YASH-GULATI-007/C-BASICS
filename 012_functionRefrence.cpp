#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int& fun(int& x , int& y){
    cout<<x << " "<<y<<endl;
    return y;
}
int main(){
    int x = 10 , y = 20;
    fun(x,y) = 500;
    cout<<x << " "<<y<<endl;
}