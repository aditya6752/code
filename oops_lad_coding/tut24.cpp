//OVERRIDING
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
}

//here chup rah will be executed
//that is the base class method has been overidden
//in the derived classs