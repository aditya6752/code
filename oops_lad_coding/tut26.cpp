#include<bits/stdc++.h>
using namespace std;

class person {
    private: 
    int age;
    public:
    void setage(int iage) { 
        this->age=iage;
        //this->age, age both are valid but 
        //is usefull when iage is age only.
        //then we can;t write age=age at line 
        //9, in that case this->age=age, will 
        //be used. 
    }
    void showage(){
        cout<<this->age<<endl;
    }
};
int main()
{
    person anil;
    anil.setage(24);
    anil.showage();
}

//this point is used for the member function
//this is not used for friend function
//as they are not the data members of main class
