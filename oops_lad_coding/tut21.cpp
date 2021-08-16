#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    person()
    {
        cout << "constructor made for person class" << endl;
    }
    ~person()
    {
        cout << " destructor made for person class" << endl;
    }
};
class student: public person
{
public:
    student()
    {
        cout << "constructor made for studnet class" << endl;
    }
    ~student()
    {
        cout << " destructor made for student class" << endl;
    }
} ;
int main()
{
    student anil;

}

//ordert of calling
/* 1. const of base
2. const of deri class
3. dest of deri class
4. dest of base class */