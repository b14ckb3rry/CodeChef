//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;
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
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int i = 1, j = 1;
    ll prefix = v[0];
    while (i < n)
    {
        j = i;
        while (j < n && prefix >= v[j])
        {
            j++;
        }
        if (j >= n)
        {
            break;
        }
        swap(v[i], v[j]);
        prefix += v[i];
        i++;
    }
    cout << n - i << '\n';
    for (auto x : v)
    {
        cout << x << ' ';
    }
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