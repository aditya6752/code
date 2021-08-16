//inheritance covered in this 
//slide


#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    int age;
    string name;
    void setname(string iname) { name = iname; }
    void setage(int iage) { age = iage; }
};
class student : public person
{
public:
    int id;
    void setid(int iid) { id = iid; }
    void introduce()
    {
        cout << name << age << id << endl;
    }
};
int main()
{
    student anil;
    anil.setname("aditya");
    anil.setage(24);
    anil.setid(191112459);
    anil.introduce();
}