//operator overloading
#include <bits/stdc++.h>
using namespace std;
class marks
{
    int mark;
    marks(){
        mark=0;
    }
    marks(int m){
        mark=m;
    }
    void yourmarkplease(){
        cout<<"your mark is "<<mark <<endl;
    }
};
int main()
{
    marks m1(10,20),m2(30,40);
    marks m3=m1+m2;
    m3.display();
}