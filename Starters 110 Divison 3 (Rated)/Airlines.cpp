//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
typedef long long ll;

void solve()
{
    int x, n;
    cin >> x >> n;
    ll p = x * 100;
    if (p >= n)
    {
        cout << "0\n";
        return;
    }
    int dif = abs(n - p);
    if (dif <= 100)
    {
        cout << "1\n";
        return;
    }
    int res = 0;
    while (dif > 0)
    {
        dif -= 100;
        // dif%=100;
        res++;
    }
    cout << res << '\n';
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
    }

    return maru
}