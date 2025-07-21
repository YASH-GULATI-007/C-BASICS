#include<iostream>
using namespace std;

int * fun(int size){
    int * p = new int[size];
    for(int i = 0 ; i  < size;i++){
        p[i] = i + 1;
    }

    return p;
}

int main(){
    int * ptr = fun(10);

    for(int i = 0 ; i < 10 ; i++){
        cout<<ptr[i]<<' ';
    }
}