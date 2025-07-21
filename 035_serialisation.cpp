#include<fstream>
#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int roll;
    string branch;
    friend ofstream& operator<<(ofstream &o,Student &s);
    friend ifstream& operator>>(ifstream &i,Student &s);
    friend ostream & operator<<(ostream &o , Student &s);
};

ostream & operator<<(ostream &o , Student &s){
    o<<s.name<<" ";
    o<<s.roll<<" ";
    o<<s.branch<<endl;
}
ifstream & operator>>(ifstream& i,Student &s){
    i>>s.name>>s.roll>>s.branch;
    return i;
}

ofstream & operator<<(ofstream& o,Student &s){
    o<<s.name <<endl;
    o<<s.roll<<endl;
    o<<s.branch <<endl;
}

int main(){
    Student s1 ;
    s1.name = "Yash", s1.roll = 195 , s1.branch="CSE";

    ofstream ofs("101_Student.txt");
    // ofs<<s1.name << " "<<s1.roll << " "<<s1.branch <<endl;
    // instead push the object
    ofs<<s1;
    ofs.close();

    Student s2;
    ifstream ifs("101_Student.txt");
    ifs>>s2;
    cout<<s2;
    ifs.close();
}