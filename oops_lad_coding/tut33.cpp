//LOCAL CLASSES-classes inside the functions

#include <bits/stdc++.h>
using namespace std;
int main()
{
    studentlist();
    return 0;
}

void studentlist()
{
    class student
    {
    public:
        string name;
        int age;
        void display()
        {
            cout << name << endl
                 << age << endl;
        };
    };

    student anil;
    anil.name = "anil";
    anil.age = 24;
    anil.display();
}