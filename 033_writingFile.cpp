#include<fstream>
#include<iostream>
using namespace std;

int main(){
    ofstream outfile("100_file.txt",ios::app);
    if(!outfile){
        cout<<"file not open";
    }
    else{
        for(int i = 1  ; i < 21 ;i++){
            outfile<<i<<endl;
        }
    }
}

// ios::app appends
// ios:: trunc truncates and is the default