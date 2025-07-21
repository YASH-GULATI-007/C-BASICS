#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // length
    char s[50] = "Hello World";
    cout<<strlen(s)<<endl<<endl;

    // concatenation
    char a[50] = "Good";
    char b[50] = "Morning";
    strcat(a,b);
    cout<<a<<endl<<endl;

    // copy
    char c[50];
    strcpy(c,a);
    cout<<c<<endl<<endl;

    // substring
    cout<<strstr(a,"n")<<endl;
    cout<<strchr(a,'o')<<endl;
    cout<<strrchr(a,'o')<<endl<<endl;

    // comparing
    char a1[50] = "hello";
    char a2[50] = "hello";
    cout<<strcmp(a1,a2)<<endl<<endl;

    // string to int and float
    char b1[50] = "237";
    char b2[50] = "237.45";
    long int x = strtol(b1,NULL,10);
    float y = strtof(b2,NULL);
    cout<<x << " " << y << endl;
}