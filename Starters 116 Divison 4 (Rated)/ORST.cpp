//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0
typedef long long ll;
#ifdef ONLINE_JUDGE
#define debug(...) 101
#define debug_array(x, y) 101
#else
#include "blackBox.h"
#endif

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n], arr2[m], arr3[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    sort(arr2, arr2 + m);
    ll mx = arr2[m - 1];
    sort(arr + n - mx, arr + n);
    for (auto x : arr)
    {
        cout << x << ' ';
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << '\n';
    }

    return maru;
}