//a class that contains pure virtual function
//is called as abstarct class
//for defining pure virtual function
//we just have to do like  virtual void introduce() = 0;
//pure virtual cannot be defined in its own class
//but should be defined in all the derived class
//**for abstract class we cannot craete a object of that

#include <bits/stdc++.h>
using namespace std;
class database{
    public:
    virtual void getname()=0;
};
class accountant:public database{
    public: 
    void getname() {
        cout<<"tthis is accountant class"<<endl;
    }
};
class manager:public database{
    public: 
    void getname() {
        cout<<"tthis is manager class"<<endl;
    }
};
class customer:public database{
    public: 
    void getname() {
        cout<<"tthis is customer class"<<endl;
    }
};

int main()
{
    manager m;
    accountant a;
    customer c;

    m.getname();
    a.getname();
    c.getname();
}

//we cannot create a object of abstarcty class
//but we can create a pointer of abtsract class
