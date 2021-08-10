#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    if(n<9){cout<<"0"<<endl;return;}
    cout<<(n-9)/10+1<<endl;
}
int main(){
    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
