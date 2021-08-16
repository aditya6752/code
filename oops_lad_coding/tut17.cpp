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
//anil.name is not allowed
//anil.setname is allowed, as anil.name is in the main function
//which is outside the function, in which it is defined, also
//the main function is not the derived function, of it
    student aditya;
    aditya.setName("preeting");
    aditya.display();
}