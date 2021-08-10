int maxChainLen(struct val p[],int n)
{
    int lic[n];
    for(int i=0;i<n;i++)
    {
        lic[i]=1;
    }
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        v.push_back({p[i].first,p[i].second});
    }
    sort(v.begin(),v.end(),comp);
    
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(v[j].second<v[i].first&&(lic[i]<=lic[j]))
            {
                lic[i]=lic[j]+1;
            }
        }
    }
    int maxi=-1e9;
    for(auto x: lic)
    {
        maxi=max(x,maxi);
    }
    return maxi;
}