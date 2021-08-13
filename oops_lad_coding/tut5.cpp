/* #include <bits/stdc++.h>
using namespace std;

class human
{
private:
    int age;
};
int main()
{
    human aditya;
    aditya.age = 12;
} */
//age is inacessible

#include <bits/stdc++.h>
using namespace std;

class human
{
private:
    int age;
public:
    void display()
    {
        cout << age << endl;
    }
    void setage(int value)
    {
        age=value;
    }
};
//use of private class is that, age will 
//not be directly accessible 
//hence the third party will have to 
//get the access from diplay method
int main()
{
    human aditya;
    aditya.setage(12);
    aditya.display();
}
//method of how to access the private data members
