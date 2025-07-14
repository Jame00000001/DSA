// Parameterized Constructor with Default Values
#include<iostream>
using namespace std;

class something{
    public:
    int a;
    something(int val = 22){
        a=val;
    }
};

int main(){
    something object;
    cout << object.a<<endl;//output is given default value
    something object2(111);
    cout << object2.a << endl;// output is argument


    
}