#include<iostream>
using namespace std;

class student{
    public:
    int age;
    string name;
    student (){
        cout << "default constructor is calling" << endl;
    }
    //parameterize constructor
    student(int age,string name){
        this-> age = age;
        this-> name = name;
    }

};

int main() {
    student s2;// without argument type er object creat na korle with out parameter er constructor creat hoena
    student s1(13,"noyon");
    cout << s1.name << " " << s1.age<<endl;
    return 0;
}        