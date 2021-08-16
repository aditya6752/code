#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    void introduce()
    {
        cout << "hey from person" << endl;
    }
};
class student : public person
{
public:
    void introduce()
    {
        cout << "hey from student" << endl;
    }
};
class farmer:public person{
public:
    void introduce()
    {
        cout << "hey from farmer" << endl;
    }
};
void whoisthis(person p)
{
    p.introduce();
}
int main()
{
    farmer anil;
    student alex;
}

//polymorphism mena shaving many forms