//destructors
//special memeber of function, executed when it goes out of scope or delete function ias called

#include <bits/stdc++.h>
using namespace std;
class human
{
public:
    human()
    {
        cout << "constructor called" << endl;
    }
    ~human() {
        cout<<"destructor called";
    }
};
int main()
{
    human *anil;
    anil = new human();
    delete anil;
    return 0;
}

//destructor should be of the
//smae name as constructor and 
//object
//destructor also can't retyurn any value
