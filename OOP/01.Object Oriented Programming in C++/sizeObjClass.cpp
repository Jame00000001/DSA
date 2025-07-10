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

    return 0;
}