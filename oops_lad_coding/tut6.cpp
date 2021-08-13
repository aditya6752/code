//constructors
//constructor must have same name
//as class name, also should 
//not be returning value
//constructor cannoit be called manually
//it will be called automatically
//use-

#include <bits/stdc++.h>
using namespace std;

class human
{
    public:
    human(){
        cout<<"constructor is callled "<<endl;
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
