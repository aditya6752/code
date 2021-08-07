#include <bits/stdc++.h>
using namespace std;
double dp[1000000 + 5];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, P;
        cin >> N >> P;
        dp[0] = 1;
        dp[1] = 0;
        dp[2] = P / 100.0;
        dp[3] = 1 - P / 100.0;
        double ans = 0;
        for (int i = 4; i <= N; ++i)
        {
            dp[i] = (P / 100.0) * dp[i - 2] + (1 - P / 100.0) * dp[i - 3];
        }
        for (int i = 1; i <= N; i++)
        {
            if (N % i == 0)
            {
                ans += dp[i];
            }
        }
        cout << ans << endl;
    }
}
