//static keyword
/* 
#include<bits/stdc++.h>
using namespace std;
void display();
int main()
{
    display();
    display();
    display();
    display();
    display();
    return 0;
}

void display()
{
    static int counter = 0;
    cout<<"display function acalled"<<counter<<"times"<<endl;
} */

/* #include <bits/stdc++.h>
using namespace std;
class human
{
public:
    static int human_count;
};
int human::human_count = 0;
int main()
{
    cout<<human::human_count<<endl;
    return 0;
}
 */
//outside class, inside class


#include <bits/stdc++.h>
using namespace std;
void counter()
{
    static int count = 0;
    cout<<"the value is "<<count++<<endl;
}
int main()
{
    for(int i=0;i<3;i++)
    {
        counter();
    }
}
