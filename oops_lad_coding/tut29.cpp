//no matter how many times virtual function
//is inherited it remains virtsual only
/* class a gives class b,c

    |-----b----d
a----          |
    |-----c-----
Now here what wil happen is that, 
we will recieve the input of 
d via b and c, which will create a ambiguity */
//hence we will make the a as virtual base class.

#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    void introduce()
    {
        cout << "from person" << endl;
    }
};
class student : public person
{
public:
    void introduce()
    {
        cout << "hi from student" << endl;
    }
};

class gstudent : public student
{
public:
    void introduce()
    {
        cout << "hi from gstudent" << endl;
    }
};

void whoisthis(person &p){
    p.introduce();
}
int main()
{
    person anil;
    student preeti;
    gstudent rashmi;

    whoisthis(anil);
    whoisthis(preeti);
    whoisthis(rashmi);
}


/* without virtual keyword in base class
from person
from person
from person


with virtual keywordf in base classs
from person
hi from student
hi from gstudent */