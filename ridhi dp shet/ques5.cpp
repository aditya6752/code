long long m = 1e9+7;
    long long int countBT(int h) { 
        long long int dp[h+1];
        dp[0]=1;dp[1]=1;
        for(int i=2;i<=h;i++){
            dp[i]=(dp[i-1]*((2*dp[i-2])%m+dp[i-1]%m)%m);
        }
        return dp[h];
    }