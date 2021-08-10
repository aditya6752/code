ll countStrings(int n)
{
    ll mod = 1e9 + 7;
    int zeroes = 1;
    int ones = 1;
    for (int i = 2; i <= n; i++)
    {
        int a = zeroes;
        zeroes = ones;
        zeroes = zeroes % mod;
        ones = (a % mod + ones % mod) % mod;
    }
    return (zeroes % mod + ones % mod) % mod;
}