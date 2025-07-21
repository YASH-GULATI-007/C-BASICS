#include<iostream>
using namespace std;

int main(){
    char s[50];
    cout<<"Enter : ";
    cin>>s;
    cout<<"Scan 1 : "<<s<<endl;

    cin.ignore();
    char a[50];
    cin.get(a,50);
    cout<<"Scan 2 : "<<a<<endl;

    cin.ignore();
    char arr[50];
    cin.getline(a,50);
    cout<<"Scan 3 : "<<arr<<endl;
}