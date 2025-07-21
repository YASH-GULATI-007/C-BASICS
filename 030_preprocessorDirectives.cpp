#include<iostream>
using namespace std;

#define PI 3.14
#define MSG(x) #x
#define SQR(x) x * x;

# ifndef PI
    #define PI 3
#endif
                                                                  
int main(){
    string a  = MSG(PI);
    string b = "WOW " + a;
    cout<< b ;
}