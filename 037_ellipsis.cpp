#include<iostream>
#include<stdarg.h>
using namespace std;
// C language
// int sum(int n,...){
//     // creating variable list to access values passed
//     va_list list;
//     va_start(list,n);
//     int s = 0;
//     for(int i = 0 ; i< n ;i++){
//         s+=va_arg(list,int);
//     }

//     return s;
    
// }

template <typename... Args>
auto sum(Args... args){
    return (args+...);
}

int main(){
    cout<<sum(1,2,3,4,5,6,7,8,9,10);
}