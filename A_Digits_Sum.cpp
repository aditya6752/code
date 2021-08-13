#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,k;cin>>n>>k;
    vector<int> v(n);
    vector<int> presum(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    presum[0]=v[0];
    for(int i=1;i<n;i++)
    {
        presum[i]=presum[i-1]+v[i];
    }
    int maxi=INT_MIN;
    if(k>n)
    {
        cout<<presum[n-1]<<endl;
        return;
    }
    for(int i=0;i<=k;i++)
    {
        maxi=max(maxi,presum[n-1]-presum[n-1-k]);
    }
    cout<<maxi<<endl;
    return;
}
int main(){
    ll test=1;
    while(test--)
    {
        solve();
    }
    return 0;
}
