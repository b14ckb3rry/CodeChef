//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
#ifdef ONLINE_JUDGE
#define debug(...) 101
#define debug_array(x, y) 101
#else
#include "blackBox.h"
#endif

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int fruit[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> fruit[i];
    }
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        v.push_back({fruit[i], arr[i]});
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int res = 0;
    unordered_map<int, bool> mp;
    for (auto it : v)
    {
        int x = it.first;
        auto y = it.second;
        if (x < 0 || mp[y])
            continue;
        else
        {
            mp[y] = true;
            res += x;
        }
    }
    cout << res;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << '\n';
    }

    return maru
}