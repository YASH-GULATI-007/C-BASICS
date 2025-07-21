#include<iostream>
using namespace std;
#define A 10

class Demo{
    public:
        int x = 10 , y= 20;
        void Display() const {
            // This function cannot alter the value of any vairable in the class
            cout<<x<<endl;
        }
};

void FNC(const int & x , const int  & y){
    // The values stored in the variables cannot be altered
    cout<< x << " "<< y <<endl;
}

int main(){
    // Variable
    {
        const int a = 10;
        // Value if a is stuck and cannot be altered
    }

    // Pointer
    {
        int b = 20;
        int const * ptr_1 = &b; // const int * ptr_1 is the same
        // the value of the varialbe can be accessed but not be altered
    
        int * const ptr_2 = &b;
        // the ptr_2 cant be assigned to any other variable
    
        const int * const ptr = &b;
        // the pointer cant alter the value of the vairable assigned
        // the pointer cannot be assigned to any other variable
    }

    // Function 
    {
        int a = 10 ,b = 20;
        FNC(a,b);
    }
}