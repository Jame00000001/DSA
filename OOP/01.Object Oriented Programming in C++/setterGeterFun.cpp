#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age=-1,id_no;
    string grade;

    //function getter and setter we can use
    public:
    void setName(string s){
        //Benefit of function 
        //We can write condition here to cheek name is valid or not
        if(s.size()==0){
            cout << "invalid name:"<<endl;
            return;
        }
        name = s;
    }
    void setAge(int a){
        //here condition lilke age must be between 0 and 100
        if(a<0||a>100){
            return;
        }
        age = a;
    }
    void setIdnumber(int i){
        id_no = i;
    }
    void setGrade(string g){
        grade = g;
    }
    void getName(){
        cout << name <<endl;
    }
    void getAge(){
        if(age==-1){
         cout << "you set wrong age,you set valid age ,valid age is greter then zero and less then 100"<<endl;
        }else
        cout << age <<endl;
    }
    int getIdnumber(){
       return id_no;

    }

    string getGrade(int pin){
        if(pin==123)
        return  grade;

        return "pin doesn't match";
    }
    
};

int main(){
    Student s1;
    s1.setName("Noyon");
    s1.setAge(-21);
    s1.setIdnumber(241);
    s1.setGrade("A+");
    s1.getName();
    s1.getAge();
    cout << s1.getIdnumber() <<endl;
    cout << s1.getGrade(124) << endl;//ekane get grade er bitor j value set korci ota holo arguments
}