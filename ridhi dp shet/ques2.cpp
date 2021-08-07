//without memoized approach

/* int cp(int n, vector<int> &dp)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int a = cp(n - 1);
    int b = cp(n - 2);
    return dp[n] = a + b;
} */

//with memoization

//Function to count number of ways to reach the nth stair.
int cp(int n, vector<int> &dp, int mod)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    if (dp[n] != -1)
        return dp[n] % mod;
    int a = cp(n - 1, dp, mod) % mod;
    int b = cp(n - 2, dp, mod) % mod;
    return dp[n] = (a % mod + b % mod) % mod;
}
int countWays(int n)
{
    int mod = 1e9 + 7;
    vector<int> dp(n + 1);
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    return cp(n, dp, mod) % mod;
}