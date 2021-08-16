//how to access overidden base class method
//which has been overidden in the base class
//due to overiding 
#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    void introduce(){
        cout<<"i am a person"<<endl;
    }
};
class student: public person{
    public:
    void introduce(){
        cout<<"Chup rah"<<endl;
    }
};
int main()
{
    student anil;
    anil.introduce();
    anil.person::introduce();
}

//here chup rah will be executed
//that is the base class method has been overidden
//in the derived classs