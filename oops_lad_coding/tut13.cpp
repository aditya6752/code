//friend function
//membe rof one class cann only be accessed by that class
//out class access is not possible
//but if we want to, then we can use the
//friend keyword

#include <bits/stdc++.h>
using namespace std;
class human
{
    string name;
    int age;

public:
    human(string iname, int iage)
    {
        name = iname;
        age = iage;
    }
    void tellme()
    {
        cout << name << endl
             << age << endl;
    }
    friend void display(human man);
};
void display(human man)
{
    cout << man.name << endl
         << man.age << endl;
}
int main()
{
    human anil("anil", 24);
    display(anil);
}