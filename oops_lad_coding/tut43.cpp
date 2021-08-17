//exception handling
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int b = 0;
    int c;
    try
    {
        if(b==0)
        {
            throw "divide by zero";
        }
        c = a / b; //exception
        cout << c << endl;
    }
    catch(const char*e){
        cout<<"exception occurred"<<endl<<e;
    }
}

//throw,try,catch
//error is throw, error is catched
//during the time of suspicion catch is thrown