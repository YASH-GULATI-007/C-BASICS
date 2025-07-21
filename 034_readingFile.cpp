#include<fstream>
#include<iostream>
using namespace std;

int main(){
    ifstream infile;
    infile.open("100_file.txt");
    if(!infile.is_open()){
        cout<<"Not Open<,endl";
    }
    else{
        while(!infile.eof()){
            string x;
            infile>>x;
            cout<<x<<endl;
        }
    }
    infile.close();
}