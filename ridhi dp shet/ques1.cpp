//T.C = ON, S.C = O1

/* class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b=1;
        int c;
        if(n<=1)
        {
            return n;
        }
        for(int i=2;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}; */

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> multiply(vector<vector<int>> &a,vector<vector<int>> &b)
{
    int n = a.size();
    vector<vector<int>> ans(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                ans[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    return ans;
}
vector<vector<int>> matrixexp(vector<vector<int>> &a,int n)
{
    if(n==0)
    {
        int sz=a.size(); //
        vector<vector<int>> ans(sz,vector<int>(sz,0));
        for(int i=0;i<sz;i++)
        {
            ans[i][i]=1;
        }
        return ans;
    }
    if(n==1){
        return a;
    }
    vector<vector<int>> temp=matrixexp(a,n/2);
    vector<vector<int>> ans=multiply(temp,temp);
    if(n&1){
        ans=multiply(ans,a);
    }
    return ans;
}
int main()
{
    int n;cin>>n;
    vector<vector<int>> a={{1,1},{1,0}};
    vector<vector<int>> ans=matrixexp(a,n);
    int sz=ans.size();
    for(int i=0;i<sz;i++)
    {
        for(int j=0;j<sz;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

//answer will be at a[0][1]