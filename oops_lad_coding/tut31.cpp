//DIAMOND PROBLEM
/*  |-----b----d
a----          |
    |-----c----- */
//for d there are two instances
//of a, hence ther ei sambiguity and redundancy

/* #include <bits/stdc++.h>
using namespace std;
class animal
{
public:
    int age;
    void walk()
    {
        cout << "animal walks" << endl;
    }
};
class tiger: public animal
{
public:
};
class lion : public animal
{
public:
};

class liger:public tiger, public lion{

};

int main()
{
    liger anil;
    anil.walk();//wrong one as it will become ambiguous
} */

#include <bits/stdc++.h>
using namespace std;
class animal
{
public:
    int age;
    void walk()
    {
        cout << "animal walks" << endl;
    }
};
class tiger:virtual public animal
{
public:
};
class lion :virtual public animal
{
public:
};

class liger:public tiger, public lion{

};

int main()
{
    liger anil;
    anil.walk();
} 

//we can deal with this by using virtual inheritance