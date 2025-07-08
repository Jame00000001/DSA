#include<iostream>
using namespace std;

class Student
{
    public: //jodi ami ekane public set kore na dei,tahole by default vhabe access specifire hishebe privat dhore nei
    string name;
    int age,student_id_number;
    int Cgpa;

};

int main(){
    Student s1;
    s1.name = "Jame";
    s1.age = 21;
    s1.student_id_number = 241;
    s1.Cgpa=3.76;
    
    cout << s1.name << endl;
    cout << s1.student_id_number << endl;
    cout << s1.Cgpa << endl;
    cout << s1.age << endl;
    

    Student s2;
    s2.name = "noyon";
    s2.age = 21;
    s2.student_id_number = 231;
    s2.Cgpa=4.00;
    cout << "============"<<endl;
    cout << s2.name << endl;
    cout << s2.student_id_number << endl;
    cout << s2.Cgpa << endl;
    cout << s2.age << endl;
    
    
}