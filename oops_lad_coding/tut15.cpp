//in case of protected
//the data members are
//accessible in subclass as well
#include <bits/stdc++.h>
using namespace std;
class person
{
protected:
    string name;

public:
    void setName(string iname)
    {
        name = iname;
    }
    void display()
    {
        cout << "name is " << name << endl;
    }
};

class student : public person
{
public:
    void display()
    {
        cout << name << endl;
    }
};
int main()
{
    person anil;
    anil.setName("aditya");
    anil.display();

    student aditya;
    aditya.setName("preeting");
    aditya.display();
}

//now here it is evidable that
//name can be accessed in the studnt 
// as in person it is referred as 
//protected
//so it can be accessed in
//the subclass.