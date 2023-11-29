//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;

void solve()
{
    int n, b, k;
    cin >> n >> b >> k;
    int g = n - b;
    int bg = b / k;
    int gg = g / k;
    int br = b - (bg * k);
    int gr = g - (gg * k);
    if (br == gr)
    {
        cout << "0\n";
        return;
    }
    if (br == 0 || gr == 0)
    {
        if (gr == 0)
        {
            cout << br << '\n';
        }
        else
        {
            cout << gr << '\n';
        }
        return;
    }
    // while (br > 0 && gr > 0)
    // {
    //     br--;
    //     gr--;
    // }
    int mx = max(br, gr);
    int mn = min(br, gr);
    int res = mx - mn;
    if (res == 0)
    {
        cout << "0\n";
    }
    else
    {
        cout << res << '\n';
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

    return maru
}