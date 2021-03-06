#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct _
{
    ios_base::Init i;
    _()
    {
        cin.sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
} _;

int main()
{
    ll n;
    cin >> n;
    ll arr[1000003] = {0};
    ll tree[1000001] = {0};
    ll cnt[n + 1];

    for (ll i = 0; i <= n; i++)
        cnt[i] = 0;

    ll q;
    cin >> q;
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        cnt[a]++;
        cnt[b + 1]--;
    }
    ll currentsum = 0;
    for (ll i = 1; i <= n; i++)
    {
        currentsum += cnt[i];
        arr[i] = currentsum;
        tree[currentsum]++;
    }

    for (ll i = 1; i <= 1000000; i++)
    {
        tree[i] += tree[i - 1];
    }

    ll t;
    cin >> t;

    while (t--)
    {
        ll x;
        cin >> x;
        if (x == 0)
            cout << n << endl;
        else
            cout << n - tree[x - 1] << endl;
    }
}