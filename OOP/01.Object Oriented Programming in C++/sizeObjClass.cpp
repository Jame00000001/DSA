#include<iostream>
using namespace std;

class b{
    int x;
    int y;//ekane shob data type jodi same dei ,tahole size = number of data type * byte number of this data type
    //** jodi diffrent type er data type ekshate likhi tkn size change hoie jai karon etar memory allocation diffrent.{tkn ekta concept ashe ->padding concept}
};

int main(){
    b obj;
    cout << sizeof(b) << endl;
    cout << sizeof(obj) << " ";

}
//Exmple 2
class b{
    //this is empty class
};
int main(){
    b obj1,obj2;
    cout << sizeof(obj1) << endl; //outpu:1
    //ei khetre output ashbe 1 byte but it'empty class
    //reson:Empty class e kono member na thakleo uniqe address rakhar jonno size = 1 byte rhake
    //jate alada object er vinno vinno address thake 
    cout << sizeof(obj2) << endl;//outpu:1

    cout << &obj1 << endl;//er address ek rkm->0x61ff0f
    cout << &obj2 << endl;//er address ek rkm->0x61ff0e
    

    
}
