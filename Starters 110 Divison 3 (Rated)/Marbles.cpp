//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0;
int INF = INT_MAX;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a % b == 0)
    {
        cout << "0\n";
        return;
    }
    int count = 0;
    int tempx = a, tempy = b;
    while (a % b != 0)
    {
        a++;
        b--;
        count++;
    }
    if (b == 0)
    {
        count = INF;
    }
    int res2 = 0;
    int res1 = count;
    a = tempx, b = tempy;
    while (a % b != 0)
    {
        a--;
        b++;
        res2++;
    }
    if (a == 0)
    {
        res2 = INF;
    }
    cout << min(res1, res2) << '\n';
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