//NESTED CLASSSES
#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    class address
    {
    public:
        string country;
        string stname;
        int hno;
    };
    address addr;
    void addressplease()
    {
        cout << name << endl
             << addr.country << endl
             << addr.stname << endl
             << addr.hno << endl;
    }
};
int main()
{
    person anil;
    anil.name = "anil";
    anil.addr.country = "india";
    anil.addr.stname = "madamakki";
    anil.addr.hno = 57;
}