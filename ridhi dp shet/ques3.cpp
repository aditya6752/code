#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dp[n+1][2];
    dp[1][0]=1;//yellow
    dp[1][1]=1;//green
    for(int i=2;i<=n;i++)
    {
        dp[i][0]=dp[i-1][1];//as this is yellow, so from previous only green possible
        dp[i][1]=dp[i-1][0]+dp[i-1][1];//earlier both possible
    }
    cout<<dp[n][1]+dp[n][0]<<endl;
}