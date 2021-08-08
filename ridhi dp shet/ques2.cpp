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

// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the original string
// after converting it back from camelCase
void getOrgString(string s)
{

	// Print the first character as it is
	cout << s[0];

	// Traverse the rest of the
	// characters one by one
	int i = 1;
	while (i < s.length()) {

		// If current character is uppercase
		// print space followed by the
		// current character in lowercase
		if (s[i] >= 'A' && s[i] <= 'Z')
			cout << " " << (char)tolower(s[i]);

		// Else print the current character
		else
			cout << s[i];
		i++;
	}
}

// Driver code
int main()
{
	string s = "ILoveGeeksForGeeks";

	getOrgString(s);

	return 0;
}

// This code is contributed by mits
