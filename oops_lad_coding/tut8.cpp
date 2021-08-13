
#include <bits/stdc++.h>
using namespace std;
class human
{
private:
    int age;
    string name;

public:
    human()
    {
        cout << "default constructor is called" << endl;
        age=0;
        name="inmae";
    }
    human(string iname,int iage=0)
    {
        cout<<"cons with given input string"<<endl;
        age=iage;
        name=iname;
    }
    void display()
    {
        cout<<name<<endl<<age<<endl;
    }
};
int main()
{
    human anil("andy");
    anil.display();
    return 0;
}