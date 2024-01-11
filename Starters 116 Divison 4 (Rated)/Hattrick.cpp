//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0
#ifdef ONLINE_JUDGE
#define debug(...) 101
#define debug_array(x, y) 101
#else
#include "blackBox.h"
#endif

void solve()
{
    char a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    bool flag = false;
    if (a == 'W' && b == 'W' && c == 'W')
    {
        flag = true;
    }
    else if (b == 'W' && c == 'W' && d == 'W')
    {
        flag = true;
    }
    else if (c == 'W' && d == 'W' && e == 'W')
    {
        flag = true;
    }
    else if (d == 'W' && e == 'W' && f == 'W')
    {
        flag = true;
    }
    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
    }

    return maru;
}