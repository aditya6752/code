#include <bits/stdc++.h>
using namespace std;

class person
{
    public:
    void introduce(){
        cout<<"hey from person"<<endl;
    }
};
class student:public person
{
    public:
    void introduce(){
        cout<<"hey from person"<<endl;
    }
};

void whoisthis(person p){
    p.introduce();
}
int main()
{
    student anil;
    anil.introduce();
    whoisthis(anil);
}