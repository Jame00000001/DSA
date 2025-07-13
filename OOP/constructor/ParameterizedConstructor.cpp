//How to Define the Constructor Outside the Class in C++?
#include<iostream>
using namespace std;

class student{
    int roll;
    int age ;
    string name;

    public:
    //declaration
    student(int,int,string);
    void display();
};
//define
student::student(int roll,int age,string name){
    this->roll = roll;
    this->age  = age;
    this->name = name;
}

void student::display(){
   cout << roll << " " << age << " " << name << endl;
}


int main() {
    student s1(122,12,"jame");
    s1.display();
    return 0;
}