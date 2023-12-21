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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, g;
        cin >> x >> g;
        x--;
        if (g >= x)
        {
            cout << "1\n";
        }
        else
        {
            x++;
            int y = g * 2;
            int res = max(2, x - y);
            cout << res << '\n';
        }
    }

    return maru
}