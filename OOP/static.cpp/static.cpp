/*

#include<iostream>
using namespace std;

class counter{
    public:
    static string name;

    counter(string nm){
        name = nm;
    }
    void PrintName(){
        cout << "Counter attack" << name << endl;
    }
    private:
    static void secretFunction(){
        cout << "This is a private static function!.ekta public static function creat kore oi function e er modde secretFuntion() eta call korte hobe"<<endl;
    }

    public:
        static void callSecret(){
          secretFunction();
        }
};
// Static variable definition
string counter::name = "";

int main() {
    counter object("Mobassheer Hossain Jame");
   /// object.secretFunction();# eta dea call kkora jabena beause this function is private"static.cpp:6:17: note: declared private here static void secretFunction()" -> eta show hobe
    object.callSecret();//that is coreect
    counter::callSecret();// it's called by class
    object.PrintName();
    return 0;
}
 
*/

/*  
// ****Non-Static way
#include<iostream>
using namespace std;

class student{
    public:
    string name;
    string university;//non-static:shobar jonno

};

int main() {
    student s1,s2;
    s1.name = "Mobassher hossain jame";
    s1.university = "Daffodil International University";
    
    s2.name = "Easin Arafat(Muta Easin)";
    s2.university = "Daffodil International University"; 



    cout << s1.name << " studies at " << s1.university << endl;
    cout << s2.name << " studies at " << s2.university << endl;
    return 0;
}

*/
//use of static 
#include<iostream>
using namespace std;

class student{
    public:
    string name;
    static string university;

};
//static variable definatiion
string student::university = "Daffodil Internatiioinal University";

int main() {
    //student s1,s2,s3,s4,s5;
    student s[5];// Array of five 
    s[0].name = "Mobassher hossain jame";
    s[1].name = "Easin Arafat(Muta Easin)";
    s[2].name = "yasin Arafat(patla)";
    s[3].name = "kazi shariar sifat";
    s[4].name = "Munkasir hoque";

    for(int i = 0;i<5;i++)
    {
        cout << s[i].name << " studies at " << student::university << endl;
    }

    return 0;
}